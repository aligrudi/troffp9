#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ustr.h"
#include "common.h"
#include "tr2ps.h"

int hpos = 0, vpos = 0;
int fontsize, fontpos;

#define MAXSTR		128

int trindex;			/* index into trofftab of current troff font */
static int expecthmot = 0;

void initialize(void)
{
}

void hgoto(int x)
{
	hpos = x;
	if (pageon())
		endstring();
}

void vgoto(int y)
{
	vpos = y;
	if (pageon())
		endstring();
}

void hmot(int x)
{
	int delta;

	if (x < expecthmot - 1 || x > expecthmot + 1) {
		delta = x - expecthmot;
		if (curtrofffontid < 0 || curtrofffontid >= troffontcnt) {
			fprintf(ferr, "troffontcnt=%d curtrofffontid=%d\n",
					troffontcnt, curtrofffontid);
			exit(1);
		}
		if (delta == troffontab[curtrofffontid].spacewidth * fontsize / 10 && isinstring()) {
			if (pageon())
				runeout(' ');
		} else {
			if (pageon()) {	
				endstring();
				if (debug)
					fprintf(ferr, "x=%d expecthmot=%d\n",
						x, expecthmot);
			}
		}
	}
	hpos += x;
	expecthmot = 0;
}

void vmot(int y)
{
	endstring();
	vpos += y;
}

struct charent *findglyph(int trfid, uc_t rune, char *stoken)
{
	struct charent *cp;
	cp = troffontab[trfid].charent[rune];

	for (; cp; cp = cp->next)
		if (cp->name)
			if (strcmp(cp->name, stoken) == 0)
				break;
	return cp;
}

/*
 * Output glyph.  Use first rune to look up character (hash)
 * then use stoken UTF string to find correct glyph in linked
 * list of glyphs in bucket.
 */
void glyphout(uc_t rune, char *stoken, int specialflag)
{
	struct charent *cp;
	int i;
	int fontid;	/* this is the troff font table index, not the mounted font table index */
	int mi = -1, wid;
	uc_t r;

	settrfont();

	/* check current font for the character, special or not */
	fontid = curtrofffontid;
	cp = findglyph(fontid, rune, stoken);
	if (cp)
		goto foundit;

	if (specialflag) {
		if (expecthmot)
			hmot(0);

		if (!*troffontab[fontid].trfontid)
			error(WARNING, "glyphout:troffontab[%d].trfontid=0x%x, botch!\n",
				fontid, troffontab[fontid].trfontid);
		/* check special fonts for the special character */
		/* cycle through the (troff) mounted fonts starting at the next font */
		for (mi = 0; mi < fontmnt; mi++) {
			if (!*fontmtab[mi])
				continue;
			if (strcmp(troffontab[fontid].trfontid, fontmtab[mi]) == 0)
				break;
		}
		if (mi == fontmnt)
			error(FATAL, "current troff font is not mounted, botch!\n");
		for (i = (mi + 1) % fontmnt; i != mi; i = (i+1) % fontmnt) {
			if (!*fontmtab[i])
				continue;
			fontid = findtfn(fontmtab[i], TRUE);
			/* looking in special fonts */
			if (troffontab[fontid].special) {
				cp = findglyph(fontid, rune, stoken);
				if (cp)
					goto foundit;
			}
		}

		/* check font 1 (if current font is not font 1) for the special character */
		if (mi != 1) {
			fontid = findtfn(fontmtab[1], TRUE);
			cp = findglyph(fontid, rune, stoken);
			if (cp)
				goto foundit;
		}
	}

	if (!cp) {
		error(WARNING, "cannot find glyph, rune=0x%x stoken=<%s> troff font %s\n",
			rune, stoken, troffontab[curtrofffontid].trfontid);
		expecthmot = 0;
		return;
	}

foundit:
	/* set the correct font */
	setpsfont(findpfn(troffontab[fontid].psfontid, 1), fontsize);

	if (cp->charnum == 0x0001) {	/* character is in charlib */
		endstring();
		if (pageon()) {
			fprintf(fout, "%d %d m ", hpos, vpos);
			/* if char is unicode character rather than name, clean up for postscript */
			wid = uc_dec(&r, cp->name);
			if (' ' < r && r < 0x7F) {
				fprintf(fout, "%d build_%s\n",
					cp->troffcharwidth, cp->name);
			} else {
				if (cp->name[wid] != 0)
					error(FATAL, "character <%s> badly named\n", cp->name);
				fprintf(fout, "%d build_X%.4x\n", cp->troffcharwidth, r);
			}
			build_char(cp);
		}
		expecthmot = cp->troffcharwidth * fontsize / unitwidth;
	} else if (isinstring() || rune != ' ') {
		if (pageon()) {
			if (rune == ' ')
				showglyph(" ");
			else if (cp->charnum < 256)
				showglyph(charcode[cp->charnum].str);
			else if (*cp->gname)
				showglyph_byname(cp->gname);
		}
		expecthmot = cp->troffcharwidth * fontsize / unitwidth;
	}
}

/*
 * runeout puts a symbol into a string (queue) to be output.
 * It also has to keep track of the current and last symbol
 * output to check that the spacing is correct by default
 * or needs to be adjusted with a spacing operation.
 */
void runeout(uc_t rune)
{
	char stoken[UTFmax + 1];
	int i;

	i = uc_enc(stoken, rune);
	stoken[i] = '\0';
	glyphout(rune, stoken, TRUE);
}

void specialout(char *stoken)
{
	uc_t rune;
	int i;

	i = uc_dec(&rune, stoken);
	glyphout(rune, stoken, TRUE);
}
