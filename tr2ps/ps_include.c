#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ustr.h"
#include "common.h"

static char *ps_head[] = {
	"%ps_include: begin\n",
	"save\n",
	"/ed {exch def} def\n",
	"{} /showpage ed\n",
	"{} /copypage ed\n",
	"{} /erasepage ed\n",
	"{} /letter ed\n",
	"currentdict /findfont known systemdict /findfont known and {\n",
	"	/findfont systemdict /findfont get def\n",
	"} if\n",
	"36 dict dup /PS-include-dict-dw ed begin\n",
	"/context ed\n",
	"count array astore /o-stack ed\n",
	"%ps_include: variables begin\n",
	NULL
};

static char *ps_setup[] = {
	"%ps_include: variables end\n",
	"{llx lly urx ury} /bbox ed\n",
	"{newpath 2 index exch 2 index exch dup 6 index exch\n",
	" moveto 3 {lineto} repeat closepath} /boxpath ed\n",
	"{dup mul exch dup mul add sqrt} /len ed\n",
	"{2 copy gt {exch} if pop} /min ed\n",
	"{2 copy lt {exch} if pop} /max ed\n",
	"{transform round exch round exch A itransform} /nice ed\n",
	"{6 array} /n ed\n",
	"n defaultmatrix n currentmatrix n invertmatrix n concatmatrix /A ed\n",
	"urx llx sub 0 A dtransform len /Sx ed\n",
	"0 ury lly sub A dtransform len /Sy ed\n",
	"llx urx add 2 div lly ury add 2 div A transform /Cy ed /Cx ed\n",
	"rot dup sin abs /S ed cos abs /C ed\n",
	"Sx S mul Sy C mul add /H ed\n",
	"Sx C mul Sy S mul add /W ed\n",
	"sy H div /Scaley ed\n",
	"sx W div /Scalex ed\n",
	"s 0 eq {Scalex Scaley min dup /Scalex ed /Scaley ed} if\n",
	"sx Scalex W mul sub 0 max ax 0.5 sub mul cx add /cx ed\n",
	"sy Scaley H mul sub 0 max ay 0.5 sub mul cy add /cy ed\n",
	"urx llx sub 0 A dtransform exch atan rot exch sub /rot ed\n",
	"n currentmatrix initgraphics setmatrix\n",
	"cx cy translate\n",
	"Scalex Scaley scale\n",
	"rot rotate\n",
	"Cx neg Cy neg translate\n",
	"A concat\n",
	"bbox boxpath clip newpath\n",
	"w 0 ne {gsave bbox boxpath 1 setgray fill grestore} if\n",
	"end\n",
	"gsave\n",
	"%ps_include: inclusion begin\n",
	NULL
};

static char *ps_tail[] = {
	"%ps_include: inclusion end\n",
	"grestore\n",
	"PS-include-dict-dw begin\n",
	"o 0 ne {gsave A defaultmatrix /A ed llx lly nice urx ury nice\n",
	"	initgraphics 0.1 setlinewidth boxpath stroke grestore} if\n",
	"clear o-stack aload pop\n",
	"context end restore\n",
	"%ps_include: end\n",
	NULL
};

extern int curpostfontid;
extern int curfontsize;

typedef struct {long start, end;} Section;
static char buf[1 << 12];

static void copy(struct ustr *ustr, FILE *fout, Section *s)
{
	if (s->end <= s->start)
		return;
	ustr_seek(ustr, s->start);
	/*
	 * We have to be careful here, because % can legitimately appear
	 * in Ascii85 encodings, and must not be elided.
	 * The goal here is to make any DSC comments impotent without
	 * actually changing the behavior of the Postscript.
	 * Since stripping ``comments'' breaks Ascii85, we can instead just
	 * indent comments a space, which turns DSC comments into non-DSC comments
	 * and has no effect on binary encodings, which are whitespace-blind.
	 */
	while (ustr_pos(ustr) < s->end && ustr_line(ustr, buf, sizeof(buf)) > 0) {
		if (buf[0] == '%')
			fputc(' ', fout);
		fputs(buf, fout);
	}
}

/*
 *
 * Reads a PostScript file (*fin), and uses structuring comments to locate the
 * prologue, trailer, global definitions, and the requested page. After the whole
 * file is scanned, the  special ps_include PostScript definitions are copied to
 * *fout, followed by the prologue, global definitions, the requested page, and
 * the trailer. Before returning the initial environment (saved in ps_head) is
 * restored.
 *
 * By default we assume the picture is 8.5 by 11 inches, but the BoundingBox
 * comment, if found, takes precedence.
 *
 *	*fin, *fout;		input and output files
 *	page_no;		physical page number from *fin
 *	whiteout;		erase picture area
 *	outline;		draw a box around it and
 *	scaleboth;		scale both dimensions - if not zero
 *	cx, cy;			center of the picture and
 *	sx, sy;			its size - in current coordinates
 *	ax, ay;			left-right, up-down adjustment
 *	rot;			rotation - in clockwise degrees
 */
void ps_include(struct ustr *ustr, FILE *fout, int page_no, int whiteout,
	int outline, int scaleboth, double cx, double cy, double sx, double sy,
	double ax, double ay, double rot)
{
	char  **strp;
	int foundpage = 0;		/* found the page when non zero */
	int foundpbox = 0;		/* found the page bounding box */
	int nglobal = 0;		/* number of global defs so far */
	int maxglobal = 0;		/* and the number we've got room for */
	Section	prolog, page, trailer;	/* prologue, page, and trailer offsets */
	Section	*global;		/* offsets for all global definitions */
	double llx, lly;		/* lower left and */
	double urx, ury;		/* upper right corners - default coords */
	double w = whiteout != 0;	/* mostly for the var() macro */
	double o = outline != 0;
	double s = scaleboth != 0;
	int i;

#define has(word)	(strncmp(buf, word, strlen(word)) == 0)
#define grab(n)		((Section *)(nglobal \
			? realloc((char *)global, n*sizeof(Section)) \
			: calloc(n, sizeof(Section))))

	llx = lly = 0;		/* default BoundingBox - 8.5x11 inches */
	urx = 72 * 8.5;
	ury = 72 * 11.0;

	/* section boundaries and bounding box */

	prolog.start = prolog.end = 0;
	page.start = page.end = 0;
	trailer.start = 0;
	ustr_seek(ustr, 0);
	global = NULL;

	while (ustr_line(ustr, buf, sizeof(buf)) > 0) {
		if (!has("%%"))
			continue;
		else if (has("%%Page: ")) {
			if (!foundpage)
				page.start = ustr_pos(ustr);
			sscanf(buf, "%*s %*s %d", &i);
			if (i == page_no)
				foundpage = 1;
			else if (foundpage && page.end <= page.start)
				page.end = ustr_pos(ustr);
		} else if (has("%%EndPage: ")) {
			sscanf(buf, "%*s %*s %d", &i);
			if (i == page_no) {
				foundpage = 1;
				page.end = ustr_pos(ustr);
			}
			if (!foundpage)
				page.start = ustr_pos(ustr);
		} else if (has("%%PageBoundingBox: ")) {
			if (i == page_no) {
				foundpbox = 1;
				sscanf(buf, "%*s %lf %lf %lf %lf",
						&llx, &lly, &urx, &ury);
			}
		} else if (has("%%BoundingBox: ")) {
			if (!foundpbox)
				sscanf(buf,"%*s %lf %lf %lf %lf",
						&llx, &lly, &urx, &ury);
		} else if (has("%%EndProlog") || has("%%EndSetup") || has("%%EndDocumentSetup"))
			prolog.end = page.start = ustr_pos(ustr);
		else if (has("%%Trailer"))
			trailer.start = ustr_pos(ustr);
		else if (has("%%BeginGlobal")) {
			if (page.end <= page.start) {
				if (nglobal >= maxglobal) {
					maxglobal += 20;
					global = grab(maxglobal);
				}
				global[nglobal].start = ustr_pos(ustr);
			}
		} else if (has("%%EndGlobal"))
			if (page.end <= page.start)
				global[nglobal++].end = ustr_pos(ustr);
	}
	if (trailer.start == 0)
		trailer.start = ustr_pos(ustr);
	trailer.end = ustr_pos(ustr);

	if (page.end <= page.start)
		page.end = trailer.start;

	/* all output here */
	for (strp = ps_head; *strp != NULL; strp++)
		fputs(*strp, fout);

	fprintf(fout, "/llx %g def\n", llx);
	fprintf(fout, "/lly %g def\n", lly);
	fprintf(fout, "/urx %g def\n", urx);
	fprintf(fout, "/ury %g def\n", ury);
	fprintf(fout, "/w %g def\n", w);
	fprintf(fout, "/o %g def\n", o);
	fprintf(fout, "/s %g def\n", s);
	fprintf(fout, "/cx %g def\n", cx);
	fprintf(fout, "/cy %g def\n", cy);
	fprintf(fout, "/sx %g def\n", sx);
	fprintf(fout, "/sy %g def\n", sy);
	fprintf(fout, "/ax %g def\n", ax);
	fprintf(fout, "/ay %g def\n", ay);
	fprintf(fout, "/rot %g def\n", rot);

	for (strp = ps_setup; *strp != NULL; strp++)
		fputs(*strp, fout);

	copy(ustr, fout, &prolog);
	for(i = 0; i < nglobal; i++)
		copy(ustr, fout, &global[i]);
	copy(ustr, fout, &page);
	copy(ustr, fout, &trailer);
	for (strp = ps_tail; *strp != NULL; strp++)
		fputs(*strp, fout);

	if(nglobal)
		free(global);

	/* force the program to reestablish its state */
	curpostfontid = -1;
	curfontsize = -1;
}
