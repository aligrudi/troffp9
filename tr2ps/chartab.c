/*
 *    Unicode   |     PostScript
 *  start  end  | offset  font name
 * 0x0000 0x00ff  0x00   LucidaSansUnicode00
 */
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include "ustr.h"
#include "common.h"
#include "tr2ps.h"
#include "comments.h"
#include "path.h"

struct pfnament {
	char str[MAXFONTNAME];
	int used;
};

/* Postscript font names, e.g., `LucidaSansUnicode00'
 * names may only be added because reference to the
 * names is made by indexing into this table.
 */
static struct pfnament pfnafontmtab[128];
static int pfnamcnt = 0;
int curpostfontid = -1;
int curfontsize = -1;
int curtrofffontid = -1;
static int curfontpos = -1;
static int fontheight = 0;
static int fontslant = 0;

/* This is troffs mounted font table.  It is an anachronism resulting
 * from the design of the APS typesetter.  fontmnt is the
 * number of positions available.  fontmnt is really 11, but
 * should not be limited.
 */
int fontmnt = 0;
char fontmtab[MAXFONT][MAXFONTNAME];

struct troffont troffontab[MAXFONT];

int troffontcnt = 0;

void mountfont(int pos, char *fontname)
{
	if (debug)
		fprintf(ferr, "mountfont(%d, %s)\n", pos, fontname);
	if (pos < 0 || pos >= fontmnt)
		error(FATAL, "cannot mount a font at position %d,\n"
			"  can only mount into postions 0-%d\n",
			pos, fontmnt - 1);
	strcpy(fontmtab[pos], fontname);
	if (curfontpos == pos)
		curfontpos = -1;
}

void settrfont(void)
{
	if (curfontpos == fontpos)
		return;

	if (!*fontmtab[fontpos])
		error(FATAL, "Font at position %d was not initialized, botch!\n", fontpos);

	curtrofffontid = findtfn(fontmtab[fontpos], 1);
	if (debug)
		fprintf(ferr, "settrfont()-> curtrofffontid=%d\n", curtrofffontid);
	curfontpos = fontpos;
	if (curtrofffontid < 0) {
		int i;

		error(WARNING, "fontpos=%d\n", fontpos);
		for (i = 0; i < fontmnt; i++)
			if (!*fontmtab[i])
				error(WARNING, "fontmtab[%d]=0x0\n", i);
			else
				error(WARNING, "fontmtab[%d]=%s\n", i, fontmtab[i]);
		exit(1);
	}
}

void setpsfont(int psftid, int fontsize)
{
	if (psftid == curpostfontid && fontsize == curfontsize)
		return;
	if (psftid >= pfnamcnt)
		error(FATAL, "Postscript font index=%d used but not defined, there are only %d fonts\n",
			psftid, pfnamcnt);

	endstring();
	if (pageon()) {
		fprintf(fout, "%d /%s f\n", fontsize, pfnafontmtab[psftid].str);
		if (fontheight != 0 || fontslant != 0)
			fprintf(fout, "%d %d changefont\n", fontslant,
				(fontheight != 0) ? fontheight : fontsize);
		pfnafontmtab[psftid].used = 1;
		curpostfontid = psftid;
		curfontsize = fontsize;
	}
}

/* find index of PostScript font name in table
 * returns -1 if name is not in table
 * If insflg is not zero
 * and the name is not found in the table, insert it.
 */
int findpfn(char *fontname, int insflg)
{
	int i;
	for (i = 0; i < pfnamcnt; i++)
		if (strcmp(pfnafontmtab[i].str, fontname) == 0)
			return i;
	if (insflg) {
		strcpy(pfnafontmtab[pfnamcnt].str, fontname);
		pfnafontmtab[pfnamcnt].used = 0;
		return pfnamcnt++;
	}
	return -1;
}

static char postroffdirname[] = TBASE "/ps/troff";	/* "/sys/lib/postscript/troff/"; */
static char troffmetricdirname[] = TBASE "/font";	/* "/sys/lib/troff/font/devutf/"; */

int readpsfontdesc(char *fontname, int trindex)
{
	static char filename[1 << 12];
	int fd;
	struct ustr *ustr;
	int errorflg = 0, line = 1, rv;
	int start, end, offset;
	int startfont, endfont, startchar, endchar, pfid;
	char psfontnam[128];
	struct troffont *tp;

	if (debug)
		fprintf(ferr, "readpsfontdesc(%s,%d)\n", fontname, trindex);
	sprintf(filename, "%s/%s", postroffdirname, fontname);

	fd = open(filename, O_RDONLY);
	if (fd < 0) {
		error(WARNING, "cannot open file %s\n", filename);
		return 0;
	}
	ustr = ustr_fill(fd);
	close(fd);

	do {
		offset = 0;
		if ((rv = ustr_int(ustr, &start)) == 0) {
			errorflg = 1;
			error(WARNING, "file %s:%d illegal start value\n", filename, line);
		} else if (rv < 0) {
			break;
		}
		if ((rv = ustr_int(ustr, &end)) == 0) {
			errorflg = 1;
			error(WARNING, "file %s:%d illegal end value\n",
				filename, line);
		} else if (rv < 0) {
			break;
		}
		if ((rv = ustr_int(ustr, &offset)) < 0) {
			errorflg = 1;
			error(WARNING, "file %s:%d illegal offset value\n",
				filename, line);
		}
		if ((rv = ustr_str(ustr, psfontnam, 128)) == 0) {
			errorflg = 1;
			error(WARNING, "file %s:%d illegal fontname value\n",
				filename, line);
		} else if (rv < 0) {
			break;
		}
		ustr_eol(ustr);
		if (!errorflg) {
			struct psfent *psfentp;
			startfont = RUNEGETGROUP(start);
			startchar = RUNEGETCHAR(start);
			endfont = RUNEGETGROUP(end);
			endchar = RUNEGETCHAR(end);
			pfid = findpfn(psfontnam, 1);
			if (startfont != endfont) {
				error(WARNING, "font descriptions must not cross 256 glyph block boundary\n");
				errorflg = 1;
				break;
			}
			tp = &(troffontab[trindex]);
			tp->psfmap = galloc(tp->psfmap, ++(tp->psfmapsize) *
				sizeof(struct psfent), "readpsfontdesc():psfmap");
			psfentp = &(tp->psfmap[tp->psfmapsize-1]);
			psfentp->start = start;
			psfentp->end = end;
			psfentp->offset = offset;
			psfentp->psftid = pfid;
			if (debug) {
				fprintf(ferr, "\tpsfmap->start=0x%x\n", start);
				fprintf(ferr, "\tpsfmap->end=0x%x\n", end);
				fprintf(ferr, "\tpsfmap->offset=0x%x\n", offset);
				fprintf(ferr, "\tpsfmap->pfid=0x%x\n", pfid);
			}
			if (debug) {
				fprintf(ferr, "%x %x ", start, end);
				if (offset)
					fprintf(ferr, "%x ", offset);
				fprintf(ferr, "%s\n", psfontnam);
			}
			line++;
		}
	} while (errorflg != 1);
	ustr_free(ustr);
	return 1;
}

static int utf8len(char *s)
{
	int i = 0;
	int n;
	while (*s) {
		s += uc_dec(&n, s);
		i++;
	}
	return i;
}

int readtroffmetric(char *fontname, int trindex)
{
	char filename[1024];
	int fd;
	struct ustr *ustr;
	int errorflg = 0, line = 1, rv;
	struct charent **cp;
	char stoken[128];
	char str[1 << 12];
	int ntoken;
	uc_t troffchar, quote;
	int width, flag, charnum, thisfont, thischar;
	int specharflag;

	if (debug)
		fprintf(ferr, "readtroffmetric(%s,%d)\n", fontname, trindex);
	sprintf(filename, "%s/dev%s/%s", troffmetricdirname, devname, fontname);

	fd = open(filename, O_RDONLY);
	if (fd < 0) {
		error(WARNING, "cannot open file %s\n", filename);
		return 0;
	}
	ustr = ustr_fill(fd);
	close(fd);
	do {
		/* deal with the few lines at the beginning of the
		 * troff font metric files.
		 */
		if ((rv = ustr_str(ustr, stoken, 128)) == 0) {
			errorflg = 1;
			error(WARNING, "file %s:%d illegal token\n",
					filename, line);
		}
		if (rv < 0)
			break;
		if (debug)
			fprintf(ferr, "%s\n", stoken);

		if (strcmp(stoken, "name") == 0) {
			if ((rv = ustr_str(ustr, stoken, 128)) == 0) {
				errorflg = 1;
				error(WARNING, "file %s:%d illegal token\n",
					filename, line);
			}
			if (rv < 0)
				break;
		} else if (strcmp(stoken, "named") == 0) {
			ustr_eol(ustr);
		} else if (strcmp(stoken, "fontname") == 0) {
			if ((rv = ustr_str(ustr, stoken, 128)) == 0) {
				errorflg = 1;
				error(WARNING, "file %s:%d illegal token\n",
					filename, line);
			}
			if (rv < 0)
				break;
		} else if (strcmp(stoken, "spacewidth") == 0) {
			if ((rv = ustr_int(ustr, &ntoken)) == 0) {
				errorflg = 1;
				error(WARNING, "file %s:%d illegal token\n",
					filename, line);
			}
			if (rv < 0)
				break;
			troffontab[trindex].spacewidth = ntoken;
			thisfont = RUNEGETGROUP(' ');
			thischar = RUNEGETCHAR(' ');
			for (cp = &(troffontab[trindex].charent[thisfont][thischar]); *cp != 0; cp = &((*cp)->next))
				if  (strcmp((*cp)->name, " ") == 0)
					break;

			if (*cp == 0)
				*cp = malloc(sizeof(struct charent));
			(*cp)->postfontid = thisfont;
			(*cp)->postcharid = thischar; 
			(*cp)->troffcharwidth = ntoken;
			(*cp)->next = 0;
			strcpy((*cp)->name, " ");
		} else if (strcmp(stoken, "special") == 0) {
			troffontab[trindex].special = TRUE;
		} else if (strcmp(stoken, "charset") == 0) {
			line++;
			break;
		}
		if (!errorflg)
			line++;
	} while (!errorflg && rv >= 0);
	while (!errorflg && rv >= 0) {
		if ((rv = ustr_str(ustr, stoken, 128)) == 0) {
			errorflg = 1;
			error(WARNING, "file %s:%d illegal rune token <0x%x> rv=%d\n",
					filename, line, troffchar, rv);
		}
		if (rv < 0)
			break;
		if (utf8len(stoken) > 1)
			specharflag = TRUE;
		else
			specharflag = FALSE;
		/* if this character is a quote we have to use the previous characters info */
		if ((rv = ustr_uc_nospace(ustr, &quote)) == 0) {
			errorflg = 1;
			error(WARNING, "file %s:%d illegal width or quote token <0x%x> rv=%d\n",
				filename, line, quote, rv);
		}
		if (rv < 0)
			break;
		if (quote == '"') {
			/* need some code here */
			goto flush;
		} else {
			ustr_back(ustr);
		}

		if ((rv = ustr_int(ustr, &width)) == 0) {
			errorflg = 1;
			error(WARNING, "file %s:%d illegal width token <0x%x> rv=%d\n",
				filename, line, troffchar, rv);
		}
		if (rv < 0)
			break;
		if ((rv = ustr_int(ustr, &flag)) == 0) {
			errorflg = 1;
			error(WARNING, "file %s:%d illegal flag token <0x%x> rv=%d\n",
				filename, line, troffchar, rv);
		}
		if (rv < 0)
			break;
		if ((rv = ustr_int(ustr, &charnum)) == 0) {
			errorflg = 1;
			error(WARNING, "file %s:%d illegal character number token <0x%x> rv=%d\n",
				filename, line, troffchar, rv);
		}
		if (rv < 0)
			break;
flush:
		rv = ustr_line(ustr, str, sizeof(str));
		/* stash the crap from the end of the line for debugging */
		if (debug) {
			if (rv == 0) {
				fprintf(ferr, "premature EOF\n");
				return 0;
			}
			str[strlen(str) - 1] = '\0';
		}
		line++;
		uc_dec(&troffchar, stoken);
		if (specharflag) {
			if (debug)
				fprintf(ferr, "%s %d  %d 0x%x %s # special\n",
					stoken, width, flag, charnum, str);
		}
		if (strcmp(stoken, "---") == 0) {
			thisfont = RUNEGETGROUP(charnum);
			thischar = RUNEGETCHAR(charnum);
			stoken[0] = '\0';
		} else {
			thisfont = RUNEGETGROUP(troffchar);
			thischar = RUNEGETCHAR(troffchar);
		}
		for (cp = &(troffontab[trindex].charent[thisfont][thischar]); *cp != 0; cp = &((*cp)->next)) {
			if (debug)
				fprintf(ferr, "installing <%s>, found <%s>\n",
					stoken, (*cp)->name);
			if  (strcmp((*cp)->name, stoken) == 0)
				break;
		}
		if (!*cp)
			*cp = malloc(sizeof(struct charent));
		(*cp)->postfontid = RUNEGETGROUP(charnum);
		(*cp)->postcharid = RUNEGETCHAR(charnum); 
		(*cp)->troffcharwidth = width;
		(*cp)->next = 0;
		strcpy((*cp)->name, stoken);
		if (debug) {
			if (specharflag)
				fprintf(ferr, "%s", stoken);
			fprintf(ferr, " %d  %d 0x%x %s # psfontid=0x%x pscharid=0x%x thisfont=0x%x thischar=0x%x\n",
				width, flag, charnum, str,
				(*cp)->postfontid,
				(*cp)->postcharid,
				thisfont, thischar);
		}
	}
	ustr_free(ustr);
	return 1;
}

/*
 * find index of troff font name in table
 * returns -1 if name is not in table
 * returns -2 if it cannot allocate memory
 * returns -3 if there is a font mapping problem
 * If insflg is not zero
 * and the name is not found in the table, insert it.
 */
int findtfn(char *fontname, int insflg)
{
	struct troffont *tp;
	int i, j;

	if (debug) {
		if (fontname == 0)
			fprintf(stderr, "findtfn(0x%p,%d)\n", fontname, insflg);
		else
			fprintf(stderr, "findtfn(%s,%d)\n", fontname, insflg);
	}
	for (i = 0; i < troffontcnt; i++) {
		if (!*troffontab[i].trfontid) {
			error(WARNING, "findtfn:troffontab[%d].trfontid=0x%x, botch!\n",
				i, troffontab[i].trfontid);
			continue;
		}
		if (strcmp(troffontab[i].trfontid, fontname) == 0)
			return i;
	}
	if (insflg) {
		tp = &(troffontab[troffontcnt]);
		/* initialize new troff font entry with name and numeric fields to 0 */
		strcpy(tp->trfontid, fontname);
		tp->special = FALSE;
		tp->spacewidth = 0;
		tp->psfmapsize = 0;
		tp->psfmap = 0;
		for (i = 0; i < NUMOFONTS; i++)
			for (j = 0; j < FONTSIZE; j++)
				tp->charent[i][j] = 0;
		troffontcnt++;
		if (!readtroffmetric(fontname, troffontcnt-1))
			return -3;
		if (!readpsfontdesc(fontname, troffontcnt-1))
			return -3;
		return troffontcnt - 1;
	}
	return -1;
}

void finish(void)
{
	int i;

	fprintf(fout, "%s", TRAILER);
	fprintf(fout, "done\n");
	fprintf(fout, "%s", DOCUMENTFONTS);

	for (i = 0; i < pfnamcnt; i++)
		if (pfnafontmtab[i].used)
			fprintf(fout, " %s", pfnafontmtab[i].str);
	fprintf(fout, "\n");

	fprintf(fout, "%s %d\n", PAGES, pages_printed);

}

/* Set slant to n degrees. Disable slanting if n is 0. */
void t_slant(int n)
{
	fontslant = n;
	curpostfontid = -1;
}

/* Set character height to n points. Disabled if n is 0 or the current size. */
void t_charht(int n)
{
	fontheight = (n == fontsize) ? 0 : n;
	curpostfontid = -1;
}
