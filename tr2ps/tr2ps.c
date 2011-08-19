#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include "ustr.h"
#include "common.h"
#include "tr2ps.h"
#include "comments.h"
#include "path.h"

#define MAXBCHARS		512

static int formsperpage = 1;
static double aspectratio = 1.0;
static int copies = 1;
static int landscape = 0;
static double magnification = 1.0;
static int pointsize = 10;
static char *passthrough = 0;
int picflag = 1;
double xoffset = .25;
double yoffset = .25;

FILE *fout, *ferr;
struct ustr *fin;

static char tmpfilename[MAXTOKENSIZE];
static char copybuf[BUFSIZ];

static struct charent *build_char_list[MAXBCHARS];
static int build_char_cnt = 0;

/*
 * stash charent pointer in a list so that we can
 * print these character definitions in the prologue.
 */
void build_char(struct charent *cp)
{
	int i;
	for (i = 0; i < build_char_cnt; i++)
		if (cp == build_char_list[i])
			break;
	if (i == build_char_cnt)
		build_char_list[build_char_cnt++] = cp;
}

void prologues(void)
{
	int i;
	char charlibname[MAXTOKENSIZE];

	fprintf(fout, "%s", CONFORMING);
	fprintf(fout, "%s %s\n", VERSION, PROGRAMVERSION);
	fprintf(fout, "%s %s\n", CREATOR, PROGRAMNAME);
	fprintf(fout, "%s %s\n", DOCUMENTFONTS, ATEND);
	fprintf(fout, "%s %s\n", PAGES, ATEND);
	fprintf(fout, "%s", ENDCOMMENTS);

	if (cat(DPOST)) {
		fprintf(ferr, "can't read %s\n", DPOST);
		exit(1);
	}

	if (drawflag) {
		if (cat(DRAW)) {
			fprintf(ferr, "can't read %s\n", DRAW);
			exit(1);
		}
	}
	if (DOROUND)
		cat(ROUNDPAGE);

	fprintf(fout, "%s", ENDPROLOG);
	fprintf(fout, "%s", BEGINSETUP);
	fprintf(fout, "mark\n");
	if (formsperpage > 1) {
		fprintf(fout, "%s %d\n", FORMSPERPAGE, formsperpage);
		fprintf(fout, "/formsperpage %d def\n", formsperpage);
	}
	if (aspectratio != 1)
		fprintf(fout, "/aspectratio %g def\n", aspectratio);
	if (copies != 1)
		fprintf(fout, "/#copies %d store\n", copies);
	if (landscape)
		fprintf(fout, "/landscape true def\n");
	if (magnification != 1)
		fprintf(fout, "/magnification %g def\n", magnification);
	if (pointsize != 10)
		fprintf(fout, "/pointsize %d def\n", pointsize);
	if (xoffset != .25)
		fprintf(fout, "/xoffset %g def\n", xoffset);
	if (yoffset != .25)
		fprintf(fout, "/yoffset %g def\n", yoffset);
	if (passthrough != 0)
		fprintf(fout, "%s\n", passthrough);

	fprintf(fout, "setup\n");
	if (formsperpage > 1) {
		cat(FORMFILE);
		fprintf(fout, "%d setupforms \n", formsperpage);
	}
	/* output Build character info from charlib if necessary. */
	for (i = 0; i < build_char_cnt; i++) {
		sprintf(charlibname, "%s/dev%s/charlib/%s",
			FONTDIR, devname, build_char_list[i]->name);
		if (cat(charlibname))
			fprintf(fout, "cannot open %s\n", charlibname);
	}

	fprintf(fout, "%s", ENDSETUP);
}

void cleanup(void)
{
	remove(tmpfilename);
}

int main(int argc, char *argv[])
{
	int i, tot, ifd;

	fout = stdout;
	ferr = stderr;
	programname = argv[0];

	tmpnam(tmpfilename);
	if (!(fout = fopen(tmpfilename, "w"))) {
		fprintf(ferr, "cannot open temporary file %s\n", tmpfilename);
		exit(1);
	}
	atexit(cleanup);
	
	i = 1;
	while (i < argc && argv[i][0] == '-') {
		switch (argv[i][1]) {
		case 'a':			/* aspect ratio */
			aspectratio = atof(argv[++i]);
			break;
		case 'c':			/* copies */
			copies = atoi(argv[++i]);
			break;
		case 'd':
			debug = 1;
			break;
		case 'm':			/* magnification */
			magnification = atof(argv[++i]);
			break;
		case 'n':			/* forms per page */
			formsperpage = atoi(argv[++i]);
			break;
		case 'o':			/* output page list */
			pagelist(argv[++i]);
			break;
		case 'p':			/* landscape or portrait mode */
			if (argv[++i][0] == 'l')
				landscape = 1;
			else
				landscape = 0;
			break;
		case 'x':			/* shift things horizontally */
			xoffset = atof(argv[++i]);
			break;
		case 'y':			/* and vertically on the page */
			yoffset = atof(argv[++i]);
			break;
		case 'P':			/* PostScript pass through */
			passthrough = argv[++i];
			break;
		default:	/* don't know what to do for ch */
			fprintf(ferr, "unknown option %s\n", argv[i]);
		}
		i++;
	}
	if (i == argc) {
		fin = ustr_fill(0);
		if (debug)
			fprintf(ferr, "using standard input\n");
		conv(fin);
		ustr_free(fin);
	}
	for (; i < argc; i++) {
		int fd = open(argv[i], O_RDONLY);
		if (fd < 0) {
			fprintf(ferr, "cannot open file %s\n", argv[i]);
			continue;
		}
		fin = ustr_fill(fd);
		close(fd);
		conv(fin);
		ustr_free(fin);
	}
	fclose(fout);

	if ((ifd = open(tmpfilename, O_RDONLY)) < 0) {
		fprintf(ferr, "open of %s failed.\n", tmpfilename);
		exit(1);
	}

	fout = stdout;
	prologues();
	fflush(fout);
	tot = 0;
	i = 0;
	while ((i = read(ifd, copybuf, BUFSIZ)) > 0) {
		if (write(1, copybuf, i) != i) {
			fprintf(ferr, "write error on copying from temp file.\n");
			exit(1);
		}
		tot += i;
	}
	if (debug)
		fprintf(ferr, "copied %d bytes to final output i=%d\n", tot, i);
	if (i < 0) {
		fprintf(ferr, "read error on copying from temp file.\n");
		exit(1);
	}
	finish();

	return 0;
}
