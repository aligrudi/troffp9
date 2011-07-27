#include <ctype.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "ustr.h"
#include "common.h"
#include "tr2ps.h"
#include "comments.h"
#include "path.h"

int devres;
int unitwidth;
static char encoding[256];

#define NDESCTOKS		9

static char *desctoks[NDESCTOKS] = {
	"PDL",
	"Encoding",
	"fonts",
	"sizes",
	"res",
	"hor",
	"vert",
	"unitwidth",
	"charset"
};

char *spechar[MAXSPECHARS];

int hash(char *s, int l)
{
	unsigned i;

	for (i = 0; *s; s++)
		i = i * 10 + *s;
	return i % l;
}

int readDESC(void)
{
	char token[MAXTOKENSIZE];
	char descfilename[512];
	int fd;
	struct ustr *ustr;
	int state = -1;
	int fontindex = 0;
	int i;

	if (debug)
		fprintf(ferr, "readDESC()\n");
	sprintf(descfilename, "%s/dev%s/DESC", FONTDIR, devname);
	if ((fd = open(descfilename, O_RDONLY)) < 0) {
		error(WARNING, "cannot open file %s\n", descfilename);
		return 0;
	}
	ustr = ustr_fill(fd);

	while (ustr_str(ustr, token, MAXTOKENSIZE) > 0) {
		for (i = 0; i < NDESCTOKS; i++) {
			if (strcmp(desctoks[i], token) == 0) {
				state = i;
				break;
			}
		}
		if (i < NDESCTOKS)
			continue;
		switch (state) {
		case 0:
			if (debug)
				fprintf(ferr, "PDL %s\n", token);
			break;	
		case 1:
			strcpy(encoding, token);
			if (debug)
				fprintf(ferr, "encoding %s\n", token);
			break;
		case 2:
			if (fontmnt <= 0) {
				if (!isdigit(*token)) {
					error(WARNING, "readdesc: expecting number of fonts in mount table.\n");
					return FALSE;
				}
				fontmnt = atoi(token) + 1;
				for (i = 0; i < fontmnt; i++)
					fontmtab[i][0] = 0;
				fontindex = 0;
			} else {
				mountfont(++fontindex, token);
				findtfn(token, TRUE);
			}
			break;
		case 3:
			/* I don't really care about sizes */
			break;
		case 4:
			/* device resolution in dots per inch */
			if (!isdigit(*token)) {
				error(WARNING, "readdesc: expecting device resolution.\n");
				return(FALSE);
			}
			devres = atoi(token);
			if (debug)
				fprintf(ferr, "res %d\n", devres);
			break;
		case 5:
			/* I don't really care about horizontal motion resolution */
			if (debug)
				fprintf(ferr, "ignoring horizontal resolution\n");
			break;
		case 6:
			/* I don't really care about vertical motion resolution */
			if (debug)
				fprintf(ferr, "ignoring vertical resolution\n");
			break;
		case 7:
			/* unitwidth is the font size at which the character widths are 1:1 */
			if (!isdigit(*token)) {
				error(WARNING, "readdesc: expecting unitwidth.\n");
				return FALSE;
			}
			unitwidth = atoi(token);
			if (debug)
				fprintf(ferr, "unitwidth %d\n", unitwidth);
			break;
		case 8:
			/* I don't really care about this list of special characters */
			if (debug)
				fprintf(ferr, "ignoring special character <%s>\n", token);
			break;
		default:
			if (*token == '#')
				ustr_eol(ustr);
			else
				error(WARNING, "unknown token %s in DESC file.\n", token);
			break;
		}
	}
	ustr_free(ustr);
	return 0;
}
