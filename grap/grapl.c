typedef unsigned char Uchar;
# include <stdio.h>
# define U(x) x
# define NLSTATE yyprevious=YYNEWLINE
# define BEGIN yybgin = yysvec + 1 +
# define INITIAL 0
# define YYLERR yysvec
# define YYSTATE (yyestate-yysvec-1)
# define YYOPTIM 1
# define YYLMAX 200
# define unput(c) {yytchar= (c);if(yytchar=='\n')yylineno--;*yysptr++=yytchar;}
# define yymore() (yymorfg=1)
# define ECHO fprintf(yyout, "%s",yytext)
# define REJECT { nstr = yyreject(); goto yyfussy;}
int yyleng; extern char yytext[];
int yymorfg;
extern Uchar *yysptr, yysbuf[];
int yytchar;
#define yyin	stdin
#define yyout	stdout
extern int yylineno;
struct yysvf { 
	struct yywork *yystoff;
	struct yysvf *yyother;
	int *yystops;};
struct yysvf *yyestate;
extern struct yysvf yysvec[], *yybgin;
int yylook(void), yywrap(void), yyback(int *, int);
# define output(c) putc(c,yyout)
# define input() (((yytchar=yysptr>yysbuf?U(*--yysptr):getc(yyin))==10?(yylineno++,yytchar):yytchar)==EOF?0:yytchar)
#define A 2
#define str 4
#define def 6
#define thru 8
#define sh 10
#undef	input
#undef	unput
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "grap.h"
#include "y.tab.h"

int	yyback(int *, int);
int	yylook(void);
int	yywrap(void);
void	shell_init(void), shell_exec(void), shell_text(char *);

#define	CADD	cbuf[clen++] = yytext[0]; \
		if (clen >= CBUFLEN-1) { \
			ERROR "string too long", cbuf WARNING; BEGIN A; }
#define	CBUFLEN	1500
char	cbuf[CBUFLEN];
int	clen, cflag;
int	c, delim, shcnt;
#define YYNEWLINE 10
yylex(void){
int nstr; extern int yyprevious;
if (yybgin-yysvec-1 == 0) {	/* witchcraft */
		BEGIN A;
	}
while((nstr = yylook()) >= 0)
yyfussy: switch(nstr){
case 0:
if(yywrap()) return(0); break;
case 1:
	;
break;
case 2:
;
break;
case 3:
	return(ST);
break;
case 4:
	return(ST);
break;
case 5:
	return(yylval.i = LINE);
break;
case 6:
{ yylval.i = ARROW; return(LINE); }
break;
case 7:
return(yylval.i = CIRCLE);
break;
case 8:
return(FRAME);
break;
case 9:
return(TICKS);
break;
case 10:
return(GRID);
break;
case 11:
return(COORD);
break;
case 12:
	return(LOG);
break;
case 13:
	return(EXP);
break;
case 14:
	return(SIN);
break;
case 15:
	return(COS);
break;
case 16:
return(ATAN2);
break;
case 17:
	return(SQRT);
break;
case 18:
	return(RAND);
break;
case 19:
	return(MAX);
break;
case 20:
	return(MIN);
break;
case 21:
	return(INT);
break;
case 22:
return(PRINT);
break;
case 23:
return(SPRINTF);
break;
case 24:
{ yylval.p = tostring(yytext+3); return(PIC); }
break;
case 25:
{ yylval.p = tostring(yytext+5); return(GRAPH); }
break;
case 26:
	return(FOR);
break;
case 27:
{ endfor(); }
break;
case 28:
	{ yylval.p = delimstr("loop body"); BEGIN A; return(DOSTR); }
break;
case 29:
{ return(COPY); }
break;
case 30:
{ BEGIN thru; return(THRU); }
break;
case 31:
;
break;
case 32:
{ yylval.op = copythru(yytext); BEGIN A; return(DEFNAME); }
break;
case 33:
return(UNTIL);
break;
case 34:
	return(IF);
break;
case 35:
	{ yylval.p = delimstr("then part"); BEGIN A; return(THEN); }
break;
case 36:
	{ yylval.p = delimstr("else part"); BEGIN A; return(ELSE); }
break;
case 37:
	return(NEXT);
break;
case 38:
	return(yylval.i = DRAW);
break;
case 39:
	return(yylval.i = NEW);
break;
case 40:
	return(yylval.i = PLOT);
break;
case 41:
return(LABEL);
break;
case 42:
	return(X);
break;
case 43:
	return(Y);
break;
case 44:
	{ yylval.i = TOP; return SIDE; }
break;
case 45:
{ yylval.i = BOT; return SIDE; }
break;
case 46:
	{ yylval.i = LEFT; return SIDE; }
break;
case 47:
{ yylval.i = RIGHT; return SIDE; }
break;
case 48:
	return(yylval.i = UP);
break;
case 49:
	return(yylval.i = DOWN);
break;
case 50:
return(yylval.i = ACROSS);
break;
case 51:
return(yylval.i = HEIGHT);
break;
case 52:
return(yylval.i = WIDTH);
break;
case 53:
return(yylval.i = RADIUS);
break;
case 54:
return(yylval.i = INVIS);
break;
case 55:
return(yylval.i = DOT);
break;
case 56:
return(yylval.i = DASH);
break;
case 57:
return(yylval.i = SOLID);
break;
case 58:
{ yylval.i = LJUST; return JUST; }
break;
case 59:
{ yylval.i = RJUST; return JUST; }
break;
case 60:
{ yylval.i = ABOVE; return JUST; }
break;
case 61:
{ yylval.i = BELOW; return JUST; }
break;
case 62:
	return(yylval.i = SIZE);
break;
case 63:
	return(yylval.i = FROM);
break;
case 64:
	return(yylval.i = TO);
break;
case 65:
return(yylval.i = BY);
break;
case 66:
	return(yylval.i = AT);
break;
case 67:
	return(yylval.i = WITH);
break;
case 68:
	return(yylval.i = IN);
break;
case 69:
	return(yylval.i = OUT);
break;
case 70:
	return(yylval.i = OFF);
break;
case 71:
{	BEGIN sh;
		if ((delim = input()) == '{') {
			shcnt = 1;
			delim = '}';
		}
		shell_init();
	}
break;
case 72:
{
		int c;
		Obj *p;
		if (yytext[0] == delim) {
			shell_exec();
			BEGIN A;
		} else {
			p = lookup(yytext, 0);
			if (p != NULL && p->type == DEFNAME) {
				c = input();
				unput(c);
				if (c == '(')
					dodef(p);
				else
					pbstr(p->val);
			} else
				shell_text(yytext);
		}
	}
break;
case 73:
	{ shcnt++; shell_text(yytext); }
break;
case 74:
	{ if (delim != '}' || --shcnt > 0)
			shell_text(yytext);
		  else {
			shell_exec();
			BEGIN A;
		  }
		}
break;
case 75:
{ if (yytext[0] == delim) {
			shell_exec();
			BEGIN A;
		  } else
			shell_text(yytext);
		}
break;
case 76:
{ BEGIN def; }
break;
case 77:
{ definition(yytext); BEGIN A; }
break;
case 78:
{
		  yylval.f = atof(yytext); return(NUMBER); }
break;
case 79:
{ if (yytext[1] == 'G' && yytext[2] == '2') {
			yylval.i = yytext[2];
			return(EOF);
		  } else {
			yylval.p = tostring(yytext);
			return(PIC);
		  }
		}
break;
case 80:
{
		int c;
		Obj *p;
		p = lookup(yytext, 1);
		if (p->type == DEFNAME) {
			c = input();
			unput(c);
			if (c == '(')	/* it's name(...) */
				dodef(p);
			else	/* no argument list */
				pbstr(p->val);
		} else {
			yylval.op = p;
			return p->type;	/* NAME or VARNAME */
		}
	}
break;
case 81:
	return(EQ);
break;
case 82:
	return(GE);
break;
case 83:
	return(LE);
break;
case 84:
	return(NE);
break;
case 85:
	return(GT);
break;
case 86:
	return(LT);
break;
case 87:
	return(AND);
break;
case 88:
	return(OR);
break;
case 89:
	return(NOT);
break;
case 90:
	{ BEGIN str; clen = 0; }
break;
case 91:
	;
break;
case 92:
	{ yylval.i = yytext[0]; return(yytext[0]); }
break;
case 93:
	{ BEGIN A; cbuf[clen] = 0;
		  yylval.p = tostring(cbuf); return(STRING); }
break;
case 94:
	{ ERROR "newline in string" WARNING; BEGIN A; return(ST); }
break;
case 95:
{ cbuf[clen++] = '\\'; cbuf[clen++] = '"'; }
break;
case 96:
{ cbuf[clen++] = '\\'; cbuf[clen++] = '\\'; }
break;
case 97:
	{ CADD; }
break;
case -1:
break;
default:
fprintf(yyout,"bad switch yylook %d",nstr);
} return(0); }
/* end of yylex */
int yyvstop[] = {
0,

92,
0,

1,
92,
0,

3,
0,

89,
92,
0,

90,
92,
0,

91,
92,
0,

92,
0,

92,
0,

78,
92,
0,

4,
92,
0,

86,
92,
0,

92,
0,

85,
92,
0,

80,
92,
0,

92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

80,
92,
0,

42,
80,
92,
0,

43,
80,
92,
0,

92,
0,

92,
0,

80,
92,
0,

97,
0,

94,
0,

93,
97,
0,

97,
0,

77,
0,

32,
0,

31,
32,
0,

32,
0,

75,
0,

72,
75,
0,

73,
75,
0,

74,
75,
0,

84,
0,

91,
0,

87,
0,

78,
0,

78,
0,

78,
0,

78,
0,

83,
0,

81,
0,

82,
0,

80,
0,

2,
0,

80,
0,

80,
0,

80,
0,

66,
80,
0,

80,
0,

80,
0,

65,
80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

28,
80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

51,
80,
0,

34,
80,
0,

68,
80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

64,
80,
0,

80,
0,

48,
80,
0,

80,
0,

88,
0,

79,
0,

80,
0,

95,
0,

96,
0,

31,
0,

72,
0,

78,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

45,
80,
0,

80,
0,

80,
0,

80,
0,

15,
80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

13,
80,
0,

26,
80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

21,
80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

12,
80,
0,

19,
80,
0,

20,
80,
0,

39,
80,
0,

80,
0,

70,
80,
0,

69,
80,
0,

80,
0,

80,
0,

80,
0,

53,
80,
0,

80,
0,

80,
0,

80,
0,

71,
0,

14,
80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

44,
80,
0,

80,
0,

52,
80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

29,
80,
0,

80,
0,

80,
0,

80,
0,

49,
80,
0,

38,
80,
0,

36,
80,
0,

80,
0,

63,
80,
0,

80,
0,

10,
80,
0,

80,
0,

80,
0,

80,
0,

80,
0,

46,
80,
0,

5,
80,
0,

80,
0,

37,
80,
0,

24,
0,

40,
80,
0,

80,
0,

80,
0,

18,
80,
0,

80,
0,

80,
0,

62,
80,
0,

80,
0,

80,
0,

17,
80,
0,

35,
80,
0,

80,
0,

30,
80,
0,

9,
80,
0,

80,
0,

80,
0,

67,
80,
0,

80,
0,

60,
80,
0,

80,
0,

6,
80,
0,

16,
80,
0,

61,
80,
0,

80,
0,

80,
0,

11,
80,
0,

80,
0,

80,
0,

80,
0,

8,
80,
0,

80,
0,

80,
0,

10,
80,
0,

80,
0,

80,
0,

54,
80,
0,

41,
80,
0,

58,
80,
0,

22,
80,
0,

80,
0,

47,
80,
0,

59,
80,
0,

57,
80,
0,

80,
0,

80,
0,

9,
80,
0,

33,
80,
0,

52,
80,
0,

80,
0,

50,
80,
0,

45,
80,
0,

7,
80,
0,

11,
80,
0,

56,
80,
0,

80,
0,

55,
80,
0,

25,
0,

80,
0,

80,
0,

41,
80,
0,

53,
80,
0,

80,
0,

80,
0,

80,
0,

76,
0,

80,
0,

23,
80,
0,

27,
0,

10,
80,
0,
0};
# define YYTYPE int
struct yywork { YYTYPE verify, advance; } yycrank[] = {
0,0,	0,0,	3,13,	0,0,	
5,52,	0,0,	0,0,	0,0,	
0,0,	0,0,	3,14,	3,15,	
5,52,	5,53,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	9,57,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	9,58,	9,0,	
10,0,	18,65,	3,16,	3,17,	
3,18,	5,54,	6,54,	3,19,	
27,76,	18,65,	18,0,	65,0,	
11,60,	0,0,	0,0,	3,20,	
0,0,	3,21,	0,0,	5,52,	
11,60,	11,60,	0,0,	0,0,	
55,130,	0,0,	58,132,	19,66,	
3,22,	3,23,	3,24,	3,25,	
0,0,	0,0,	3,26,	0,0,	
5,52,	9,57,	20,67,	20,67,	
20,67,	20,67,	20,67,	20,67,	
20,67,	20,67,	20,67,	20,67,	
18,65,	58,132,	16,64,	23,72,	
24,73,	25,74,	9,59,	0,0,	
0,0,	0,0,	0,0,	11,60,	
0,0,	3,27,	0,0,	5,55,	
6,55,	18,65,	3,28,	3,29,	
3,30,	3,31,	3,32,	3,33,	
3,34,	3,35,	3,36,	0,0,	
11,61,	3,37,	3,38,	3,39,	
3,40,	3,41,	55,131,	3,42,	
3,43,	3,44,	3,45,	80,139,	
3,46,	3,47,	3,48,	29,81,	
39,106,	3,49,	4,16,	4,17,	
4,18,	28,77,	28,78,	4,19,	
30,84,	29,82,	33,92,	35,95,	
32,90,	33,93,	30,85,	4,50,	
34,94,	36,97,	40,107,	29,83,	
12,62,	28,79,	12,63,	28,80,	
32,91,	36,98,	35,96,	38,104,	
4,22,	4,23,	4,24,	4,25,	
31,86,	40,108,	46,126,	38,105,	
31,87,	49,127,	4,51,	37,99,	
51,129,	77,136,	11,62,	37,100,	
11,63,	78,137,	31,88,	37,101,	
37,102,	31,89,	42,112,	41,109,	
79,138,	37,103,	41,110,	44,121,	
44,122,	81,140,	42,113,	42,114,	
41,111,	4,27,	44,123,	45,124,	
82,141,	45,125,	4,28,	4,29,	
4,30,	4,31,	4,32,	4,33,	
4,34,	4,35,	4,36,	84,142,	
86,146,	4,37,	4,38,	4,39,	
4,40,	4,41,	87,147,	4,42,	
4,43,	4,44,	4,45,	89,150,	
4,46,	4,47,	4,48,	90,151,	
91,152,	4,49,	7,56,	7,56,	
7,56,	7,56,	7,56,	7,56,	
7,56,	7,56,	7,56,	7,56,	
7,56,	7,56,	7,56,	7,56,	
7,56,	7,56,	7,56,	7,56,	
7,56,	7,56,	7,56,	7,56,	
7,56,	7,56,	7,56,	7,56,	
88,148,	85,143,	85,144,	88,149,	
7,56,	85,145,	7,56,	7,56,	
7,56,	7,56,	7,56,	7,56,	
7,56,	7,56,	7,56,	7,56,	
7,56,	7,56,	7,56,	7,56,	
7,56,	7,56,	7,56,	7,56,	
7,56,	7,56,	7,56,	7,56,	
7,56,	7,56,	7,56,	7,56,	
21,68,	92,153,	21,69,	21,69,	
21,69,	21,69,	21,69,	21,69,	
21,69,	21,69,	21,69,	21,69,	
43,115,	43,116,	95,158,	99,162,	
100,163,	101,164,	98,159,	43,117,	
43,118,	43,119,	67,70,	21,70,	
43,120,	56,56,	56,56,	56,56,	
56,56,	56,56,	56,56,	56,56,	
56,56,	56,56,	56,56,	98,160,	
102,165,	98,161,	103,166,	93,154,	
104,167,	105,168,	107,171,	26,75,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	26,75,	26,75,	
26,75,	93,155,	67,70,	21,70,	
106,169,	106,170,	67,71,	21,71,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	108,172,	109,173,	
110,174,	111,175,	26,75,	113,178,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	26,75,	26,75,	
26,75,	26,75,	50,128,	114,179,	
115,180,	117,183,	118,184,	70,134,	
119,185,	70,134,	50,128,	50,128,	
70,135,	70,135,	70,135,	70,135,	
70,135,	70,135,	70,135,	70,135,	
70,135,	70,135,	94,156,	112,176,	
116,181,	120,186,	121,187,	115,180,	
122,189,	123,190,	94,157,	124,191,	
126,192,	112,177,	129,194,	135,71,	
116,182,	136,195,	137,196,	121,188,	
138,197,	139,198,	140,199,	141,200,	
142,201,	143,202,	144,203,	146,204,	
126,193,	50,67,	59,59,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	59,59,	59,59,	59,59,	
128,0,	147,205,	148,206,	149,207,	
150,208,	151,209,	50,128,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	154,210,	155,211,	156,212,	
157,213,	59,59,	128,128,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	59,59,	59,59,	59,59,	
59,59,	61,133,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
61,133,	61,133,	61,133,	158,214,	
159,215,	161,216,	162,217,	163,218,	
164,219,	165,220,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
170,221,	174,223,	175,224,	176,225,	
61,133,	177,226,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
61,133,	61,133,	61,133,	61,133,	
68,68,	68,68,	68,68,	68,68,	
68,68,	68,68,	68,68,	68,68,	
68,68,	68,68,	134,135,	134,135,	
134,135,	134,135,	134,135,	134,135,	
134,135,	134,135,	134,135,	134,135,	
173,222,	68,70,	178,227,	179,228,	
180,180,	182,229,	183,230,	184,231,	
185,232,	186,83,	187,233,	188,234,	
189,236,	191,237,	192,238,	193,239,	
194,240,	188,235,	195,241,	196,242,	
197,243,	198,244,	199,245,	173,222,	
200,246,	201,247,	202,248,	180,180,	
204,249,	205,250,	206,251,	210,252,	
212,253,	68,70,	213,254,	214,256,	
215,257,	68,71,	216,258,	217,259,	
220,260,	213,255,	222,222,	224,261,	
225,262,	227,263,	228,264,	230,265,	
231,266,	234,267,	222,222,	222,0,	
236,268,	237,269,	238,270,	240,271,	
242,272,	246,273,	247,274,	248,275,	
249,276,	250,277,	251,278,	253,279,	
254,280,	256,96,	257,281,	259,282,	
262,283,	266,284,	267,285,	271,286,	
277,287,	279,279,	280,288,	281,203,	
284,289,	285,235,	286,290,	287,287,	
288,291,	279,279,	279,0,	291,255,	
0,0,	0,0,	253,279,	0,0,	
0,0,	222,222,	0,0,	0,0,	
0,0,	0,0,	0,0,	277,287,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	287,287,	0,0,	
0,0,	0,0,	222,222,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
279,279,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	279,279,	0,0,	0,0,	
0,0};
struct yysvf yysvec[] = {
0,	0,	0,
yycrank+0,	0,		0,	
yycrank+0,	0,		0,	
yycrank+-1,	0,		0,	
yycrank+-93,	yysvec+3,	0,	
yycrank+-3,	0,		0,	
yycrank+-4,	yysvec+5,	0,	
yycrank+153,	0,		0,	
yycrank+0,	yysvec+7,	0,	
yycrank+-21,	0,		0,	
yycrank+-22,	yysvec+9,	0,	
yycrank+-43,	0,		0,	
yycrank+-21,	yysvec+11,	0,	
yycrank+0,	0,		yyvstop+1,
yycrank+0,	0,		yyvstop+3,
yycrank+0,	0,		yyvstop+6,
yycrank+21,	0,		yyvstop+8,
yycrank+0,	0,		yyvstop+11,
yycrank+-32,	0,		yyvstop+14,
yycrank+21,	0,		yyvstop+17,
yycrank+22,	0,		yyvstop+19,
yycrank+230,	0,		yyvstop+21,
yycrank+0,	0,		yyvstop+24,
yycrank+22,	0,		yyvstop+27,
yycrank+23,	0,		yyvstop+30,
yycrank+24,	0,		yyvstop+32,
yycrank+271,	0,		yyvstop+35,
yycrank+30,	0,		yyvstop+38,
yycrank+31,	yysvec+26,	yyvstop+40,
yycrank+22,	yysvec+26,	yyvstop+43,
yycrank+27,	yysvec+26,	yyvstop+46,
yycrank+59,	yysvec+26,	yyvstop+49,
yycrank+28,	yysvec+26,	yyvstop+52,
yycrank+23,	yysvec+26,	yyvstop+55,
yycrank+26,	yysvec+26,	yyvstop+58,
yycrank+34,	yysvec+26,	yyvstop+61,
yycrank+39,	yysvec+26,	yyvstop+64,
yycrank+66,	yysvec+26,	yyvstop+67,
yycrank+54,	yysvec+26,	yyvstop+70,
yycrank+23,	yysvec+26,	yyvstop+73,
yycrank+40,	yysvec+26,	yyvstop+76,
yycrank+70,	yysvec+26,	yyvstop+79,
yycrank+77,	yysvec+26,	yyvstop+82,
yycrank+184,	yysvec+26,	yyvstop+85,
yycrank+75,	yysvec+26,	yyvstop+88,
yycrank+77,	yysvec+26,	yyvstop+91,
yycrank+53,	yysvec+26,	yyvstop+94,
yycrank+0,	yysvec+26,	yyvstop+97,
yycrank+0,	yysvec+26,	yyvstop+101,
yycrank+37,	0,		yyvstop+105,
yycrank+-393,	0,		yyvstop+107,
yycrank+54,	yysvec+26,	yyvstop+109,
yycrank+0,	0,		yyvstop+112,
yycrank+0,	0,		yyvstop+114,
yycrank+0,	0,		yyvstop+116,
yycrank+22,	0,		yyvstop+119,
yycrank+253,	yysvec+7,	yyvstop+121,
yycrank+0,	0,		yyvstop+123,
yycrank+49,	0,		yyvstop+125,
yycrank+394,	0,		yyvstop+128,
yycrank+0,	0,		yyvstop+130,
yycrank+469,	0,		yyvstop+132,
yycrank+0,	0,		yyvstop+135,
yycrank+0,	0,		yyvstop+138,
yycrank+0,	0,		yyvstop+141,
yycrank+-33,	yysvec+18,	yyvstop+143,
yycrank+0,	0,		yyvstop+145,
yycrank+229,	yysvec+20,	yyvstop+147,
yycrank+544,	0,		yyvstop+149,
yycrank+0,	yysvec+21,	yyvstop+151,
yycrank+356,	0,		0,	
yycrank+0,	0,		yyvstop+153,
yycrank+0,	0,		yyvstop+155,
yycrank+0,	0,		yyvstop+157,
yycrank+0,	0,		yyvstop+159,
yycrank+0,	yysvec+26,	yyvstop+161,
yycrank+0,	0,		yyvstop+163,
yycrank+54,	yysvec+26,	yyvstop+165,
yycrank+55,	yysvec+26,	yyvstop+167,
yycrank+62,	yysvec+26,	yyvstop+169,
yycrank+22,	yysvec+26,	yyvstop+171,
yycrank+73,	yysvec+26,	yyvstop+174,
yycrank+72,	yysvec+26,	yyvstop+176,
yycrank+0,	yysvec+26,	yyvstop+178,
yycrank+85,	yysvec+26,	yyvstop+181,
yycrank+134,	yysvec+26,	yyvstop+183,
yycrank+85,	yysvec+26,	yyvstop+185,
yycrank+104,	yysvec+26,	yyvstop+187,
yycrank+128,	yysvec+26,	yyvstop+189,
yycrank+114,	yysvec+26,	yyvstop+192,
yycrank+100,	yysvec+26,	yyvstop+194,
yycrank+104,	yysvec+26,	yyvstop+196,
yycrank+163,	yysvec+26,	yyvstop+198,
yycrank+218,	yysvec+26,	yyvstop+200,
yycrank+317,	yysvec+26,	yyvstop+202,
yycrank+185,	yysvec+26,	yyvstop+204,
yycrank+0,	yysvec+26,	yyvstop+206,
yycrank+0,	yysvec+26,	yyvstop+209,
yycrank+195,	yysvec+26,	yyvstop+212,
yycrank+193,	yysvec+26,	yyvstop+215,
yycrank+190,	yysvec+26,	yyvstop+217,
yycrank+183,	yysvec+26,	yyvstop+219,
yycrank+195,	yysvec+26,	yyvstop+221,
yycrank+211,	yysvec+26,	yyvstop+223,
yycrank+196,	yysvec+26,	yyvstop+225,
yycrank+207,	yysvec+26,	yyvstop+227,
yycrank+213,	yysvec+26,	yyvstop+229,
yycrank+216,	yysvec+26,	yyvstop+231,
yycrank+246,	yysvec+26,	yyvstop+233,
yycrank+264,	yysvec+26,	yyvstop+235,
yycrank+253,	yysvec+26,	yyvstop+237,
yycrank+260,	yysvec+26,	yyvstop+239,
yycrank+315,	yysvec+26,	yyvstop+241,
yycrank+264,	yysvec+26,	yyvstop+243,
yycrank+278,	yysvec+26,	yyvstop+245,
yycrank+387,	yysvec+26,	yyvstop+247,
yycrank+306,	yysvec+26,	yyvstop+249,
yycrank+289,	yysvec+26,	yyvstop+251,
yycrank+284,	yysvec+26,	yyvstop+253,
yycrank+286,	yysvec+26,	yyvstop+255,
yycrank+316,	yysvec+26,	yyvstop+257,
yycrank+317,	yysvec+26,	yyvstop+259,
yycrank+321,	yysvec+26,	yyvstop+261,
yycrank+309,	yysvec+26,	yyvstop+263,
yycrank+307,	yysvec+26,	yyvstop+266,
yycrank+0,	yysvec+26,	yyvstop+268,
yycrank+324,	yysvec+26,	yyvstop+271,
yycrank+0,	0,		yyvstop+273,
yycrank+-442,	yysvec+50,	yyvstop+275,
yycrank+326,	yysvec+26,	yyvstop+277,
yycrank+0,	0,		yyvstop+279,
yycrank+0,	0,		yyvstop+281,
yycrank+0,	yysvec+58,	yyvstop+283,
yycrank+0,	yysvec+61,	yyvstop+285,
yycrank+554,	0,		0,	
yycrank+322,	yysvec+134,	yyvstop+287,
yycrank+311,	yysvec+26,	yyvstop+289,
yycrank+319,	yysvec+26,	yyvstop+291,
yycrank+321,	yysvec+26,	yyvstop+293,
yycrank+323,	yysvec+26,	yyvstop+295,
yycrank+323,	yysvec+26,	yyvstop+297,
yycrank+319,	yysvec+26,	yyvstop+299,
yycrank+337,	yysvec+26,	yyvstop+302,
yycrank+323,	yysvec+26,	yyvstop+304,
yycrank+317,	yysvec+26,	yyvstop+306,
yycrank+0,	yysvec+26,	yyvstop+308,
yycrank+335,	yysvec+26,	yyvstop+311,
yycrank+348,	yysvec+26,	yyvstop+313,
yycrank+338,	yysvec+26,	yyvstop+315,
yycrank+345,	yysvec+26,	yyvstop+317,
yycrank+337,	yysvec+26,	yyvstop+319,
yycrank+356,	yysvec+26,	yyvstop+321,
yycrank+0,	yysvec+26,	yyvstop+323,
yycrank+0,	yysvec+26,	yyvstop+326,
yycrank+376,	yysvec+26,	yyvstop+329,
yycrank+377,	yysvec+26,	yyvstop+331,
yycrank+375,	yysvec+26,	yyvstop+333,
yycrank+388,	yysvec+26,	yyvstop+335,
yycrank+424,	yysvec+26,	yyvstop+337,
yycrank+420,	yysvec+26,	yyvstop+339,
yycrank+0,	yysvec+26,	yyvstop+341,
yycrank+424,	yysvec+26,	yyvstop+344,
yycrank+429,	yysvec+26,	yyvstop+346,
yycrank+415,	yysvec+26,	yyvstop+348,
yycrank+431,	yysvec+26,	yyvstop+350,
yycrank+418,	yysvec+26,	yyvstop+352,
yycrank+0,	yysvec+26,	yyvstop+354,
yycrank+0,	yysvec+26,	yyvstop+357,
yycrank+0,	yysvec+26,	yyvstop+360,
yycrank+0,	yysvec+26,	yyvstop+363,
yycrank+444,	yysvec+26,	yyvstop+366,
yycrank+0,	yysvec+26,	yyvstop+368,
yycrank+0,	yysvec+26,	yyvstop+371,
yycrank+603,	yysvec+26,	yyvstop+374,
yycrank+445,	yysvec+26,	yyvstop+376,
yycrank+452,	yysvec+26,	yyvstop+378,
yycrank+458,	yysvec+26,	yyvstop+380,
yycrank+465,	yysvec+26,	yyvstop+383,
yycrank+510,	yysvec+26,	yyvstop+385,
yycrank+500,	yysvec+26,	yyvstop+387,
yycrank+607,	0,		yyvstop+389,
yycrank+0,	yysvec+26,	yyvstop+391,
yycrank+516,	yysvec+26,	yyvstop+394,
yycrank+513,	yysvec+26,	yyvstop+396,
yycrank+514,	yysvec+26,	yyvstop+398,
yycrank+504,	yysvec+26,	yyvstop+400,
yycrank+509,	yysvec+26,	yyvstop+402,
yycrank+512,	yysvec+26,	yyvstop+404,
yycrank+512,	yysvec+26,	yyvstop+406,
yycrank+517,	yysvec+26,	yyvstop+408,
yycrank+0,	yysvec+26,	yyvstop+410,
yycrank+520,	yysvec+26,	yyvstop+413,
yycrank+510,	yysvec+26,	yyvstop+415,
yycrank+523,	yysvec+26,	yyvstop+418,
yycrank+526,	yysvec+26,	yyvstop+420,
yycrank+529,	yysvec+26,	yyvstop+422,
yycrank+516,	yysvec+26,	yyvstop+424,
yycrank+513,	yysvec+26,	yyvstop+426,
yycrank+583,	yysvec+26,	yyvstop+428,
yycrank+515,	yysvec+26,	yyvstop+430,
yycrank+525,	yysvec+26,	yyvstop+432,
yycrank+529,	yysvec+26,	yyvstop+434,
yycrank+538,	yysvec+26,	yyvstop+436,
yycrank+0,	yysvec+26,	yyvstop+438,
yycrank+539,	yysvec+26,	yyvstop+441,
yycrank+531,	yysvec+26,	yyvstop+443,
yycrank+541,	yysvec+26,	yyvstop+445,
yycrank+0,	yysvec+26,	yyvstop+447,
yycrank+0,	yysvec+26,	yyvstop+450,
yycrank+0,	yysvec+26,	yyvstop+453,
yycrank+542,	yysvec+26,	yyvstop+456,
yycrank+0,	yysvec+26,	yyvstop+458,
yycrank+540,	yysvec+26,	yyvstop+461,
yycrank+538,	yysvec+26,	yyvstop+463,
yycrank+543,	yysvec+26,	yyvstop+466,
yycrank+531,	yysvec+26,	yyvstop+468,
yycrank+535,	yysvec+26,	yyvstop+470,
yycrank+543,	yysvec+26,	yyvstop+472,
yycrank+0,	yysvec+26,	yyvstop+474,
yycrank+0,	yysvec+26,	yyvstop+477,
yycrank+536,	yysvec+26,	yyvstop+480,
yycrank+0,	yysvec+26,	yyvstop+482,
yycrank+-653,	0,		yyvstop+485,
yycrank+0,	yysvec+26,	yyvstop+487,
yycrank+539,	yysvec+26,	yyvstop+490,
yycrank+539,	yysvec+26,	yyvstop+492,
yycrank+0,	yysvec+26,	yyvstop+494,
yycrank+541,	yysvec+26,	yyvstop+497,
yycrank+542,	yysvec+26,	yyvstop+499,
yycrank+0,	yysvec+26,	yyvstop+501,
yycrank+559,	yysvec+26,	yyvstop+504,
yycrank+550,	yysvec+26,	yyvstop+506,
yycrank+0,	yysvec+26,	yyvstop+508,
yycrank+0,	yysvec+26,	yyvstop+511,
yycrank+544,	yysvec+26,	yyvstop+514,
yycrank+0,	yysvec+26,	yyvstop+516,
yycrank+549,	yysvec+26,	yyvstop+519,
yycrank+557,	yysvec+26,	yyvstop+522,
yycrank+562,	yysvec+26,	yyvstop+524,
yycrank+0,	yysvec+26,	yyvstop+526,
yycrank+556,	yysvec+26,	yyvstop+529,
yycrank+0,	yysvec+26,	yyvstop+531,
yycrank+553,	yysvec+26,	yyvstop+534,
yycrank+0,	yysvec+26,	yyvstop+536,
yycrank+0,	yysvec+26,	yyvstop+539,
yycrank+0,	yysvec+26,	yyvstop+542,
yycrank+560,	yysvec+26,	yyvstop+545,
yycrank+569,	yysvec+26,	yyvstop+547,
yycrank+556,	yysvec+26,	yyvstop+549,
yycrank+572,	yysvec+26,	yyvstop+552,
yycrank+572,	yysvec+26,	yyvstop+554,
yycrank+574,	yysvec+26,	yyvstop+556,
yycrank+0,	yysvec+26,	yyvstop+558,
yycrank+666,	yysvec+26,	yyvstop+561,
yycrank+571,	yysvec+26,	yyvstop+563,
yycrank+0,	yysvec+26,	yyvstop+565,
yycrank+561,	yysvec+26,	yyvstop+568,
yycrank+578,	yysvec+26,	yyvstop+570,
yycrank+0,	yysvec+26,	yyvstop+572,
yycrank+564,	yysvec+26,	yyvstop+575,
yycrank+0,	yysvec+26,	yyvstop+578,
yycrank+0,	yysvec+26,	yyvstop+581,
yycrank+565,	yysvec+26,	yyvstop+584,
yycrank+0,	yysvec+26,	yyvstop+586,
yycrank+0,	yysvec+26,	yyvstop+589,
yycrank+0,	yysvec+26,	yyvstop+592,
yycrank+565,	yysvec+26,	yyvstop+595,
yycrank+579,	yysvec+26,	yyvstop+597,
yycrank+0,	yysvec+26,	yyvstop+599,
yycrank+0,	yysvec+26,	yyvstop+602,
yycrank+0,	yysvec+26,	yyvstop+605,
yycrank+569,	yysvec+26,	yyvstop+608,
yycrank+0,	yysvec+26,	yyvstop+610,
yycrank+0,	yysvec+26,	yyvstop+613,
yycrank+0,	yysvec+26,	yyvstop+616,
yycrank+0,	yysvec+26,	yyvstop+619,
yycrank+0,	yysvec+26,	yyvstop+622,
yycrank+675,	yysvec+26,	yyvstop+625,
yycrank+0,	yysvec+26,	yyvstop+627,
yycrank+-684,	0,		yyvstop+630,
yycrank+576,	yysvec+26,	yyvstop+632,
yycrank+586,	yysvec+26,	yyvstop+634,
yycrank+0,	yysvec+26,	yyvstop+636,
yycrank+0,	yysvec+26,	yyvstop+639,
yycrank+586,	yysvec+26,	yyvstop+642,
yycrank+585,	yysvec+26,	yyvstop+644,
yycrank+680,	yysvec+26,	yyvstop+646,
yycrank+682,	0,		yyvstop+648,
yycrank+591,	yysvec+26,	yyvstop+650,
yycrank+0,	yysvec+26,	yyvstop+652,
yycrank+0,	0,		yyvstop+655,
yycrank+580,	yysvec+26,	yyvstop+657,
0,	0,	0};
struct yywork *yytop = yycrank+749;
struct yysvf *yybgin = yysvec+1;
Uchar yymatch[] = {
00  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,011 ,012 ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
011 ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
'0' ,'0' ,'0' ,'0' ,'0' ,'0' ,'0' ,'0' ,
'0' ,'0' ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,
'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,
'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,
'A' ,'A' ,'A' ,01  ,01  ,01  ,01  ,'A' ,
01  ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,
'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,
'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,
'A' ,'A' ,'A' ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
0};
Uchar yyextra[] = {
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0};
#pragma lib	"libl.a"
int yylineno =1;
# define YYU(x) x
char yytext[YYLMAX];
struct yysvf *yylstate [YYLMAX], **yylsp, **yyolsp;
Uchar yysbuf[YYLMAX];
Uchar *yysptr = yysbuf;
int *yyfnd;
extern struct yysvf *yyestate;
int yyprevious = YYNEWLINE;
# ifdef LEXDEBUG
extern void allprint(int);
# endif
yylook(void){
	struct yysvf *yystate, **lsp;
	struct yywork *yyt;
	struct yysvf *yyz;
	int yych;
	struct yywork *yyr;
# ifdef LEXDEBUG
	int debug;
# endif
	Uchar *yylastch;
	/* start off machines */
# ifdef LEXDEBUG
	debug = 0;
# endif
	if (!yymorfg)
		yylastch = (Uchar*)yytext;
	else {
		yymorfg=0;
		yylastch = (Uchar*)yytext+yyleng;
		}
	for(;;){
		lsp = yylstate;
		yyestate = yystate = yybgin;
		if (yyprevious==YYNEWLINE) yystate++;
		for (;;){
# ifdef LEXDEBUG
			if(debug)fprintf(yyout,"state %d\n",yystate-yysvec-1);
# endif
			yyt = yystate->yystoff;
			if(yyt == yycrank){		/* may not be any transitions */
				yyz = yystate->yyother;
				if(yyz == 0)break;
				if(yyz->yystoff == yycrank)break;
				}
			*yylastch++ = yych = input();
		tryagain:
# ifdef LEXDEBUG
			if(debug){
				fprintf(yyout,"char ");
				allprint(yych);
				putchar('\n');
				}
# endif
			yyr = yyt;
			if (yyt > yycrank){
				yyt = yyr + yych;
				if (yyt <= yytop && yyt->verify+yysvec == yystate){
					if(yyt->advance+yysvec == YYLERR)	/* error transitions */
						{unput(*--yylastch);break;}
					*lsp++ = yystate = yyt->advance+yysvec;
					goto contin;
					}
				}
# ifdef YYOPTIM
			else if(yyt < yycrank) {	/* r < yycrank */
				yyt = yyr = yycrank+(yycrank-yyt);
# ifdef LEXDEBUG
				if(debug)fprintf(yyout,"compressed state\n");
# endif
				yyt = yyt + yych;
				if(yyt <= yytop && yyt->verify+yysvec == yystate){
					if(yyt->advance+yysvec == YYLERR)	/* error transitions */
						{unput(*--yylastch);break;}
					*lsp++ = yystate = yyt->advance+yysvec;
					goto contin;
					}
				yyt = yyr + YYU(yymatch[yych]);
# ifdef LEXDEBUG
				if(debug){
					fprintf(yyout,"try fall back character ");
					allprint(YYU(yymatch[yych]));
					putchar('\n');
					}
# endif
				if(yyt <= yytop && yyt->verify+yysvec == yystate){
					if(yyt->advance+yysvec == YYLERR)	/* error transition */
						{unput(*--yylastch);break;}
					*lsp++ = yystate = yyt->advance+yysvec;
					goto contin;
					}
				}
			if ((yystate = yystate->yyother) && (yyt= yystate->yystoff) != yycrank){
# ifdef LEXDEBUG
				if(debug)fprintf(yyout,"fall back to state %d\n",yystate-yysvec-1);
# endif
				goto tryagain;
				}
# endif
			else
				{unput(*--yylastch);break;}
		contin:
# ifdef LEXDEBUG
			if(debug){
				fprintf(yyout,"state %d char ",yystate-yysvec-1);
				allprint(yych);
				putchar('\n');
				}
# endif
			;
			}
# ifdef LEXDEBUG
		if(debug){
			fprintf(yyout,"stopped at %d with ",lsp>yylstate?*(lsp-1)-yysvec-1:0);
			allprint(yych);
			putchar('\n');
			}
# endif
		while (lsp-- > yylstate){
			*yylastch-- = 0;
			if (*lsp != 0 && (yyfnd= (*lsp)->yystops) && *yyfnd > 0){
				yyolsp = lsp;
				if(yyextra[*yyfnd]){		/* must backup */
					while(yyback((*lsp)->yystops,-*yyfnd) != 1 && lsp > yylstate){
						lsp--;
						unput(*yylastch--);
						}
					}
				yyprevious = YYU(*yylastch);
				yylsp = lsp;
				yyleng = yylastch-(Uchar*)yytext+1;
				yytext[yyleng] = 0;
# ifdef LEXDEBUG
				if(debug){
					fprintf(yyout,"\nmatch '%s'", yytext);
					fprintf(yyout," action %d\n",*yyfnd);
					}
# endif
				return(*yyfnd++);
				}
			unput(*yylastch);
			}
		if (yytext[0] == 0  /* && feof(yyin) */)
			{
			yysptr=yysbuf;
			return(0);
			}
		yyprevious = input();
		yytext[0] = yyprevious;
		if (yyprevious>0)
			output(yyprevious);
		yylastch = (Uchar*)yytext;
# ifdef LEXDEBUG
		if(debug)putchar('\n');
# endif
		}
	}
yyback(int *p, int m)
{
if (p==0) return(0);
while (*p)
	{
	if (*p++ == m)
		return(1);
	}
return(0);
}
	/* the following are only used in the lex library */
yyinput(void){
	return(input());
}
void
yyoutput(int c)
{
	output(c);
}
void
yyunput(int c)
{
	unput(c);
}
