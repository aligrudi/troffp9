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
FILE *yyin, *yyout;
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
#define sc 8
#define br 10
#define thru 12
#define sh 14
#undef	input
#undef	unput
/* #include <stdio.h> lex puts one out for us */
#include <ctype.h>
#include <stdlib.h>
#include "pic.h"
#include "y.tab.h"

extern	char	*filename;
extern	struct	symtab	symtab[];

void	pbstr(char *);
void	dodef(struct symtab *stp);
void	undefine(char *s);
void	shell_init(void), shell_exec(void), shell_text(char *);
void	endfor(void);

int	yyback(int *, int);
int	yylook(void);
int	yywrap(void);

#define	CADD	cbuf[clen++]=yytext[0]; \
		if (clen>=CBUFLEN-1) { error("string too long", cbuf); BEGIN A; }
#define	CBUFLEN	500
char	cbuf[CBUFLEN];
int	c, clen, cflag, delim;
int	ifsw	= 0;	/* 1 if if statement in progress */
#define YYNEWLINE 10
yylex(void){
int nstr; extern int yyprevious;
yyin = stdin;
yyout = stdout;
switch (yybgin-yysvec-1) {	/* witchcraft */
	case 0:
		BEGIN A;
		break;
	case sc:
		BEGIN A;
		return('}');
	case br:
		BEGIN A;
		return(']');
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
	{ return(ST); }
break;
case 4:
	{ return(ST); }
break;
case 5:
	{ BEGIN sc; return(ST); }
break;
case 6:
	{ BEGIN br; return(ST); }
break;
case 7:
{ return(yylval.i = yytext[0]); }
break;
case 8:
{ if (curfile == infile) error(".PS found inside .PS/.PE"); }
break;
case 9:
{ if (curfile == infile) {
			yylval.p = PEstring = tostring(yytext);
			return(EOF);
		  }
		}
break;
case 10:
{ yylval.p = tostring(yytext); return(TROFF); }
break;
case 11:
return(yylval.i = PRINT);
break;
case 12:
	return(yylval.i = BOX);
break;
case 13:
return(yylval.i = CIRCLE);
break;
case 14:
	return(yylval.i = ARC);
break;
case 15:
return(yylval.i = ELLIPSE);
break;
case 16:
return(yylval.i = ARROW);
break;
case 17:
return(yylval.i = SPLINE);
break;
case 18:
	return(yylval.i = LINE);
break;
case 19:
	return(yylval.i = MOVE);
break;
case 20:
	return(yylval.i = BLOCK);
break;
case 21:
return(RESET);
break;
case 22:
return(SPRINTF);
break;
case 23:
	return(SAME);
break;
case 24:
return(BETWEEN);
break;
case 25:
	return(AND);
break;
case 26:
	;
break;
case 27:
	;
break;
case 28:
	;
break;
case 29:
	{ yylval.i = EAST; return(CORNER); }
break;
case 30:
	{ yylval.i = EAST; return(CORNER); }
break;
case 31:
	{ yylval.i = WEST; return(CORNER); }
break;
case 32:
	{ yylval.i = WEST; return(CORNER); }
break;
case 33:
	{ yylval.i = NORTH; return(CORNER); }
break;
case 34:
	{ yylval.i = NORTH; return(CORNER); }
break;
case 35:
	{ yylval.i = SOUTH; return(CORNER); }
break;
case 36:
{ yylval.i = SOUTH; return(CORNER); }
break;
case 37:
{ yylval.i = CENTER; return(CORNER); }
break;
case 38:
	{ yylval.i = START; return(CORNER); }
break;
case 39:
	{ yylval.i = END; return(CORNER); }
break;
case 40:
	{ yylval.i = NE; return(CORNER); }
break;
case 41:
	{ yylval.i = SE; return(CORNER); }
break;
case 42:
	{ yylval.i = NW; return(CORNER); }
break;
case 43:
	{ yylval.i = SW; return(CORNER); }
break;
case 44:
	{ yylval.i = NORTH; return(CORNER); }
break;
case 45:
	{ yylval.i = NORTH; return(CORNER); }
break;
case 46:
	{ yylval.i = SOUTH; return(CORNER); }
break;
case 47:
	{ yylval.i = SOUTH; return(CORNER); }
break;
case 48:
	{ yylval.i = WEST; return(CORNER); }
break;
case 49:
	{ yylval.i = WEST; return(CORNER); }
break;
case 50:
	{ yylval.i = EAST; return(CORNER); }
break;
case 51:
	{ yylval.i = EAST; return(CORNER); }
break;
case 52:
	{ yylval.i = CENTER; return(CORNER); }
break;
case 53:
	{ yylval.i = START; return(CORNER); }
break;
case 54:
	{ yylval.i = END; return(CORNER); }
break;
case 55:
{ yylval.i = HEIGHT; return(ATTR); }
break;
case 56:
{ yylval.i = WIDTH; return(ATTR); }
break;
case 57:
{ yylval.i = RADIUS; return(ATTR); }
break;
case 58:
{ yylval.i = DIAMETER; return(ATTR); }
break;
case 59:
	{ yylval.i = SIZE; return(ATTR); }
break;
case 60:
	{ yylval.i = LEFT; return(DIR); }
break;
case 61:
{ yylval.i = RIGHT; return(DIR); }
break;
case 62:
	{ yylval.i = UP; return(DIR); }
break;
case 63:
	{ yylval.i = DOWN; return(DIR); }
break;
case 64:
	{ yylval.i = CW; return(ATTR); }
break;
case 65:
{ yylval.i = CW; return(ATTR); }
break;
case 66:
	{ yylval.i = CCW; return(ATTR); }
break;
case 67:
{ yylval.i = INVIS; return(ATTR); }
break;
case 68:
{ yylval.i = INVIS; return ATTR; }
break;
case 69:
	return(yylval.i = FILL);
break;
case 70:
;
break;
case 71:
return(yylval.i = DOT);
break;
case 72:
return(yylval.i = DASH);
break;
case 73:
	return(yylval.i = CHOP);
break;
case 74:
{ yylval.i = SPREAD; return TEXTATTR; }
break;
case 75:
{ yylval.i = LJUST; return TEXTATTR; }
break;
case 76:
{ yylval.i = RJUST; return TEXTATTR; }
break;
case 77:
{ yylval.i = ABOVE; return TEXTATTR; }
break;
case 78:
{ yylval.i = BELOW; return TEXTATTR; }
break;
case 79:
{ yylval.i = CENTER; return TEXTATTR; }
break;
case 80:
	{ yylval.i = HEAD1; return(HEAD); }
break;
case 81:
	{ yylval.i = HEAD2; return(HEAD); }
break;
case 82:
{ yylval.i = HEAD12; return(HEAD); }
break;
case 83:
		return(yylval.i = DOTX);
break;
case 84:
		return(yylval.i = DOTY);
break;
case 85:
return(yylval.i = DOTHT);
break;
case 86:
return(yylval.i = DOTWID);
break;
case 87:
return(yylval.i = DOTRAD);
break;
case 88:
	return(yylval.i = FROM);
break;
case 89:
	return(yylval.i = TO);
break;
case 90:
	return(yylval.i = AT);
break;
case 91:
	return(yylval.i = BY);
break;
case 92:
	return(yylval.i = WITH);
break;
case 93:
	return(yylval.i = LAST);
break;
case 94:
	return(LOG);
break;
case 95:
	return(EXP);
break;
case 96:
	return(SIN);
break;
case 97:
	return(COS);
break;
case 98:
return(ATAN2);
break;
case 99:
	return(SQRT);
break;
case 100:
	return(RAND);
break;
case 101:
	return(MAX);
break;
case 102:
	return(MIN);
break;
case 103:
	return(INT);
break;
case 104:
	return(EQ);
break;
case 105:
	return(GE);
break;
case 106:
	return(LE);
break;
case 107:
	return(NEQ);
break;
case 108:
	return(GT);
break;
case 109:
	return(LT);
break;
case 110:
	return(ANDAND);
break;
case 111:
	return(OROR);
break;
case 112:
	return(NOT);
break;
case 113:
	return(yylval.i = HERE);
break;
case 114:
	return(FOR);
break;
case 115:
{ endfor(); }
break;
case 116:
	{ yylval.p = delimstr("loop body"); return(DOSTR); }
break;
case 117:
	return(COPY);
break;
case 118:
{ BEGIN thru; return(THRU); }
break;
case 119:
	{ yylval.st = copythru(yytext); BEGIN A; return(DEFNAME); }
break;
case 120:
	return(UNTIL);
break;
case 121:
	{ ifsw = 1; return(IF); }
break;
case 122:
	{ if (!ifsw) { yylval.i = THEN; return(ATTR); }
		  yylval.p = delimstr("then part"); ifsw = 0;
		  return(THENSTR); }
break;
case 123:
	{ yylval.p = delimstr("else part"); return(ELSESTR); }
break;
case 124:
{ BEGIN sh;
		  if ((delim = input()) == '{') delim = '}';	/* no nested {} */
		  shell_init(); }
break;
case 125:
{ struct symtab *p;
		  if (yytext[0] == delim) {
			shell_exec();
			BEGIN A;
		  } else {
			p = lookup(yytext);
			if (p != NULL && p->s_type == DEFNAME) {
				c = input();
				unput(c);
				if (c == '(')
					dodef(p);
				else
					pbstr(p->s_val.p);
			} else
				shell_text(yytext);
		  }
		}
break;
case 126:
{ if (yytext[0] == delim) {
			shell_exec();
			BEGIN A;
		  } else
			shell_text(yytext);
		}
break;
case 127:
	{ BEGIN def; }
break;
case 128:
	{ definition(yytext); BEGIN A; }
break;
case 129:
{ undefine(yytext); }
break;
case 130:
	{ yylval.i = 1; return(NTH); }
break;
case 131:
{ yylval.i = atoi(yytext); return(NTH); }
break;
case 132:
{
		  	yylval.f = atof(yytext); return(NUMBER); }
break;
case 133:
{	struct symtab *p;
		p = lookup(yytext);
		if (p != NULL && p->s_type == DEFNAME) {
			c = input();
			unput(c);
			if (c == '(')	/* it's name(...) */
				dodef(p);
			else {	/* no argument list */
				pbstr(p->s_val.p);
				dprintf("pushing back `%s'\n", p->s_val.p);
			}
		} else if (islower(yytext[0])) {
			yylval.p = tostring(yytext);
			return(VARNAME);
		} else {
			yylval.p = tostring(yytext);
			return(PLACENAME);
		}
	}
break;
case 134:
	{ BEGIN str; clen=0; }
break;
case 135:
	{ cbuf[clen]=0; yylval.p = tostring(cbuf); BEGIN A; return(TEXT); }
break;
case 136:
	{ cbuf[clen]=0; error("missing quote in string \"%s\"", cbuf);
				BEGIN A; return(ST); }
break;
case 137:
{ cbuf[clen++]='"'; }
break;
case 138:
{ cbuf[clen++]='\t'; }
break;
case 139:
{ cbuf[clen++]='\\'; }
break;
case 140:
	{ CADD; }
break;
case 141:
	;
break;
case 142:
	return(yylval.i = yytext[0]);
break;
case -1:
break;
default:
fprintf(yyout,"bad switch yylook %d",nstr);
} return(0); }
/* end of yylex */
int yyvstop[] = {
0,

142,
0,

1,
142,
0,

3,
0,

112,
142,
0,

134,
142,
0,

141,
142,
0,

142,
0,

142,
0,

142,
0,

132,
142,
0,

4,
142,
0,

109,
142,
0,

142,
0,

108,
142,
0,

133,
142,
0,

133,
142,
0,

142,
0,

142,
0,

6,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

133,
142,
0,

142,
0,

142,
0,

5,
142,
0,

10,
142,
0,

133,
142,
0,

140,
0,

136,
0,

135,
140,
0,

140,
0,

128,
0,

119,
0,

119,
0,

126,
0,

125,
126,
0,

107,
0,

141,
0,

110,
0,

81,
0,

132,
0,

36,
0,

37,
0,

29,
0,

32,
0,

33,
0,

30,
0,

35,
0,

34,
0,

31,
0,

83,
0,

84,
0,

132,
0,

132,
0,

132,
0,

80,
0,

106,
0,

104,
0,

105,
0,

133,
0,

133,
0,

20,
0,

2,
0,

133,
0,

133,
0,

133,
0,

90,
133,
0,

133,
0,

133,
0,

91,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

64,
133,
0,

133,
0,

133,
0,

133,
0,

116,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

55,
133,
0,

121,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

26,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

89,
133,
0,

133,
0,

62,
133,
0,

133,
0,

133,
0,

133,
0,

7,
0,

111,
0,

10,
0,

10,
132,
0,

10,
0,

10,
36,
0,

10,
37,
0,

10,
29,
0,

10,
0,

10,
32,
0,

10,
33,
0,

10,
30,
0,

10,
35,
0,

10,
34,
0,

10,
31,
0,

10,
83,
0,

10,
84,
0,

133,
0,

137,
0,

139,
0,

138,
0,

125,
0,

85,
0,

40,
0,

42,
0,

41,
0,

43,
0,

132,
0,

131,
0,

82,
0,

133,
0,

133,
0,

25,
133,
0,

14,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

12,
133,
0,

66,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

97,
133,
0,

133,
0,

133,
0,

133,
0,

71,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

95,
133,
0,

133,
0,

133,
0,

114,
133,
0,

133,
0,

133,
0,

133,
0,

103,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

94,
133,
0,

101,
133,
0,

102,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

57,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

124,
0,

96,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

27,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

28,
133,
0,

133,
0,

56,
133,
0,

133,
0,

10,
0,

10,
132,
0,

9,
10,
0,

8,
10,
0,

10,
0,

10,
0,

10,
0,

10,
0,

10,
0,

10,
85,
0,

10,
0,

10,
40,
0,

10,
0,

10,
42,
0,

10,
0,

10,
0,

10,
41,
0,

10,
0,

10,
0,

10,
43,
0,

10,
0,

10,
0,

10,
0,

133,
0,

36,
0,

39,
0,

87,
0,

34,
0,

86,
0,

113,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

73,
133,
0,

133,
0,

133,
0,

117,
133,
0,

72,
133,
0,

133,
0,

58,
133,
0,

133,
0,

63,
133,
0,

133,
0,

133,
0,

123,
133,
0,

69,
133,
0,

133,
0,

88,
133,
0,

133,
0,

133,
0,

133,
0,

93,
133,
0,

60,
133,
0,

18,
133,
0,

133,
0,

19,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

100,
133,
0,

133,
0,

133,
0,

133,
0,

23,
133,
0,

59,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

99,
133,
0,

133,
0,

122,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

92,
133,
0,

10,
0,

10,
132,
0,

10,
36,
0,

10,
0,

10,
0,

10,
39,
0,

10,
0,

10,
0,

10,
0,

10,
87,
0,

10,
0,

10,
0,

10,
0,

10,
34,
0,

10,
0,

10,
86,
0,

133,
0,

29,
0,

32,
0,

31,
0,

77,
133,
0,

16,
133,
0,

98,
133,
0,

78,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

130,
133,
0,

133,
0,

133,
0,

67,
133,
0,

75,
133,
0,

133,
0,

133,
0,

11,
133,
0,

133,
0,

21,
133,
0,

61,
133,
0,

76,
133,
0,

70,
133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

133,
0,

118,
0,

133,
0,

120,
133,
0,

56,
133,
0,

10,
0,

10,
0,

10,
29,
0,

10,
0,

10,
32,
0,

10,
0,

10,
0,

10,
0,

10,
0,

10,
0,

10,
31,
0,

10,
0,

133,
0,

33,
0,

30,
0,

35,
0,

38,
0,

86,
0,

133,
0,

133,
0,

79,
133,
0,

13,
133,
0,

133,
0,

72,
133,
0,

133,
0,

133,
0,

71,
133,
0,

133,
0,

54,
0,

133,
0,

133,
0,

68,
133,
0,

57,
133,
0,

17,
133,
0,

74,
133,
0,

133,
0,

133,
0,

44,
0,

133,
0,

10,
0,

10,
0,

10,
0,

10,
33,
0,

10,
0,

10,
30,
0,

10,
35,
0,

10,
38,
0,

10,
86,
0,

133,
0,

36,
0,

37,
0,

87,
0,

24,
133,
0,

133,
0,

127,
0,

133,
0,

51,
0,

15,
133,
0,

133,
0,

48,
0,

22,
133,
0,

129,
0,

133,
0,

49,
0,

10,
36,
0,

10,
37,
0,

10,
87,
0,

115,
0,

133,
0,

58,
133,
0,

133,
0,

45,
0,

50,
0,

47,
0,

53,
0,

133,
0,

46,
0,

52,
0,

65,
133,
0,

67,
133,
0,
0};
# define YYTYPE int
struct yywork { YYTYPE verify, advance; } yycrank[] = {
0,0,	0,0,	3,17,	0,0,	
5,59,	0,0,	0,0,	0,0,	
0,0,	0,0,	3,18,	3,19,	
5,59,	5,60,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
13,64,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
13,64,	13,0,	3,20,	3,21,	
3,22,	5,61,	6,61,	3,23,	
14,0,	0,0,	0,0,	0,0,	
15,66,	34,100,	3,24,	3,25,	
69,0,	3,26,	22,69,	5,59,	
15,66,	15,66,	54,159,	54,160,	
0,0,	0,0,	22,69,	22,0,	
3,27,	3,28,	3,29,	3,30,	
23,70,	0,0,	3,31,	0,0,	
5,59,	0,0,	0,0,	13,64,	
0,0,	3,32,	0,0,	0,0,	
0,0,	54,159,	0,0,	0,0,	
54,161,	0,0,	0,0,	0,0,	
20,68,	24,71,	0,0,	0,0,	
13,65,	0,0,	0,0,	15,66,	
3,33,	3,34,	3,35,	5,62,	
6,62,	22,69,	3,36,	3,37,	
3,38,	3,39,	3,40,	3,41,	
29,95,	3,42,	3,43,	28,93,	
15,67,	3,44,	3,45,	3,46,	
3,47,	3,48,	22,69,	3,49,	
3,50,	3,51,	3,52,	30,96,	
3,53,	93,205,	0,0,	28,94,	
3,54,	3,55,	3,56,	4,20,	
4,21,	4,22,	33,99,	0,0,	
4,23,	36,101,	39,115,	32,98,	
43,128,	37,105,	39,116,	4,24,	
4,57,	47,139,	39,117,	42,126,	
43,129,	36,102,	46,138,	37,106,	
39,118,	36,103,	48,140,	36,104,	
58,178,	4,27,	4,28,	4,29,	
4,30,	37,107,	42,127,	38,108,	
55,162,	38,109,	45,135,	4,58,	
38,110,	38,111,	4,32,	40,119,	
38,112,	53,156,	45,136,	38,113,	
52,154,	53,157,	52,155,	41,123,	
45,137,	53,158,	40,120,	38,114,	
40,121,	41,124,	51,152,	73,183,	
41,125,	4,33,	4,34,	4,35,	
74,184,	51,153,	40,122,	4,36,	
4,37,	4,38,	4,39,	4,40,	
4,41,	76,187,	4,42,	4,43,	
77,189,	75,185,	4,44,	4,45,	
4,46,	4,47,	4,48,	79,193,	
4,49,	4,50,	4,51,	4,52,	
76,188,	4,53,	75,186,	79,194,	
81,199,	4,54,	4,55,	4,56,	
7,63,	7,63,	7,63,	7,63,	
7,63,	7,63,	7,63,	7,63,	
7,63,	7,63,	7,63,	7,63,	
7,63,	7,63,	7,63,	7,63,	
7,63,	7,63,	7,63,	7,63,	
7,63,	7,63,	7,63,	7,63,	
7,63,	7,63,	89,204,	82,200,	
62,179,	91,204,	7,63,	82,201,	
7,63,	7,63,	7,63,	7,63,	
7,63,	7,63,	7,63,	7,63,	
7,63,	7,63,	7,63,	7,63,	
7,63,	7,63,	7,63,	7,63,	
7,63,	7,63,	7,63,	7,63,	
7,63,	7,63,	7,63,	7,63,	
7,63,	7,63,	25,72,	25,72,	
25,72,	25,72,	25,72,	25,72,	
25,72,	25,72,	25,72,	25,72,	
26,85,	92,204,	26,86,	26,86,	
26,86,	26,86,	26,86,	26,86,	
26,86,	26,86,	26,86,	26,86,	
44,130,	98,206,	101,207,	102,208,	
44,131,	78,190,	62,180,	80,195,	
44,132,	44,133,	104,211,	26,87,	
49,141,	108,216,	44,134,	78,191,	
49,142,	80,196,	103,209,	105,212,	
49,143,	49,144,	80,197,	78,192,	
109,217,	80,198,	110,218,	105,213,	
25,73,	25,74,	62,181,	25,75,	
106,214,	103,210,	25,76,	111,219,	
106,215,	112,220,	25,77,	113,221,	
25,78,	115,223,	113,222,	26,87,	
25,79,	25,80,	25,81,	26,88,	
116,224,	25,82,	25,83,	25,84,	
26,89,	117,225,	119,228,	121,231,	
26,90,	26,91,	26,92,	31,97,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	31,97,	31,97,	
31,97,	118,226,	122,232,	124,235,	
118,227,	125,236,	126,237,	130,241,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	131,242,	132,243,	
133,244,	134,245,	31,97,	135,246,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	31,97,	31,97,	
31,97,	31,97,	50,145,	57,163,	
136,247,	137,248,	120,229,	138,249,	
123,233,	50,146,	50,147,	57,163,	
57,0,	120,230,	123,234,	140,251,	
50,148,	50,149,	50,150,	142,254,	
138,250,	50,151,	63,63,	63,63,	
63,63,	63,63,	63,63,	63,63,	
63,63,	63,63,	63,63,	63,63,	
72,72,	72,72,	72,72,	72,72,	
72,72,	72,72,	72,72,	72,72,	
72,72,	72,72,	141,252,	143,255,	
144,256,	145,257,	150,265,	151,266,	
153,269,	156,272,	57,164,	157,273,	
141,253,	72,87,	85,85,	85,85,	
85,85,	85,85,	85,85,	85,85,	
85,85,	85,85,	85,85,	85,85,	
87,202,	146,258,	87,202,	57,163,	
147,259,	87,203,	87,203,	87,203,	
87,203,	87,203,	87,203,	87,203,	
87,203,	87,203,	87,203,	129,238,	
147,260,	148,261,	57,165,	154,270,	
152,267,	72,87,	149,263,	160,160,	
146,258,	72,88,	148,262,	158,274,	
149,264,	176,0,	177,0,	178,299,	
129,239,	152,268,	129,240,	154,271,	
57,166,	57,167,	183,300,	57,168,	
184,301,	185,302,	57,169,	158,275,	
166,0,	186,303,	57,170,	187,304,	
57,171,	174,0,	189,305,	191,306,	
57,172,	57,173,	57,174,	167,0,	
193,307,	57,175,	57,176,	57,177,	
65,65,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	65,65,	
65,65,	65,65,	194,308,	196,309,	
197,310,	199,311,	200,312,	201,313,	
203,88,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	206,314,	
207,315,	210,316,	211,317,	65,65,	
212,318,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	65,65,	
65,65,	65,65,	65,65,	67,182,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	67,182,	67,182,	
67,182,	166,280,	167,281,	168,0,	
169,0,	170,0,	174,296,	171,0,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	165,0,	213,319,	
172,0,	214,320,	67,182,	217,321,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	67,182,	67,182,	
67,182,	67,182,	161,161,	175,0,	
163,163,	218,322,	164,163,	219,323,	
173,163,	220,324,	161,161,	161,160,	
163,163,	163,0,	164,163,	164,0,	
173,163,	173,0,	221,325,	223,326,	
224,327,	225,328,	226,329,	227,330,	
228,331,	229,332,	168,282,	230,333,	
231,334,	165,278,	233,335,	169,284,	
170,286,	234,336,	171,287,	236,337,	
237,338,	238,339,	240,340,	168,283,	
241,341,	242,342,	243,343,	165,279,	
171,288,	244,344,	169,285,	248,345,	
249,346,	161,161,	250,347,	163,163,	
171,289,	164,164,	251,348,	173,163,	
252,349,	253,350,	254,351,	172,290,	
255,352,	256,353,	257,354,	258,258,	
260,355,	261,356,	161,161,	172,291,	
163,163,	262,357,	164,163,	263,358,	
173,163,	265,361,	164,276,	202,203,	
202,203,	202,203,	202,203,	202,203,	
202,203,	202,203,	202,203,	202,203,	
202,203,	264,359,	258,258,	266,362,	
267,363,	264,360,	268,364,	269,366,	
270,367,	271,368,	175,297,	273,369,	
268,365,	274,370,	175,298,	275,371,	
276,0,	277,0,	280,0,	278,278,	
281,0,	279,279,	164,276,	282,0,	
173,292,	283,0,	164,277,	278,278,	
278,0,	279,279,	279,0,	284,0,	
285,0,	286,0,	173,293,	287,0,	
288,0,	289,0,	291,0,	173,294,	
290,0,	292,0,	173,295,	293,0,	
295,0,	294,0,	296,0,	297,0,	
298,0,	276,372,	299,388,	276,372,	
300,389,	301,390,	276,373,	302,391,	
304,392,	305,393,	306,394,	307,395,	
308,396,	309,397,	310,398,	312,399,	
313,400,	315,401,	278,278,	316,402,	
279,279,	317,403,	318,404,	319,405,	
320,406,	321,407,	323,408,	324,409,	
326,410,	327,411,	328,412,	329,413,	
331,414,	332,415,	334,334,	278,278,	
336,417,	279,279,	338,418,	339,419,	
340,420,	342,421,	344,422,	346,423,	
347,424,	348,425,	349,426,	351,427,	
352,428,	353,429,	356,430,	357,431,	
358,432,	359,433,	360,434,	362,435,	
364,436,	366,366,	365,437,	367,439,	
368,440,	369,441,	370,442,	372,0,	
374,0,	373,0,	375,0,	283,377,	
376,0,	377,0,	378,0,	379,0,	
281,375,	380,0,	381,0,	383,0,	
280,374,	286,379,	284,378,	382,0,	
282,376,	365,437,	290,381,	291,382,	
294,384,	384,0,	385,0,	386,0,	
387,0,	388,455,	298,387,	389,456,	
288,380,	390,457,	392,458,	394,459,	
395,460,	396,461,	397,462,	398,463,	
296,385,	372,373,	293,383,	373,373,	
297,386,	400,464,	405,465,	406,466,	
407,467,	408,468,	409,469,	410,470,	
411,471,	334,416,	412,472,	413,473,	
414,414,	415,475,	416,476,	418,127,	
419,477,	420,478,	421,421,	423,480,	
424,481,	426,482,	428,483,	431,484,	
432,485,	433,486,	434,487,	435,488,	
436,489,	437,437,	438,490,	439,491,	
366,438,	441,441,	443,0,	444,0,	
445,0,	446,0,	447,0,	448,0,	
449,0,	453,0,	450,0,	451,0,	
452,0,	454,0,	455,503,	456,504,	
457,505,	458,188,	460,506,	465,507,	
437,437,	466,508,	439,491,	467,509,	
373,277,	469,510,	471,511,	378,446,	
472,512,	474,513,	475,514,	477,325,	
478,515,	381,449,	374,443,	479,516,	
375,444,	382,450,	376,445,	487,520,	
481,481,	379,447,	483,483,	380,448,	
484,484,	383,451,	488,488,	489,365,	
492,523,	471,511,	493,524,	495,0,	
497,0,	384,452,	494,0,	499,0,	
500,0,	386,453,	387,454,	414,474,	
501,0,	502,0,	503,528,	510,531,	
511,511,	421,479,	512,532,	515,533,	
517,534,	518,535,	491,491,	519,536,	
521,537,	508,508,	523,538,	509,509,	
525,0,	526,0,	496,0,	527,0,	
441,493,	498,0,	529,539,	530,540,	
531,541,	533,542,	538,491,	511,511,	
0,0,	0,0,	0,0,	0,0,	
0,0,	491,491,	444,495,	439,492,	
0,0,	0,0,	0,0,	446,496,	
0,0,	448,497,	0,0,	443,494,	
0,0,	451,500,	0,0,	454,502,	
0,0,	538,491,	0,0,	0,0,	
0,0,	0,0,	0,0,	449,498,	
450,499,	0,0,	452,501,	481,517,	
0,0,	483,518,	0,0,	484,519,	
0,0,	488,521,	491,522,	491,522,	
491,522,	491,522,	491,522,	491,522,	
491,522,	491,522,	491,522,	491,522,	
491,522,	491,522,	491,522,	491,522,	
491,522,	491,522,	491,522,	491,522,	
491,522,	491,522,	491,522,	491,522,	
491,522,	491,522,	491,522,	491,522,	
508,529,	494,525,	509,530,	495,526,	
491,522,	0,0,	491,522,	491,522,	
491,522,	491,522,	491,522,	491,522,	
491,522,	491,522,	491,522,	491,522,	
491,522,	491,522,	491,522,	491,522,	
491,522,	491,522,	491,522,	491,522,	
491,522,	491,522,	491,522,	491,522,	
491,522,	491,522,	491,522,	491,522,	
496,285,	0,0,	498,527,	522,522,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	522,522,	522,522,	
522,522,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	0,0,	0,0,	
0,0,	0,0,	522,522,	0,0,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	522,522,	522,522,	
522,522,	522,522,	0,0,	0,0,	
0,0};
struct yysvf yysvec[] = {
0,	0,	0,
yycrank+0,	0,		0,	
yycrank+0,	0,		0,	
yycrank+-1,	0,		0,	
yycrank+-94,	yysvec+3,	0,	
yycrank+-3,	0,		0,	
yycrank+-4,	yysvec+5,	0,	
yycrank+155,	0,		0,	
yycrank+0,	yysvec+7,	0,	
yycrank+0,	0,		0,	
yycrank+0,	0,		0,	
yycrank+0,	0,		0,	
yycrank+0,	0,		0,	
yycrank+-23,	0,		0,	
yycrank+-30,	yysvec+13,	0,	
yycrank+-43,	0,		0,	
yycrank+0,	yysvec+15,	0,	
yycrank+0,	0,		yyvstop+1,
yycrank+0,	0,		yyvstop+3,
yycrank+0,	0,		yyvstop+6,
yycrank+23,	0,		yyvstop+8,
yycrank+0,	0,		yyvstop+11,
yycrank+-49,	0,		yyvstop+14,
yycrank+26,	0,		yyvstop+17,
yycrank+23,	0,		yyvstop+19,
yycrank+230,	0,		yyvstop+21,
yycrank+242,	0,		yyvstop+23,
yycrank+0,	0,		yyvstop+26,
yycrank+62,	0,		yyvstop+29,
yycrank+43,	0,		yyvstop+32,
yycrank+58,	0,		yyvstop+34,
yycrank+311,	0,		yyvstop+37,
yycrank+34,	yysvec+31,	yyvstop+40,
yycrank+37,	0,		yyvstop+43,
yycrank+35,	0,		yyvstop+45,
yycrank+0,	0,		yyvstop+47,
yycrank+35,	yysvec+31,	yyvstop+50,
yycrank+36,	yysvec+31,	yyvstop+53,
yycrank+60,	yysvec+31,	yyvstop+56,
yycrank+37,	yysvec+31,	yyvstop+59,
yycrank+70,	yysvec+31,	yyvstop+62,
yycrank+70,	yysvec+31,	yyvstop+65,
yycrank+42,	yysvec+31,	yyvstop+68,
yycrank+34,	yysvec+31,	yyvstop+71,
yycrank+203,	yysvec+31,	yyvstop+74,
yycrank+65,	yysvec+31,	yyvstop+77,
yycrank+35,	yysvec+31,	yyvstop+80,
yycrank+39,	yysvec+31,	yyvstop+83,
yycrank+36,	yysvec+31,	yyvstop+86,
yycrank+215,	yysvec+31,	yyvstop+89,
yycrank+337,	yysvec+31,	yyvstop+92,
yycrank+78,	yysvec+31,	yyvstop+95,
yycrank+62,	yysvec+31,	yyvstop+98,
yycrank+72,	yysvec+31,	yyvstop+101,
yycrank+45,	0,		yyvstop+104,
yycrank+36,	0,		yyvstop+106,
yycrank+0,	0,		yyvstop+108,
yycrank+-434,	0,		yyvstop+111,
yycrank+42,	yysvec+31,	yyvstop+114,
yycrank+0,	0,		yyvstop+117,
yycrank+0,	0,		yyvstop+119,
yycrank+0,	0,		yyvstop+121,
yycrank+214,	0,		yyvstop+124,
yycrank+406,	yysvec+7,	yyvstop+126,
yycrank+0,	0,		yyvstop+128,
yycrank+508,	0,		yyvstop+130,
yycrank+0,	0,		yyvstop+132,
yycrank+583,	0,		yyvstop+134,
yycrank+0,	0,		yyvstop+137,
yycrank+-38,	yysvec+22,	yyvstop+139,
yycrank+0,	0,		yyvstop+141,
yycrank+0,	0,		yyvstop+143,
yycrank+416,	0,		yyvstop+145,
yycrank+72,	0,		yyvstop+147,
yycrank+87,	0,		yyvstop+149,
yycrank+104,	0,		yyvstop+151,
yycrank+96,	0,		0,	
yycrank+99,	0,		yyvstop+153,
yycrank+204,	0,		yyvstop+155,
yycrank+110,	0,		yyvstop+157,
yycrank+206,	0,		yyvstop+159,
yycrank+105,	0,		yyvstop+161,
yycrank+146,	0,		yyvstop+163,
yycrank+0,	0,		yyvstop+165,
yycrank+0,	0,		yyvstop+167,
yycrank+438,	yysvec+72,	yyvstop+169,
yycrank+0,	yysvec+26,	yyvstop+171,
yycrank+453,	0,		0,	
yycrank+0,	0,		yyvstop+173,
yycrank+146,	0,		0,	
yycrank+0,	yysvec+89,	0,	
yycrank+133,	0,		0,	
yycrank+185,	0,		0,	
yycrank+59,	0,		yyvstop+175,
yycrank+0,	0,		yyvstop+177,
yycrank+0,	0,		yyvstop+179,
yycrank+0,	0,		yyvstop+181,
yycrank+0,	yysvec+31,	yyvstop+183,
yycrank+187,	yysvec+31,	yyvstop+185,
yycrank+0,	0,		yyvstop+187,
yycrank+0,	0,		yyvstop+189,
yycrank+191,	yysvec+31,	yyvstop+191,
yycrank+203,	yysvec+31,	yyvstop+193,
yycrank+219,	yysvec+31,	yyvstop+195,
yycrank+213,	yysvec+31,	yyvstop+197,
yycrank+211,	yysvec+31,	yyvstop+200,
yycrank+216,	yysvec+31,	yyvstop+202,
yycrank+0,	yysvec+31,	yyvstop+204,
yycrank+194,	yysvec+31,	yyvstop+207,
yycrank+214,	yysvec+31,	yyvstop+209,
yycrank+215,	yysvec+31,	yyvstop+211,
yycrank+221,	yysvec+31,	yyvstop+213,
yycrank+226,	yysvec+31,	yyvstop+215,
yycrank+227,	yysvec+31,	yyvstop+217,
yycrank+0,	yysvec+31,	yyvstop+219,
yycrank+226,	yysvec+31,	yyvstop+222,
yycrank+246,	yysvec+31,	yyvstop+224,
yycrank+256,	yysvec+31,	yyvstop+226,
yycrank+253,	yysvec+31,	yyvstop+228,
yycrank+239,	yysvec+31,	yyvstop+231,
yycrank+330,	yysvec+31,	yyvstop+233,
yycrank+255,	yysvec+31,	yyvstop+235,
yycrank+258,	yysvec+31,	yyvstop+237,
yycrank+332,	yysvec+31,	yyvstop+239,
yycrank+257,	yysvec+31,	yyvstop+241,
yycrank+262,	yysvec+31,	yyvstop+243,
yycrank+269,	yysvec+31,	yyvstop+245,
yycrank+0,	yysvec+31,	yyvstop+247,
yycrank+0,	yysvec+31,	yyvstop+250,
yycrank+412,	yysvec+31,	yyvstop+253,
yycrank+260,	yysvec+31,	yyvstop+255,
yycrank+300,	yysvec+31,	yyvstop+257,
yycrank+293,	yysvec+31,	yyvstop+259,
yycrank+287,	yysvec+31,	yyvstop+261,
yycrank+302,	yysvec+31,	yyvstop+263,
yycrank+287,	yysvec+31,	yyvstop+265,
yycrank+326,	yysvec+31,	yyvstop+267,
yycrank+319,	yysvec+31,	yyvstop+269,
yycrank+338,	yysvec+31,	yyvstop+271,
yycrank+0,	yysvec+31,	yyvstop+273,
yycrank+342,	yysvec+31,	yyvstop+276,
yycrank+374,	yysvec+31,	yyvstop+278,
yycrank+336,	yysvec+31,	yyvstop+280,
yycrank+372,	yysvec+31,	yyvstop+282,
yycrank+359,	yysvec+31,	yyvstop+284,
yycrank+368,	yysvec+31,	yyvstop+286,
yycrank+488,	yysvec+31,	yyvstop+288,
yycrank+390,	yysvec+31,	yyvstop+290,
yycrank+405,	yysvec+31,	yyvstop+292,
yycrank+410,	yysvec+31,	yyvstop+294,
yycrank+364,	yysvec+31,	yyvstop+296,
yycrank+382,	yysvec+31,	yyvstop+298,
yycrank+415,	yysvec+31,	yyvstop+300,
yycrank+368,	yysvec+31,	yyvstop+302,
yycrank+415,	yysvec+31,	yyvstop+305,
yycrank+0,	yysvec+31,	yyvstop+307,
yycrank+360,	yysvec+31,	yyvstop+310,
yycrank+368,	yysvec+31,	yyvstop+312,
yycrank+423,	yysvec+31,	yyvstop+314,
yycrank+0,	yysvec+54,	0,	
yycrank+509,	0,		yyvstop+316,
yycrank+-705,	0,		0,	
yycrank+0,	0,		yyvstop+318,
yycrank+-707,	0,		yyvstop+320,
yycrank+-709,	0,		yyvstop+322,
yycrank+-664,	yysvec+163,	yyvstop+325,
yycrank+-530,	yysvec+163,	yyvstop+327,
yycrank+-541,	yysvec+163,	yyvstop+330,
yycrank+-633,	yysvec+163,	yyvstop+333,
yycrank+-634,	yysvec+163,	yyvstop+336,
yycrank+-635,	yysvec+163,	yyvstop+338,
yycrank+-637,	yysvec+163,	yyvstop+341,
yycrank+-666,	yysvec+163,	yyvstop+344,
yycrank+-711,	0,		yyvstop+347,
yycrank+-535,	yysvec+163,	yyvstop+350,
yycrank+-697,	yysvec+163,	yyvstop+353,
yycrank+-515,	yysvec+163,	yyvstop+356,
yycrank+-516,	yysvec+163,	yyvstop+359,
yycrank+427,	yysvec+31,	yyvstop+362,
yycrank+0,	0,		yyvstop+364,
yycrank+0,	0,		yyvstop+366,
yycrank+0,	0,		yyvstop+368,
yycrank+0,	yysvec+67,	yyvstop+370,
yycrank+418,	0,		0,	
yycrank+426,	0,		0,	
yycrank+422,	0,		0,	
yycrank+441,	0,		0,	
yycrank+438,	0,		0,	
yycrank+0,	0,		yyvstop+372,
yycrank+444,	0,		0,	
yycrank+0,	0,		yyvstop+374,
yycrank+433,	0,		0,	
yycrank+0,	0,		yyvstop+376,
yycrank+452,	0,		0,	
yycrank+463,	0,		0,	
yycrank+0,	0,		yyvstop+378,
yycrank+450,	0,		0,	
yycrank+471,	0,		0,	
yycrank+0,	0,		yyvstop+380,
yycrank+457,	0,		0,	
yycrank+455,	0,		0,	
yycrank+471,	0,		0,	
yycrank+731,	0,		0,	
yycrank+467,	yysvec+202,	yyvstop+382,
yycrank+0,	0,		yyvstop+384,
yycrank+0,	0,		yyvstop+386,
yycrank+498,	yysvec+31,	yyvstop+388,
yycrank+482,	yysvec+31,	yyvstop+390,
yycrank+0,	yysvec+31,	yyvstop+392,
yycrank+0,	yysvec+31,	yyvstop+395,
yycrank+490,	yysvec+31,	yyvstop+398,
yycrank+492,	yysvec+31,	yyvstop+400,
yycrank+493,	yysvec+31,	yyvstop+402,
yycrank+556,	yysvec+31,	yyvstop+404,
yycrank+561,	yysvec+31,	yyvstop+406,
yycrank+0,	yysvec+31,	yyvstop+408,
yycrank+0,	yysvec+31,	yyvstop+411,
yycrank+563,	yysvec+31,	yyvstop+414,
yycrank+597,	yysvec+31,	yyvstop+416,
yycrank+612,	yysvec+31,	yyvstop+418,
yycrank+614,	yysvec+31,	yyvstop+420,
yycrank+601,	yysvec+31,	yyvstop+422,
yycrank+0,	yysvec+31,	yyvstop+424,
yycrank+619,	yysvec+31,	yyvstop+427,
yycrank+619,	yysvec+31,	yyvstop+429,
yycrank+616,	yysvec+31,	yyvstop+431,
yycrank+610,	yysvec+31,	yyvstop+433,
yycrank+617,	yysvec+31,	yyvstop+436,
yycrank+612,	yysvec+31,	yyvstop+438,
yycrank+624,	yysvec+31,	yyvstop+440,
yycrank+630,	yysvec+31,	yyvstop+442,
yycrank+700,	yysvec+31,	yyvstop+444,
yycrank+0,	yysvec+31,	yyvstop+446,
yycrank+626,	yysvec+31,	yyvstop+449,
yycrank+622,	yysvec+31,	yyvstop+451,
yycrank+0,	yysvec+31,	yyvstop+453,
yycrank+630,	yysvec+31,	yyvstop+456,
yycrank+637,	yysvec+31,	yyvstop+458,
yycrank+633,	yysvec+31,	yyvstop+460,
yycrank+0,	yysvec+31,	yyvstop+462,
yycrank+637,	yysvec+31,	yyvstop+465,
yycrank+628,	yysvec+31,	yyvstop+467,
yycrank+629,	yysvec+31,	yyvstop+469,
yycrank+645,	yysvec+31,	yyvstop+471,
yycrank+634,	yysvec+31,	yyvstop+473,
yycrank+0,	yysvec+31,	yyvstop+475,
yycrank+0,	yysvec+31,	yyvstop+478,
yycrank+0,	yysvec+31,	yyvstop+481,
yycrank+650,	yysvec+31,	yyvstop+484,
yycrank+652,	yysvec+31,	yyvstop+486,
yycrank+638,	yysvec+31,	yyvstop+488,
yycrank+648,	yysvec+31,	yyvstop+490,
yycrank+655,	yysvec+31,	yyvstop+492,
yycrank+661,	yysvec+31,	yyvstop+495,
yycrank+661,	yysvec+31,	yyvstop+497,
yycrank+660,	yysvec+31,	yyvstop+499,
yycrank+650,	yysvec+31,	yyvstop+501,
yycrank+665,	yysvec+31,	yyvstop+503,
yycrank+758,	0,		yyvstop+505,
yycrank+0,	yysvec+31,	yyvstop+507,
yycrank+667,	yysvec+31,	yyvstop+510,
yycrank+664,	yysvec+31,	yyvstop+512,
yycrank+657,	yysvec+31,	yyvstop+514,
yycrank+670,	yysvec+31,	yyvstop+516,
yycrank+688,	yysvec+31,	yyvstop+518,
yycrank+661,	yysvec+31,	yyvstop+520,
yycrank+677,	yysvec+31,	yyvstop+522,
yycrank+682,	yysvec+31,	yyvstop+524,
yycrank+683,	yysvec+31,	yyvstop+527,
yycrank+763,	yysvec+31,	yyvstop+529,
yycrank+695,	yysvec+31,	yyvstop+531,
yycrank+692,	yysvec+31,	yyvstop+533,
yycrank+0,	yysvec+31,	yyvstop+535,
yycrank+683,	yysvec+31,	yyvstop+538,
yycrank+685,	yysvec+31,	yyvstop+540,
yycrank+699,	yysvec+31,	yyvstop+543,
yycrank+-794,	yysvec+163,	yyvstop+545,
yycrank+-795,	yysvec+163,	yyvstop+547,
yycrank+-806,	0,		yyvstop+550,
yycrank+-808,	0,		yyvstop+553,
yycrank+-796,	yysvec+163,	yyvstop+556,
yycrank+-798,	yysvec+163,	yyvstop+558,
yycrank+-801,	yysvec+163,	yyvstop+560,
yycrank+-803,	yysvec+163,	yyvstop+562,
yycrank+-809,	yysvec+163,	yyvstop+564,
yycrank+-810,	yysvec+163,	yyvstop+566,
yycrank+-811,	yysvec+163,	yyvstop+569,
yycrank+-813,	yysvec+163,	yyvstop+571,
yycrank+-814,	yysvec+163,	yyvstop+574,
yycrank+-815,	yysvec+163,	yyvstop+576,
yycrank+-818,	yysvec+163,	yyvstop+579,
yycrank+-816,	yysvec+163,	yyvstop+581,
yycrank+-819,	yysvec+163,	yyvstop+583,
yycrank+-821,	yysvec+163,	yyvstop+586,
yycrank+-823,	yysvec+163,	yyvstop+588,
yycrank+-822,	yysvec+163,	yyvstop+590,
yycrank+-824,	yysvec+163,	yyvstop+593,
yycrank+-825,	yysvec+163,	yyvstop+595,
yycrank+-826,	yysvec+163,	yyvstop+597,
yycrank+736,	yysvec+31,	yyvstop+599,
yycrank+724,	0,		yyvstop+601,
yycrank+725,	0,		0,	
yycrank+727,	0,		0,	
yycrank+0,	0,		yyvstop+603,
yycrank+741,	0,		0,	
yycrank+729,	0,		0,	
yycrank+730,	0,		0,	
yycrank+742,	0,		yyvstop+605,
yycrank+744,	0,		0,	
yycrank+733,	0,		0,	
yycrank+736,	0,		0,	
yycrank+0,	0,		yyvstop+607,
yycrank+735,	0,		0,	
yycrank+736,	0,		yyvstop+609,
yycrank+0,	yysvec+31,	yyvstop+611,
yycrank+752,	yysvec+31,	yyvstop+614,
yycrank+736,	yysvec+31,	yyvstop+616,
yycrank+807,	yysvec+31,	yyvstop+618,
yycrank+739,	yysvec+31,	yyvstop+620,
yycrank+758,	yysvec+31,	yyvstop+622,
yycrank+749,	yysvec+31,	yyvstop+624,
yycrank+760,	yysvec+31,	yyvstop+626,
yycrank+0,	yysvec+31,	yyvstop+628,
yycrank+754,	yysvec+31,	yyvstop+631,
yycrank+756,	yysvec+31,	yyvstop+633,
yycrank+0,	yysvec+31,	yyvstop+635,
yycrank+763,	yysvec+31,	yyvstop+638,
yycrank+755,	yysvec+31,	yyvstop+641,
yycrank+765,	yysvec+31,	yyvstop+643,
yycrank+766,	yysvec+31,	yyvstop+646,
yycrank+0,	yysvec+31,	yyvstop+648,
yycrank+836,	yysvec+31,	yyvstop+651,
yycrank+757,	yysvec+31,	yyvstop+653,
yycrank+0,	yysvec+31,	yyvstop+655,
yycrank+838,	0,		0,	
yycrank+0,	yysvec+31,	yyvstop+658,
yycrank+756,	yysvec+31,	yyvstop+661,
yycrank+0,	yysvec+31,	yyvstop+663,
yycrank+770,	yysvec+31,	yyvstop+666,
yycrank+758,	yysvec+31,	yyvstop+668,
yycrank+761,	yysvec+31,	yyvstop+670,
yycrank+0,	yysvec+31,	yyvstop+672,
yycrank+845,	yysvec+31,	yyvstop+675,
yycrank+0,	yysvec+31,	yyvstop+678,
yycrank+762,	yysvec+31,	yyvstop+681,
yycrank+0,	yysvec+31,	yyvstop+683,
yycrank+776,	yysvec+31,	yyvstop+686,
yycrank+776,	yysvec+31,	yyvstop+688,
yycrank+765,	yysvec+31,	yyvstop+690,
yycrank+765,	yysvec+31,	yyvstop+692,
yycrank+0,	yysvec+31,	yyvstop+694,
yycrank+767,	yysvec+31,	yyvstop+697,
yycrank+768,	yysvec+31,	yyvstop+699,
yycrank+769,	yysvec+31,	yyvstop+701,
yycrank+0,	yysvec+31,	yyvstop+703,
yycrank+0,	yysvec+31,	yyvstop+706,
yycrank+786,	yysvec+31,	yyvstop+709,
yycrank+783,	yysvec+31,	yyvstop+711,
yycrank+778,	yysvec+31,	yyvstop+713,
yycrank+792,	yysvec+31,	yyvstop+715,
yycrank+780,	yysvec+31,	yyvstop+717,
yycrank+0,	yysvec+31,	yyvstop+719,
yycrank+775,	yysvec+31,	yyvstop+722,
yycrank+0,	yysvec+31,	yyvstop+724,
yycrank+775,	yysvec+31,	yyvstop+727,
yycrank+885,	yysvec+31,	yyvstop+729,
yycrank+861,	0,		0,	
yycrank+793,	yysvec+31,	yyvstop+731,
yycrank+788,	yysvec+31,	yyvstop+733,
yycrank+865,	yysvec+31,	yyvstop+735,
yycrank+794,	yysvec+31,	yyvstop+737,
yycrank+0,	yysvec+31,	yyvstop+739,
yycrank+-889,	yysvec+163,	yyvstop+742,
yycrank+-891,	yysvec+163,	yyvstop+744,
yycrank+-890,	yysvec+163,	yyvstop+747,
yycrank+-892,	yysvec+163,	yyvstop+750,
yycrank+-894,	yysvec+163,	yyvstop+752,
yycrank+-895,	yysvec+163,	yyvstop+754,
yycrank+-896,	yysvec+163,	yyvstop+757,
yycrank+-897,	yysvec+163,	yyvstop+759,
yycrank+-899,	yysvec+163,	yyvstop+761,
yycrank+-900,	yysvec+163,	yyvstop+763,
yycrank+-905,	yysvec+163,	yyvstop+766,
yycrank+-901,	yysvec+163,	yyvstop+768,
yycrank+-911,	yysvec+163,	yyvstop+770,
yycrank+-912,	yysvec+163,	yyvstop+772,
yycrank+-913,	yysvec+163,	yyvstop+775,
yycrank+-914,	yysvec+163,	yyvstop+777,
yycrank+814,	yysvec+31,	yyvstop+780,
yycrank+816,	0,		0,	
yycrank+828,	0,		0,	
yycrank+0,	0,		yyvstop+782,
yycrank+826,	0,		0,	
yycrank+0,	0,		yyvstop+784,
yycrank+827,	0,		0,	
yycrank+815,	0,		0,	
yycrank+817,	0,		0,	
yycrank+830,	0,		0,	
yycrank+819,	0,		0,	
yycrank+0,	0,		yyvstop+786,
yycrank+837,	0,		0,	
yycrank+0,	yysvec+31,	yyvstop+788,
yycrank+0,	yysvec+31,	yyvstop+791,
yycrank+0,	yysvec+31,	yyvstop+794,
yycrank+0,	yysvec+31,	yyvstop+797,
yycrank+841,	yysvec+31,	yyvstop+800,
yycrank+834,	yysvec+31,	yyvstop+802,
yycrank+830,	yysvec+31,	yyvstop+804,
yycrank+844,	yysvec+31,	yyvstop+806,
yycrank+827,	yysvec+31,	yyvstop+808,
yycrank+847,	yysvec+31,	yyvstop+810,
yycrank+847,	yysvec+31,	yyvstop+812,
yycrank+834,	yysvec+31,	yyvstop+814,
yycrank+851,	yysvec+31,	yyvstop+816,
yycrank+920,	0,		0,	
yycrank+838,	yysvec+31,	yyvstop+818,
yycrank+852,	0,		0,	
yycrank+0,	yysvec+31,	yyvstop+820,
yycrank+839,	yysvec+31,	yyvstop+823,
yycrank+856,	yysvec+31,	yyvstop+825,
yycrank+852,	yysvec+31,	yyvstop+827,
yycrank+926,	0,		0,	
yycrank+0,	yysvec+31,	yyvstop+830,
yycrank+858,	yysvec+31,	yyvstop+833,
yycrank+928,	yysvec+31,	yyvstop+835,
yycrank+0,	yysvec+31,	yyvstop+837,
yycrank+846,	yysvec+31,	yyvstop+840,
yycrank+0,	yysvec+31,	yyvstop+842,
yycrank+930,	yysvec+31,	yyvstop+845,
yycrank+0,	yysvec+31,	yyvstop+848,
yycrank+0,	yysvec+31,	yyvstop+851,
yycrank+931,	yysvec+31,	yyvstop+854,
yycrank+863,	yysvec+31,	yyvstop+856,
yycrank+865,	yysvec+31,	yyvstop+858,
yycrank+850,	yysvec+31,	yyvstop+860,
yycrank+935,	yysvec+31,	yyvstop+862,
yycrank+865,	yysvec+31,	yyvstop+864,
yycrank+960,	0,		yyvstop+866,
yycrank+868,	0,		0,	
yycrank+962,	yysvec+31,	yyvstop+868,
yycrank+0,	yysvec+31,	yyvstop+870,
yycrank+941,	0,		0,	
yycrank+0,	yysvec+31,	yyvstop+873,
yycrank+-964,	yysvec+163,	yyvstop+876,
yycrank+-965,	yysvec+163,	yyvstop+878,
yycrank+-966,	yysvec+163,	yyvstop+880,
yycrank+-967,	yysvec+163,	yyvstop+883,
yycrank+-968,	yysvec+163,	yyvstop+885,
yycrank+-969,	yysvec+163,	yyvstop+888,
yycrank+-970,	yysvec+163,	yyvstop+890,
yycrank+-972,	yysvec+163,	yyvstop+892,
yycrank+-973,	yysvec+163,	yyvstop+894,
yycrank+-974,	yysvec+163,	yyvstop+896,
yycrank+-971,	yysvec+163,	yyvstop+898,
yycrank+-975,	yysvec+163,	yyvstop+901,
yycrank+872,	yysvec+31,	yyvstop+903,
yycrank+878,	0,		0,	
yycrank+874,	0,		0,	
yycrank+873,	0,		0,	
yycrank+0,	0,		yyvstop+905,
yycrank+875,	0,		0,	
yycrank+0,	0,		yyvstop+907,
yycrank+0,	0,		yyvstop+909,
yycrank+0,	0,		yyvstop+911,
yycrank+0,	0,		yyvstop+913,
yycrank+881,	yysvec+31,	yyvstop+915,
yycrank+961,	yysvec+31,	yyvstop+917,
yycrank+963,	yysvec+31,	yyvstop+919,
yycrank+0,	yysvec+31,	yyvstop+922,
yycrank+892,	yysvec+31,	yyvstop+925,
yycrank+0,	yysvec+31,	yyvstop+927,
yycrank+989,	yysvec+31,	yyvstop+930,
yycrank+899,	yysvec+31,	yyvstop+932,
yycrank+0,	yysvec+31,	yyvstop+934,
yycrank+899,	0,		0,	
yycrank+901,	yysvec+31,	yyvstop+937,
yycrank+0,	0,		yyvstop+939,
yycrank+902,	yysvec+31,	yyvstop+941,
yycrank+906,	yysvec+31,	yyvstop+943,
yycrank+905,	0,		0,	
yycrank+0,	yysvec+31,	yyvstop+945,
yycrank+980,	0,		0,	
yycrank+0,	yysvec+31,	yyvstop+948,
yycrank+982,	0,		0,	
yycrank+984,	0,		0,	
yycrank+0,	yysvec+31,	yyvstop+951,
yycrank+0,	yysvec+31,	yyvstop+954,
yycrank+909,	yysvec+31,	yyvstop+957,
yycrank+986,	0,		0,	
yycrank+915,	yysvec+31,	yyvstop+959,
yycrank+0,	0,		yyvstop+961,
yycrank+1033,	0,		0,	
yycrank+910,	yysvec+31,	yyvstop+963,
yycrank+920,	0,		0,	
yycrank+-1016,	yysvec+163,	yyvstop+965,
yycrank+-1013,	yysvec+163,	yyvstop+967,
yycrank+-1040,	yysvec+163,	yyvstop+969,
yycrank+-1014,	yysvec+163,	yyvstop+971,
yycrank+-1043,	yysvec+163,	yyvstop+974,
yycrank+-1017,	yysvec+163,	yyvstop+976,
yycrank+-1018,	yysvec+163,	yyvstop+979,
yycrank+-1022,	yysvec+163,	yyvstop+982,
yycrank+-1023,	yysvec+163,	yyvstop+985,
yycrank+1024,	yysvec+31,	yyvstop+988,
yycrank+0,	0,		yyvstop+990,
yycrank+0,	0,		yyvstop+992,
yycrank+0,	0,		yyvstop+994,
yycrank+0,	yysvec+31,	yyvstop+996,
yycrank+1013,	0,		0,	
yycrank+1015,	0,		0,	
yycrank+920,	yysvec+31,	yyvstop+999,
yycrank+1027,	0,		yyvstop+1001,
yycrank+924,	yysvec+31,	yyvstop+1003,
yycrank+0,	0,		yyvstop+1005,
yycrank+0,	yysvec+31,	yyvstop+1007,
yycrank+931,	yysvec+31,	yyvstop+1010,
yycrank+0,	0,		yyvstop+1012,
yycrank+938,	0,		0,	
yycrank+939,	0,		0,	
yycrank+941,	0,		0,	
yycrank+0,	yysvec+31,	yyvstop+1014,
yycrank+942,	0,		0,	
yycrank+1111,	0,		yyvstop+1017,
yycrank+945,	yysvec+31,	yyvstop+1019,
yycrank+0,	0,		yyvstop+1021,
yycrank+-1038,	yysvec+163,	yyvstop+1023,
yycrank+-1039,	yysvec+163,	yyvstop+1026,
yycrank+-1041,	yysvec+163,	yyvstop+1029,
yycrank+0,	0,		yyvstop+1032,
yycrank+952,	0,		0,	
yycrank+953,	0,		0,	
yycrank+955,	yysvec+31,	yyvstop+1034,
yycrank+0,	yysvec+31,	yyvstop+1036,
yycrank+956,	yysvec+31,	yyvstop+1039,
yycrank+0,	0,		yyvstop+1041,
yycrank+0,	0,		yyvstop+1043,
yycrank+0,	0,		yyvstop+1045,
yycrank+0,	0,		yyvstop+1047,
yycrank+1049,	yysvec+31,	yyvstop+1049,
yycrank+0,	0,		yyvstop+1051,
yycrank+0,	0,		yyvstop+1053,
yycrank+0,	yysvec+31,	yyvstop+1055,
yycrank+0,	yysvec+31,	yyvstop+1058,
0,	0,	0};
struct yywork *yytop = yycrank+1233;
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
