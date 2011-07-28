#include <ctype.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include "common.h"
#include "comments.h"
#include "path.h"

struct strtab charcode[256] = {
	{4, "\\000"}, {4, "\\001"}, {4, "\\002"}, {4, "\\003"},
	{4, "\\004"}, {4, "\\005"}, {4, "\\006"}, {4, "\\007"},
	{4, "\\010"}, {4, "\\011"}, {4, "\\012"}, {4, "\\013"},
	{4, "\\014"}, {4, "\\015"}, {4, "\\016"}, {4, "\\017"},
	{4, "\\020"}, {4, "\\021"}, {4, "\\022"}, {4, "\\023"},
	{4, "\\024"}, {4, "\\025"}, {4, "\\026"}, {4, "\\027"},
	{4, "\\030"}, {4, "\\031"}, {4, "\\032"}, {4, "\\033"},
	{4, "\\034"}, {4, "\\035"}, {4, "\\036"}, {4, "\\037"},
	{1, " "}, {1, "!"}, {1, "\""}, {1, "#"},
	{1, "$"}, {1, "%"}, {1, "&"}, {1, "'"},
	{2, "\\("}, {2, "\\)"}, {1, "*"}, {1, "+"},
	{1, ","}, {1, "-"}, {1, "."}, {1, "/"},
	{1, "0"}, {1, "1"}, {1, "2"}, {1, "3"},
	{1, "4"}, {1, "5"}, {1, "6"}, {1, "7"},
	{1, "8"}, {1, "9"}, {1, ":"}, {1, ";"},
	{1, "<"}, {1, "="}, {1, ">"}, {1, "?"},
	{1, "@"}, {1, "A"}, {1, "B"}, {1, "C"},
	{1, "D"}, {1, "E"}, {1, "F"}, {1, "G"},
	{1, "H"}, {1, "I"}, {1, "J"}, {1, "K"},
	{1, "L"}, {1, "M"}, {1, "N"}, {1, "O"},
	{1, "P"}, {1, "Q"}, {1, "R"}, {1, "S"},
	{1, "T"}, {1, "U"}, {1, "V"}, {1, "W"},
	{1, "X"}, {1, "Y"}, {1, "Z"}, {1, "["},
	{2, "\\\\"}, {1, "]"}, {1, "^"}, {1, "_"},
	{1, "`"}, {1, "a"}, {1, "b"}, {1, "c"},
	{1, "d"}, {1, "e"}, {1, "f"}, {1, "g"},
	{1, "h"}, {1, "i"}, {1, "j"}, {1, "k"},
	{1, "l"}, {1, "m"}, {1, "n"}, {1, "o"},
	{1, "p"}, {1, "q"}, {1, "r"}, {1, "s"},
	{1, "t"}, {1, "u"}, {1, "v"}, {1, "w"},
	{1, "x"}, {1, "y"}, {1, "z"}, {1, "{"},
	{1, "|"}, {1, "}"}, {1, "~"}, {4, "\\177"},
	{4, "\\200"}, {4, "\\201"}, {4, "\\202"}, {4, "\\203"},
	{4, "\\204"}, {4, "\\205"}, {4, "\\206"}, {4, "\\207"},
	{4, "\\210"}, {4, "\\211"}, {4, "\\212"}, {4, "\\213"},
	{4, "\\214"}, {4, "\\215"}, {4, "\\216"}, {4, "\\217"},
	{4, "\\220"}, {4, "\\221"}, {4, "\\222"}, {4, "\\223"},
	{4, "\\224"}, {4, "\\225"}, {4, "\\226"}, {4, "\\227"},
	{4, "\\230"}, {4, "\\231"}, {4, "\\232"}, {4, "\\233"},
	{4, "\\234"}, {4, "\\235"}, {4, "\\236"}, {4, "\\237"},
	{4, "\\240"}, {4, "\\241"}, {4, "\\242"}, {4, "\\243"},
	{4, "\\244"}, {4, "\\245"}, {4, "\\246"}, {4, "\\247"},
	{4, "\\250"}, {4, "\\251"}, {4, "\\252"}, {4, "\\253"},
	{4, "\\254"}, {4, "\\255"}, {4, "\\256"}, {4, "\\257"},
	{4, "\\260"}, {4, "\\261"}, {4, "\\262"}, {4, "\\263"},
	{4, "\\264"}, {4, "\\265"}, {4, "\\266"}, {4, "\\267"},
	{4, "\\270"}, {4, "\\271"}, {4, "\\272"}, {4, "\\273"},
	{4, "\\274"}, {4, "\\275"}, {4, "\\276"}, {4, "\\277"},
	{4, "\\300"}, {4, "\\301"}, {4, "\\302"}, {4, "\\303"},
	{4, "\\304"}, {4, "\\305"}, {4, "\\306"}, {4, "\\307"},
	{4, "\\310"}, {4, "\\311"}, {4, "\\312"}, {4, "\\313"},
	{4, "\\314"}, {4, "\\315"}, {4, "\\316"}, {4, "\\317"},
	{4, "\\320"}, {4, "\\321"}, {4, "\\322"}, {4, "\\323"},
	{4, "\\324"}, {4, "\\325"}, {4, "\\326"}, {4, "\\327"},
	{4, "\\330"}, {4, "\\331"}, {4, "\\332"}, {4, "\\333"},
	{4, "\\334"}, {4, "\\335"}, {4, "\\336"}, {4, "\\337"},
	{4, "\\340"}, {4, "\\341"}, {4, "\\342"}, {4, "\\343"},
	{4, "\\344"}, {4, "\\345"}, {4, "\\346"}, {4, "\\347"},
	{4, "\\350"}, {4, "\\351"}, {4, "\\352"}, {4, "\\353"},
	{4, "\\354"}, {4, "\\355"}, {4, "\\356"}, {4, "\\357"},
	{4, "\\360"}, {4, "\\361"}, {4, "\\362"}, {4, "\\363"},
	{4, "\\364"}, {4, "\\365"}, {4, "\\366"}, {4, "\\367"},
	{4, "\\370"}, {4, "\\371"}, {4, "\\372"}, {4, "\\373"},
	{4, "\\374"}, {4, "\\375"}, {4, "\\376"}, {4, "\\377"}
};

static int in_string = FALSE;
int char_no = 0;
int line_no = 0;
int page_no = 0;		/* page number in a document */
int pages_printed = 0;

static struct {
	int beg;
	int end;
} pplist[128];		/* list of pages to print */
static int pplist_cnt;

void pagelist(char *list)
{
	char *next, *dash;

	while (list && *list) {
		next = strchr(list, ',');
		dash = strchr(list, '-');
		pplist[pplist_cnt].beg = atoi(list);
		if (dash && (!next || dash < next))
			pplist[pplist_cnt].end = atoi(dash + 1);
		else
			pplist[pplist_cnt].end = atoi(list);
		list = next ? next + 1 : NULL;
		pplist_cnt++;
	}
}

int pageon(void)
{
	extern int debug;
	static int _debug;		/* previous value of debug */
	int i;

	for (i = 0; i < pplist_cnt; i++)
		if (page_no >= pplist[i].beg && page_no <= pplist[i].end)
			break;

	if (pplist_cnt == 0 && page_no != 0 || i < pplist_cnt) {
		if (_debug && !debug) {
			_debug = FALSE;
			debug = TRUE;
		}
		return 1;	/* no page list, print all pages */
	} else {
		if (!_debug && debug) {
			_debug = TRUE;
			debug = FALSE;
		}
		return 0;
	}
}

static int stringhpos, stringvpos;

static void startstring(void)
{
	if (!in_string) {
		stringhpos = hpos;
		stringvpos = vpos;
		if (pageon())
			fprintf(fout, "(");
		in_string = 1;
	}
}

void endstring(void)
{
	if (in_string) {
		if (pageon())
			fprintf(fout, ") %d %d w\n", stringhpos, stringvpos);
		in_string = 0;
	}
}

int isinstring(void)
{
	return in_string;
}

void showglyph(char *s)
{
	if (!in_string)
		startstring();
	fprintf(fout, "%s", s);
}

void showglyph_byname(char *s)
{
	if (in_string)
		endstring();
	fprintf(fout, "/%s %d %d g\n", s, hpos, vpos);
}

void startpage(void)
{
	++char_no;
	++line_no;
	++page_no;
	if (pageon()) {
		++pages_printed;
		fprintf(fout, "%s %d %d\n", PAGE, page_no, pages_printed);
		fprintf(fout, "/saveobj save def\n");
		fprintf(fout, "mark\n");
		fprintf(fout, "%d pagesetup\n", pages_printed);
	}
}

void endpage(void)
{
	endstring();
	curpostfontid = -1;
	line_no = 0;
	char_no = 0;
	if (pageon()) {
		fprintf(fout, "cleartomark\n");
		fprintf(fout, "showpage\n");
		fprintf(fout, "saveobj restore\n");
		fprintf(fout, "%s %d %d\n", ENDPAGE, page_no, pages_printed);
	}
}

/* This was taken from postprint */

int cat(char *filename)
{
	int n;
	int fd;
	static char buf[1 << 20];

	if ((fd = open(filename, O_RDONLY)) < 0)
		return 1;
	while ((n = read(fd, buf, sizeof(buf))) > 0)
		if (fwrite(buf, n, 1, fout) < 0)
			break;
	close(fd);
	if (n != 0)
		return 1;
	return 0;
}

static char *errorstrings[] = {
	"",	/* NONE */
	"WARNING",
	"FATAL"
};

char *programname;
char *inputfilename = "<stdin>";
int inputlineno;

void error(int errtype, char *fmt, ...)
{
	va_list arg;

	fprintf(stderr, "%s: %s:%d :%s: ", programname,
		inputfilename, inputlineno, errorstrings[errtype]);
	va_start(arg, fmt);
	vfprintf(stderr, fmt, arg);
	va_end(arg);
	if (errtype == FATAL)
		exit(1);
}
