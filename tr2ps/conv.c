#include <string.h>
#include <stdio.h>
#include "ustr.h"
#include "common.h"
#include "tr2ps.h"

void conv(struct ustr *ustr)
{
	int n;
	int r;
	char special[10];
	int save;

	inputlineno = 1;
	if (debug)
		fprintf(ferr, "conv(Biobufhdr *Bp=0x%p)\n", ustr);
	while (ustr_uc(ustr, &r) >= 0) {
		switch (r) {
		case 's':	/* set point size */
			ustr_int(ustr, &fontsize);
			break;
		case 'f':	/* set font to postion */
			ustr_int(ustr, &fontpos);
			save = inputlineno;
			settrfont();
			inputlineno = save;	/* ugh */
			break;
		case 'c':	/* print rune */
			ustr_uc(ustr, &r);
			runeout(r);
			break;
		case 'C':	/* print special character */
			ustr_str(ustr, special, 10);
			specialout(special);
			break;
		case 'N':	/* print character with numeric value from current font */
			ustr_int(ustr, &n);
			break;
		case 'H':	/* go to absolute horizontal position */
			ustr_int(ustr, &n);
			hgoto(n);
			break;
		case 'V':	/* go to absolute vertical position */
			ustr_int(ustr, &n);
			vgoto(n);
			break;
		case 'h':	/* go to relative horizontal position */
			ustr_int(ustr, &n);
			hmot(n);
			break;
		case 'v':	/* go to relative vertical position */
			ustr_int(ustr, &n);
			vmot(n);
			break;
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
				/* move right nn units, then print character c */
			n = (r - '0') * 10;
			ustr_uc(ustr, &r);
			if (r < 0)
				error(FATAL, "EOF or error reading input\n");
			else if (r < '0' || r > '9')
				error(FATAL, "integer expected\n");
			n += r - '0';
			ustr_uc(ustr, &r);
			hmot(n);
			runeout(r);
			break;
		case 'p':	/* begin page */
			ustr_int(ustr, &n);
			endpage();
			startpage();
			break;
		case 'n':	/* end of line (information only 'b a' follows) */
			ustr_eol(ustr);	/* toss rest of line */
			inputlineno++;
			break;
		case 'w':	/* paddable word space (information only) */
			break;
		case 'D':	/* graphics function */
			draw(ustr);
			break;
		case 'x':	/* device control functions */
			devcntl(ustr);
			break;
		case '#':	/* comment */
			ustr_eol(ustr);	/* toss rest of line */
		case '\n':
			inputlineno++;
			break;
		default:
			error(WARNING, "unknown troff function <%c>\n", r);
			break;
		}
	}
	endpage();
	if (debug)
		fprintf(ferr, "r=0x%x\n", r);
	if (debug)
		fprintf(ferr, "leaving conv\n");
}
