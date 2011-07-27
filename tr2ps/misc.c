/*
 *
 * General purpose routines.
 *
 */
#include <ctype.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#include "gen.h"
#include "ext.h"
#include "path.h"

int	nolist = 0;			/* number of specified ranges */
int	olist[50];			/* processing range pairs */

/*
 * Grab page ranges from str, save them in olist[], and update the
 * nolist count. Range syntax matches nroff/troff syntax.
 */
void out_list(char *str)
{
	int start, stop;

	while (*str && nolist < sizeof(olist) - 2) {
		start = stop = str_convert(&str, 0);

		if (*str == '-' && *str++)
			stop = str_convert(&str, 9999);
		if (start > stop)
			error(FATAL, "illegal range %d-%d", start, stop);
		olist[nolist++] = start;
		olist[nolist++] = stop;

		if (*str != '\0')
			str++;
	}
	olist[nolist] = 0;
}

/*
 * Return ON if num is in the current page range list. Print everything
 * if there's no list.
 */
int in_olist(int num)
{
	int i;
	if (nolist == 0)
		return ON;

	for (i = 0; i < nolist; i += 2)
		if (num >= olist[i] && num <= olist[i+1])
			return ON;
	return OFF;
}

/*
 * Include the font encoding file selected by name. It's a full
 * pathname if it begins with /, otherwise append suffix ".enc" and
 * look for the file in ENCODINGDIR. Missing files are silently
 * ignored.
 */
void setencoding(char *name)
{

	char path[150];

	if (name == NULL)
		name = "Default";
	if (*name == '/')
		strcpy(path, name);
	else
		sprintf(path, "%s/%s.enc", ENCODINGDIR, name);

	if (cat(path) == TRUE)
		writing = strncmp(name, "UTF", 3) == 0;

}

/*
 * Grab the next integer from **str and return its value or err if *str
 * isn't an integer. *str is modified after each digit is read.
 */
int str_convert(char **str, int err)
{

	int i;
	if (!isdigit(**str))
		return err;
	for (i = 0; isdigit(**str); *str += 1)
		i = 10 * i + **str - '0';
	return i;
}

/* Signal handler for translators. */
void interrupt(int sig)
{
	if (temp_file != NULL)
		unlink(temp_file);
	exit(1);
}
