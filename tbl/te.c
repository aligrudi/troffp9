/* te.c: error message control, input line count */
#include <string.h>
#include <stdlib.h>
#include "t.h"

void error(char *s)
{
	fprintf(stderr, "\n%s:%d: %s\n", ifile, iline, s);
	fprintf(stderr, "tbl quits\n");
	exit(1);
}

char *gets1(char *s, int size)
{
	char *ns;
	int nbl;

	iline++;
	ns = s;
	if (!fgets(s, size, tabin)) {
		if (swapin() == 0)
			return 0;
	}
	nbl = strlen(s);
	if (s[nbl - 1] == '\n')
		s[nbl - 1] = '\0';	/* remove the newline */
	s += nbl - 2;
	for (nbl = 0; s > ns && *s == '\\'; s--)
		nbl++;
	if (linstart && nbl % 2)	/* fold escaped nl if in table */
		gets1(s + 1, size - (s - ns));

	return s;
}


#define BACKMAX		500
char	backup[BACKMAX];
char	*backp = backup;

void un1getc(int c)
{
	if (c == '\n')
		iline--;
	*backp++ = c;
	if (backp >= backup + BACKMAX)
		error("too much backup");
}


int get1char(void)
{
	int	c;
	if (backp > backup)
		c = *--backp;
	else
		c = fgetc(tabin);
	if (c == EOF) {
		if (swapin() == 0)
			error("unexpected EOF");
		c = fgetc(tabin);
	}
	if (c == '\n')
		iline++;
	return c;
}
