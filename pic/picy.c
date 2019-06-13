#include <stdio.h>
#include "pic.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

YYSTYPE	y;

extern	void	yyerror(char *);
extern	int	yylex(void);
extern	int	yyerrflag;
#ifndef	YYMAXDEPTH
#define	YYMAXDEPTH	150
#endif
YYSTYPE	yylval;
YYSTYPE	yyval;
#define	BOX	1
#define	LINE	2
#define	ARROW	3
#define	CIRCLE	4
#define	ELLIPSE	5
#define	ARC	6
#define	SPLINE	7
#define	BLOCK	8
#define	TEXT	9
#define	TROFF	10
#define	MOVE	11
#define	BLOCKEND	12
#define	PLACE	13
#define	PRINT	57359
#define	RESET	57360
#define	THRU	57361
#define	UNTIL	57362
#define	FOR	57363
#define	IF	57364
#define	COPY	57365
#define	THENSTR	57366
#define	ELSESTR	57367
#define	DOSTR	57368
#define	PLACENAME	57369
#define	VARNAME	57370
#define	SPRINTF	57371
#define	DEFNAME	57372
#define	ATTR	57373
#define	TEXTATTR	57374
#define	LEFT	57375
#define	RIGHT	57376
#define	UP	57377
#define	DOWN	57378
#define	FROM	57379
#define	TO	57380
#define	AT	57381
#define	BY	57382
#define	WITH	57383
#define	HEAD	57384
#define	CW	57385
#define	CCW	57386
#define	THEN	57387
#define	HEIGHT	57388
#define	WIDTH	57389
#define	RADIUS	57390
#define	DIAMETER	57391
#define	LENGTH	57392
#define	SIZE	57393
#define	CORNER	57394
#define	HERE	57395
#define	LAST	57396
#define	NTH	57397
#define	SAME	57398
#define	BETWEEN	57399
#define	AND	57400
#define	EAST	57401
#define	WEST	57402
#define	NORTH	57403
#define	SOUTH	57404
#define	NE	57405
#define	NW	57406
#define	SE	57407
#define	SW	57408
#define	START	57409
#define	END	57410
#define	DOTX	57411
#define	DOTY	57412
#define	DOTHT	57413
#define	DOTWID	57414
#define	DOTRAD	57415
#define	NUMBER	57416
#define	LOG	57417
#define	EXP	57418
#define	SIN	57419
#define	COS	57420
#define	ATAN2	57421
#define	SQRT	57422
#define	RAND	57423
#define	MIN	57424
#define	MAX	57425
#define	INT	57426
#define	DIR	57427
#define	DOT	57428
#define	DASH	57429
#define	CHOP	57430
#define	FILL	57431
#define	NOEDGE	57432
#define	ST	57433
#define	OROR	57434
#define	ANDAND	57435
#define	GT	57436
#define	LT	57437
#define	LE	57438
#define	GE	57439
#define	EQ	57440
#define	NEQ	57441
#define	UMINUS	57442
#define	NOT	57443
#define YYEOFCODE 1
#define YYERRCODE 2
short	yyexca[] =
{-1, 0,
	1, 2,
	-2, 0,
-1, 1,
	1, -1,
	-2, 0,
-1, 206,
	95, 0,
	96, 0,
	97, 0,
	98, 0,
	99, 0,
	100, 0,
	-2, 159,
-1, 213,
	95, 0,
	96, 0,
	97, 0,
	98, 0,
	99, 0,
	100, 0,
	-2, 158,
-1, 214,
	95, 0,
	96, 0,
	97, 0,
	98, 0,
	99, 0,
	100, 0,
	-2, 160,
-1, 215,
	95, 0,
	96, 0,
	97, 0,
	98, 0,
	99, 0,
	100, 0,
	-2, 161,
-1, 216,
	95, 0,
	96, 0,
	97, 0,
	98, 0,
	99, 0,
	100, 0,
	-2, 162,
-1, 217,
	95, 0,
	96, 0,
	97, 0,
	98, 0,
	99, 0,
	100, 0,
	-2, 163,
-1, 264,
	69, 112,
	70, 112,
	71, 112,
	72, 112,
	73, 112,
	-2, 85,
-1, 270,
	95, 0,
	96, 0,
	97, 0,
	98, 0,
	99, 0,
	100, 0,
	-2, 159,
};
#define	YYNPROD	178
#define	YYPRIVATE 57344
#define	YYLAST	1654
short	yyact[] =
{
 173, 334, 139,  32,  53,  68, 312, 242, 124, 125,
 137,  42, 115, 197, 116, 117, 118, 119, 110, 111,
 112, 113, 114,  95, 227, 122, 162, 320,  81,  43,
 274, 137,  92, 319,  51, 299, 273, 161, 137, 160,
 159, 105, 158, 157, 156, 155, 154, 153,  98, 127,
 128, 131, 109, 298, 246, 235, 152, 149, 233,  40,
 112, 113, 114, 122,  51, 122,  41,  72,  40, 194,
 102, 164, 166, 138, 130, 110, 111, 112, 113, 114,
 129,  83, 122, 169, 190,  73,  74,  75,  76,  77,
  78,  79,  80, 276, 246, 200, 110, 111, 112, 113,
 114, 138, 126, 122, 124, 125, 107,  38, 204, 206,
 105, 208, 209, 210, 211, 212, 213, 214, 215, 216,
 217, 218, 219, 220, 195, 221, 224, 132, 133, 134,
 135, 136,  51,  51, 124, 125, 124, 125, 205, 207,
 198, 199,  34, 316, 275, 321, 168,  85, 223, 226,
 234, 124, 125,  44, 236, 237, 238, 239, 240, 241,
 203, 243, 244, 245, 232, 167, 170, 247, 249, 228,
 124, 125,  86, 252,  93, 253, 105, 105, 105, 105,
 105,  96,  97, 123, 261, 262, 263, 265, 335, 336,
 337, 338,  81, 124, 125, 267, 268, 192, 270,  51,
  51,  51,  51,  51, 251, 254, 255, 256, 257, 260,
 121, 120, 115, 197, 116, 117, 118, 119, 110, 111,
 112, 113, 114, 278,  90, 122, 280,  86, 311, 282,
 287, 193, 191, 283, 229, 132, 133, 134, 135, 136,
  71, 201, 142, 146, 147, 143, 144, 145, 148, 250,
 285,  35, 281, 300,  66,  67,  69, 284,  87,  88,
 287, 288,  35, 164, 166, 269,   2,   4,  36, 230,
  37, 285, 286,  39, 163, 305, 105, 105, 308,  36,
 310, 196, 188,  24, 171,  24, 266, 149,  84,  24,
 230, 231, 151,  82, 313,  70, 314, 315,   1,  51,
  51,  69, 165, 317, 318, 306, 307,  37, 100,  24,
 322,   5, 323, 142, 146, 147, 143, 144, 145, 148,
 248, 331,  24,  24,  26,   6,  12,  13,  14, 304,
  89, 339,  91,   0, 301, 340,   0,   0,   0,   0,
 341, 271, 272,  16,  20,  21,  17,  18,  19,  22,
  37,  35,  25,  23,  52,  46,  10,  11,   0,   0,
  30,  31,  29, 141,   0,  24, 103,  46,  36, 202,
   0,   0,   0,   0,   0,   0,   0,   0,   0,  66,
  67,  69,  54,   0,  24,   0,   0,   0,   0,   0,
   0,  66,  67,  69,  54,   0,   0,   0,   0,   0,
   0,  45,  56,  57,  58,  59,  60,  61,  62,  64,
  63,  65,   0,  45,  56,  57,  58,  59,  60,  61,
  62,  64,  63,  65,   9,   0,   0,   0,  49,  48,
 101,   0, 303,   0,  55,   0,   0,   0,   0,   0,
  49,  48,  35,  94,   0,   0,  55,   0,   0,   0,
   0,  27,   0,  33,   0,  50,   0,  52,  46,  36,
   0, 172, 181,   0,   0,   0,   0, 175, 176, 177,
 178, 179, 182,   0, 142, 146, 147, 143, 144, 145,
 148, 150,  66,  67,  69,  54, 180, 121, 120, 115,
 197, 116, 117, 118, 119, 110, 111, 112, 113, 114,
   0,   0, 122,   0,  45,  56,  57,  58,  59,  60,
  61,  62,  64,  63,  65, 174, 183, 184, 185, 186,
 187,   0,   0,  35, 151,   0,   0,   0,   0,   0,
   0,  49,  48,   0,  35,   0,   0,  55,  52,  46,
  36,   0,   0,   0,   0,   0,  94,   0,   0,  52,
  46,  36,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,  66,  67,  69,  54,   0,   0,   0,
   0,   0,   0,   0,  66,  67,  69,  54,   0,   0,
   0,   0,   0,   0,   0,  45,  56,  57,  58,  59,
  60,  61,  62,  64,  63,  65,  45,  56,  57,  58,
  59,  60,  61,  62,  64,  63,  65,  52,  46,   0,
   0,   0,  49,  48,   0,   0,   0,   0,  55,  52,
  46,   0,   0,  49,  48,   0,   0,  94,   0,  55,
   0,   0, 258,  67,  69,  54,   0,   0,  50,   0,
   0,   0,   0,   0,  66,  67,  69,  54,   0,   0,
   0,   0,   0,   0,  45,  56,  57,  58,  59,  60,
  61,  62,  64,  63,  65,   0,  45,  56,  57,  58,
  59,  60,  61,  62,  64,  63,  65, 264,  46,   0,
   0,  49,  48,   0,   0,   0,   0,  55,  52,  46,
   0,   0,   0,  49,  48, 259,  50,   0,   0,  55,
   0,   0,  66,  67,  69,  54,   0,   0,  50,   0,
   0,   0,   0,  66,  67,  69,  54,   0,   0,   0,
   0,   0,   0,   0,  45,  56,  57,  58,  59,  60,
  61,  62,  64,  63,  65,  45,  56,  57,  58,  59,
  60,  61,  62,  64,  63,  65,  52,  46,   0,   0,
   0,  49,  48,   0,   0,   0,   0,  55,   0,   0,
   0,   0,  49,  48,   0,   0,  94,   0,  55,   0,
   0,  66,  67,  69,  54,   0,   0, 225, 120, 115,
 197, 116, 117, 118, 119, 110, 111, 112, 113, 114,
   0,   0, 122,  45,  56,  57,  58,  59,  60,  61,
  62,  64,  63,  65,   0,  16,  20,  21,  17,  18,
  19,  22,   0,  35,  25,  23,   0,   0,  10,  11,
  49,  48,  30,  31,  29,   0,  55,   0,   7,  28,
  36,   0,   0,   0,   0, 222,  16,  20,  21,  17,
  18,  19,  22,   0,  35,  25,  23,   0,   0,  10,
  11,   0,   0,  30,  31,  29,   0,   0,   0,   7,
  28,  36,   3,   0,  16,  20,  21,  17,  18,  19,
  22,   0,  35,  25,  23,   0,   0,  10,  11,   0,
   0,  30,  31,  29,   0,   0,   9,   7,  28,  36,
   0,   0,  15,   0,   0, 121, 120, 115, 197, 116,
 117, 118, 119, 110, 111, 112, 113, 114,   0,   0,
 122,   0,   0,  27, 189,  33,   0,   9,   0, 333,
   0,   0,   0,  15, 121, 120, 115, 197, 116, 117,
 118, 119, 110, 111, 112, 113, 114,   0,   0, 122,
   0,  99, 109,   0,  27,   9,  33,   0, 332,   0,
   0,  15,  16,  20,  21,  17,  18,  19,  22,   0,
  35,  25,  23,   0,   0,  10,  11,   0,   0,  30,
  31,  29,  27,   0,  33,   7,  28,  36, 121, 120,
 115, 108, 116, 117, 118, 119, 110, 111, 112, 113,
 114,   0,   0, 122,   0,   0, 107,   0,   0,   0,
   0,   0, 229, 121, 120, 115, 197, 116, 117, 118,
 119, 110, 111, 112, 113, 114,   0,   0, 122,   0,
   0, 309,   0,   0,   0,   0,   0, 229,   0,   0,
   0,   0,   0,   9,   0,   0,   0,   0,   0,  15,
 121, 120, 115, 197, 116, 117, 118, 119, 110, 111,
 112, 113, 114,   0,   0, 122,   0,   0,   0,   0,
  27,   0,  33,   0, 326, 121, 120, 115, 197, 116,
 117, 118, 119, 110, 111, 112, 113, 114,   0,   0,
 122, 142, 146, 147, 143, 144, 145, 148, 140, 325,
 121, 120, 115, 197, 116, 117, 118, 119, 110, 111,
 112, 113, 114,   0,   0, 122,   0,   0,   0,   0,
   0,   0,   0,   0, 324, 121, 120, 115, 197, 116,
 117, 118, 119, 110, 111, 112, 113, 114,   0,   0,
 122, 141,   0,   0,   0,   0,   0,   0,   0, 297,
 121, 120, 115, 197, 116, 117, 118, 119, 110, 111,
 112, 113, 114,   0,   0, 122,   0,   0,   0,   0,
   0,   0,   0,   0, 294, 121, 120, 115, 197, 116,
 117, 118, 119, 110, 111, 112, 113, 114,   0,   0,
 122,   0,   0,   0,   0,   0,   0,   0,   0, 292,
 121, 120, 115, 197, 116, 117, 118, 119, 110, 111,
 112, 113, 114,   0,   0, 122,   0,   0,   0,   0,
   0,   0,   0,   0, 291, 121, 120, 115, 197, 116,
 117, 118, 119, 110, 111, 112, 113, 114,   0,   0,
 122,   0,   0,   0,   0,   0,   0,   0,   0, 290,
 121, 120, 115, 197, 116, 117, 118, 119, 110, 111,
 112, 113, 114,   0, 109, 122,   0,   0,   0,   0,
   0,   0,   0,   0, 289, 121, 120, 115, 197, 116,
 117, 118, 119, 110, 111, 112, 113, 114, 109,   0,
 122,   0,   0,   0,   0,   0,   0,   0, 106, 229,
 121, 120, 115, 108, 116, 117, 118, 119, 110, 111,
 112, 113, 114,   0,   0, 122,   0,   0, 107,   0,
   0,   0,   0,   0, 121, 120, 115, 108, 116, 117,
 118, 119, 110, 111, 112, 113, 114,   0,   0, 122,
   0,   0, 107, 121, 120, 115, 197, 116, 117, 118,
 119, 110, 111, 112, 113, 114,   0,   0, 122,   0,
   0, 296, 121, 120, 115, 197, 116, 117, 118, 119,
 110, 111, 112, 113, 114,   0,   0, 122,   0,   0,
 295, 121, 120, 115, 197, 116, 117, 118, 119, 110,
 111, 112, 113, 114,   0,   0, 122, 343,   0, 293,
 121, 120, 115, 197, 116, 117, 118, 119, 110, 111,
 112, 113, 114, 342,   0, 122,   0,   0, 279, 121,
 120, 115, 197, 116, 117, 118, 119, 110, 111, 112,
 113, 114, 330,   0, 122,   0,   0, 277,   0,   0,
   0,   0,   0,   0,   0,   0, 329,   0, 328,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0, 327,   0, 121, 120, 115, 197, 116, 117,
 118, 119, 110, 111, 112, 113, 114, 302,   0, 122,
 121, 120, 115, 197, 116, 117, 118, 119, 110, 111,
 112, 113, 114,   0,   0, 122,   0,   0,   0, 121,
 120, 115, 197, 116, 117, 118, 119, 110, 111, 112,
 113, 114,   0,   0, 122, 121, 120, 115, 197, 116,
 117, 118, 119, 110, 111, 112, 113, 114,   0,   0,
 122,   0, 121, 120, 115, 197, 116, 117, 118, 119,
 110, 111, 112, 113, 114,   0,   0, 122, 121, 120,
 115, 197, 116, 117, 118, 119, 110, 111, 112, 113,
 114,  47,   8, 122,   8,   0,   0,   0,   8,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   8,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   8, 104,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   8,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   8
};
short	yypact[] =
{
 860,-1000, 948,-1000,-1000,  16, 948, -51, -25,-1000,
 522, 212,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,-1000, 250,-1000, 948,-1000, -11, 239,
 196, 511, 149,-1000, 150,-1000, -68,-1000,-1000, 832,
 339,-1000,1197,  92,  11,-1000, -11,-1000, 327, 327,
 592, 166, -14,1077, 470, 327, -69, -70, -71, -72,
 -73, -74, -76, -77, -79, -90, 247,-1000, 113,-1000,
  55,-1000, 430, 430, 430, 430, 430, 430, 430, 430,
 430, 149, 801, 327, 239,-1000,-1000, 167, 250,  32,
-1000, 257,1445,  41, 327, 166,-1000,-1000, 250,-1000,
-1000, 948,  69, -42, -25,1221,-1000, 327, 592, 592,
 327, 327, 327, 327, 327, 327, 327, 327, 327, 327,
 327, 327, 327,-1000, 719, 661,-1000, -45, -45, -93,
  58, 885,-1000,-1000,-1000,-1000,-1000,-1000, 263, 112,
 -57,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,  98,
 -60,-1000, -45, 327, 327, 327, 327, 327, 327,-110,
 327, 327, 327, -61, 309, 238,-1000,-1000,-1000,-1000,
 176,-1000, 327,1445, 327, 592, 592, 592, 592, 580,
-1000,-1000,-1000, 327, 327, 650, 327,-1000, 250,-1000,
1445,-1000,-1000,-1000, 327, 327, 240, 327, 250, 250,
1172, -81,-1000,-1000,1445,  33,  -5,  35, -43, -43,
 -45, -45, -45, -26, -26, -26, -26, -26, -83, 684,
 -45,1316, 327, 166,1297, 327, 166,-1000, 202,-1000,
-1000,-1000,-1000, 244,-1000, 233,1147,1122,1097,1072,
1278,1047,-1000,1259,1240,1022, 242,-1000, -62,-1000,
 -80,-1000,1445,1445,   3,   3,   3,   3, 247, 226,
   3,1445,1445,1445, -14,1445,-1000,1429, 394,-1000,
 -26,-1000,-1000,-1000, 327, 592, 592, 327, 910, 327,
 117,-111, -21, 309, 238,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000, 327,-1000, 327, 327,-1000, 223, 203,
  91, 430, 327, 327, -84,1445,  50,   3,1445, 327,
1445, 327,-1000, 997, 972, 947,-1000,1412,1396,-1000,
 327,-1000, 831, 802,-1000,-1000,-1000,  87,-1000,  87,
-1000,1445,-1000,-1000, 327,-1000,-1000,-1000,-1000, 327,
1377,1361,-1000,-1000
};
short	yypgo[] =
{
   0,   0, 332,1551, 330, 142,   1, 329, 328, 327,
 326, 325, 267, 266,  29, 324, 311,  23,   5, 282,
   3,   4,   2, 298, 295, 288, 147,  67, 286, 284
};
short	yyr1[] =
{
   0,  23,  23,  23,  13,  13,  12,  12,  12,  12,
  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
  12,  24,  24,  24,  24,   3,  10,  25,  25,  26,
  26,  26,   9,   9,   9,   9,   8,   8,   2,   2,
   2,   4,   6,   6,   6,   6,   6,  11,  16,  16,
  16,  16,  16,  16,  16,  16,  16,  16,  28,  16,
  15,  27,  27,  29,  29,  29,  29,  29,  29,  29,
  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,
  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,
  19,  19,  20,  20,  20,   5,   5,   5,   7,   7,
  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
  14,  14,  17,  17,  17,  17,  17,  17,  17,  17,
  17,  17,  17,  17,  17,  18,  18,  18,  21,  21,
  21,  22,  22,  22,  22,  22,  22,  22,  22,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1
};
short	yyr2[] =
{
   0,   1,   0,   1,   1,   2,   2,   3,   3,   4,
   4,   2,   1,   3,   3,   3,   3,   1,   1,   1,
   1,   0,   1,   2,   3,   3,   2,   1,   2,   1,
   2,   2,  10,   7,  10,   7,   4,   3,   1,   3,
   3,   1,   1,   1,   1,   1,   0,   1,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   1,   0,   5,
   1,   2,   0,   2,   1,   1,   2,   1,   2,   2,
   2,   2,   2,   3,   4,   2,   1,   1,   1,   2,
   1,   2,   1,   2,   1,   2,   2,   1,   1,   1,
   1,   2,   1,   2,   2,   1,   4,   6,   1,   3,
   1,   3,   3,   5,   5,   7,   7,   3,   3,   5,
   6,   5,   1,   2,   2,   1,   2,   3,   3,   2,
   3,   3,   1,   2,   2,   4,   4,   3,   2,   2,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   3,   3,   3,   3,   3,   2,   2,   3,
   2,   2,   2,   2,   2,   3,   4,   4,   3,   3,
   3,   3,   3,   3,   3,   3,   2,   4,   4,   3,
   4,   4,   6,   4,   3,   6,   6,   4
};
short	yychk[] =
{
-1000, -23, -13,   2, -12, -16, -11,  27,  -3,  85,
  17,  18, -10,  -9,  -8,  91,   4,   7,   8,   9,
   5,   6,  10,  14, -19,  13, -15, 112,  28,  23,
  21,  22, -20, 114,  -5,  12,  29, -12,  91, -13,
 110,  91,  -1, -14,  -5,  74,  28,  -3, 102, 101,
 116, -17,  27, -21,  55, 107,  75,  76,  77,  78,
  79,  80,  81,  83,  82,  84,  52,  53, -18,  54,
 -24,  28, -27, -27, -27, -27, -27, -27, -27, -27,
 -27, -20, -13,  92, -25, -26,  -5,  19,  20,  -4,
  28,  -2,  -1,  -5, 116, -17,  32,  32, 116, 109,
 -12,  91, -14,  27,  -3,  -1,  91, 111,  96,  57,
 101, 102, 103, 104, 105,  95,  97,  98,  99, 100,
  94,  93, 108,  91, 101, 102,  91,  -1,  -1, -14,
 -17,  -1,  69,  70,  71,  72,  73,  52, 115, -22,
  11,  54,   4,   7,   8,   9,   5,   6,  10, -22,
  11,  54,  -1, 116, 116, 116, 116, 116, 116, 116,
 116, 116, 116,  27, -21,  55, -18,  52,  91,  28,
 111, -29,  31,  -1,  85,  37,  38,  39,  40,  41,
  56,  32,  42,  86,  87,  88,  89,  90, -19, 113,
  -1, -26,  30,  -5,  37,  92,  24,  96,  99, 100,
  -1,  -5, -12,  91,  -1, -14,  -1, -14,  -1,  -1,
  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
  -1,  -1, 116, -17,  -1, 116, -17, 117, 111, 117,
  27,  28,  52, 115,  52, 115,  -1,  -1,  -1,  -1,
  -1,  -1, 117,  -1,  -1,  -1, 115, -22,  11, -22,
  11,  28,  -1,  -1, -14, -14, -14, -14,  52, 115,
 -14,  -1,  -1,  -1,  27,  -1, -28,  -1,  -1,  25,
  -1,  -5,  -5, 117, 111, 111,  58, 111,  -1, 111,
  -1, -17,  27, -21,  55,  27,  28,  27,  28, 117,
 117, 117, 117, 111, 117, 111, 111, 117, 115, 115,
  27, -27,  38,  38,  -7,  -1, -14, -14,  -1, 111,
  -1, 111, 117,  -1,  -1,  -1,  52,  -1,  -1, 117,
 111,  95,  -1,  -1, 117, 117, 117,  40,  26,  40,
  26,  -1, 117, 117,  -6, 101, 102, 103, 104,  -6,
  -1,  -1,  26,  26
};
short	yydef[] =
{
  -2,  -2,   1,   3,   4,   0,   0,   0,   0,  12,
   0,  21,  17,  18,  19,  20,  62,  62,  62,  62,
  62,  62,  62,  62,  62,  57,   0,  47,   0,   0,
   0,   0,  90,  60,  92,  95,   0,   5,   6,   0,
   0,  11,   0,   0,   0, 139, 140, 141,   0,   0,
   0, 100, 112,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0, 115, 122, 130,
   0,  22,  48,  49,  50,  51,  52,  53,  54,  55,
  56,  91,   0,   0,  26,  27,  29,   0,   0,   0,
  41,   0,  38,   0,   0,   0,  94,  93,   0,   7,
   8,  20,   0, 112, 141,   0,  13,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,  14,   0,   0,  15, 147, 148,   0,
 100,   0, 150, 151, 152, 153, 154, 113,   0, 116,
 138, 128, 131, 132, 133, 134, 135, 136, 137, 119,
 138, 129, 166,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0, 114,   0,   0, 124, 123,  16,  23,
   0,  61,  64,  65,  67,   0,   0,   0,   0,   0,
  76,  77,  78,  80,  82,  84,  87,  88,  89,  58,
  25,  28,  30,  31,   0,   0,  37,   0,   0,   0,
   0,   0,   9,  10, 102,   0,  -2,   0, 142, 143,
 144, 145, 146,  -2,  -2,  -2,  -2,  -2, 164, 165,
 169,   0,   0, 107,   0,   0, 108, 101,   0, 149,
 127, 155, 117,   0, 120,   0,   0,   0,   0,   0,
   0,   0, 174,   0,   0,   0,   0, 118, 138, 121,
 138,  24,  63,  66,  68,  69,  70,  71,  72,   0,
  75,  79,  81,  83,  -2,  86,  62,   0,   0,  36,
  -2,  39,  40,  96,   0,   0,   0,   0,   0,   0,
   0,   0, 112,   0,   0, 125, 156, 126, 157, 167,
 168, 170, 171,   0, 173,   0,   0, 177,   0,   0,
  73,  59,   0,   0,   0,  98,   0, 111, 103,   0,
 104,   0, 109,   0,   0,   0,  74,   0,   0,  97,
   0, 110,   0,   0, 172, 175, 176,  46,  33,  46,
  35,  99, 105, 106,   0,  42,  43,  44,  45,   0,
   0,   0,  32,  34
};
short	yytok1[] =
{
   1,   4,   5,   6,   7,   8,   9,  10,  11,  12,
  13,  14,  15,  16,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0, 105,   0,   0,
 116, 117, 103, 101, 111, 102, 115, 104,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0, 110,   0,
   0,  92,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0, 114,   0, 113, 108,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0, 112,   0, 109
};
short	yytok2[] =
{
   2,   3,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,  17,  18,  19,  20,  21,
  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,
  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,
  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,
  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,
  62,  63,  64,  65,  66,  67,  68,  69,  70,  71,
  72,  73,  74,  75,  76,  77,  78,  79,  80,  81,
  82,  83,  84,  85,  86,  87,  88,  89,  90,  91,
  93,  94,  95,  96,  97,  98,  99, 100, 106, 107
};
long	yytok3[] =
{
   0
};
#define YYFLAG 		-1000
#define YYERROR		goto yyerrlab
#define YYACCEPT	return(0)
#define YYABORT		return(1)
#define	yyclearin	yychar = -1
#define	yyerrok		yyerrflag = 0

#ifdef	yydebug
#include	"y.debug"
#else
#define	yydebug		0
char*	yytoknames[1];		/* for debugging */
char*	yystates[1];		/* for debugging */
#endif

/*	parser for yacc output	*/

int	yynerrs = 0;		/* number of errors */
int	yyerrflag = 0;		/* error recovery flag */

char*
yytokname(int yyc)
{
	static char x[16];

	if(yyc > 0 && yyc <= sizeof(yytoknames)/sizeof(yytoknames[0]))
	if(yytoknames[yyc-1])
		return yytoknames[yyc-1];
	sprintf(x, "<%d>", yyc);
	return x;
}

char*
yystatname(int yys)
{
	static char x[16];

	if(yys >= 0 && yys < sizeof(yystates)/sizeof(yystates[0]))
	if(yystates[yys])
		return yystates[yys];
	sprintf(x, "<%d>\n", yys);
	return x;
}

long
yylex1(void)
{
	long yychar;
	long *t3p;
	int c;

	yychar = yylex();
	if(yychar <= 0) {
		c = yytok1[0];
		goto out;
	}
	if(yychar < sizeof(yytok1)/sizeof(yytok1[0])) {
		c = yytok1[yychar];
		goto out;
	}
	if(yychar >= YYPRIVATE)
		if(yychar < YYPRIVATE+sizeof(yytok2)/sizeof(yytok2[0])) {
			c = yytok2[yychar-YYPRIVATE];
			goto out;
		}
	for(t3p=yytok3;; t3p+=2) {
		c = t3p[0];
		if(c == yychar) {
			c = t3p[1];
			goto out;
		}
		if(c == 0)
			break;
	}
	c = 0;

out:
	if(c == 0)
		c = yytok2[1];	/* unknown char */
	if(yydebug >= 3)
		printf("lex %.4lX %s\n", yychar, yytokname(c));
	return c;
}

int
yyparse(void)
{
	struct
	{
		YYSTYPE	yyv;
		int	yys;
	} yys[YYMAXDEPTH], *yyp, *yypt;
	short *yyxi;
	int yyj, yym, yystate, yyn, yyg;
	YYSTYPE save1, save2;
	int save3, save4;
	long yychar;

	save1 = yylval;
	save2 = yyval;
	save3 = yynerrs;
	save4 = yyerrflag;

	yystate = 0;
	yychar = -1;
	yynerrs = 0;
	yyerrflag = 0;
	yyp = &yys[-1];
	goto yystack;

ret0:
	yyn = 0;
	goto ret;

ret1:
	yyn = 1;
	goto ret;

ret:
	yylval = save1;
	yyval = save2;
	yynerrs = save3;
	yyerrflag = save4;
	return yyn;

yystack:
	/* put a state and value onto the stack */
	if(yydebug >= 4)
		printf("char %s in %s", yytokname(yychar), yystatname(yystate));

	yyp++;
	if(yyp >= &yys[YYMAXDEPTH]) {
		yyerror("yacc stack overflow");
		goto ret1;
	}
	yyp->yys = yystate;
	yyp->yyv = yyval;

yynewstate:
	yyn = yypact[yystate];
	if(yyn <= YYFLAG)
		goto yydefault; /* simple state */
	if(yychar < 0)
		yychar = yylex1();
	yyn += yychar;
	if(yyn < 0 || yyn >= YYLAST)
		goto yydefault;
	yyn = yyact[yyn];
	if(yychk[yyn] == yychar) { /* valid shift */
		yychar = -1;
		yyval = yylval;
		yystate = yyn;
		if(yyerrflag > 0)
			yyerrflag--;
		goto yystack;
	}

yydefault:
	/* default state action */
	yyn = yydef[yystate];
	if(yyn == -2) {
		if(yychar < 0)
			yychar = yylex1();

		/* look through exception table */
		for(yyxi=yyexca;; yyxi+=2)
			if(yyxi[0] == -1 && yyxi[1] == yystate)
				break;
		for(yyxi += 2;; yyxi += 2) {
			yyn = yyxi[0];
			if(yyn < 0 || yyn == yychar)
				break;
		}
		yyn = yyxi[1];
		if(yyn < 0)
			goto ret0;
	}
	if(yyn == 0) {
		/* error ... attempt to resume parsing */
		switch(yyerrflag) {
		case 0:   /* brand new error */
			yyerror("syntax error");
			if(yydebug >= 1) {
				printf("%s", yystatname(yystate));
				printf("saw %s\n", yytokname(yychar));
			}
yyerrlab:
			yynerrs++;

		case 1:
		case 2: /* incompletely recovered error ... try again */
			yyerrflag = 3;

			/* find a state where "error" is a legal shift action */
			while(yyp >= yys) {
				yyn = yypact[yyp->yys] + YYERRCODE;
				if(yyn >= 0 && yyn < YYLAST) {
					yystate = yyact[yyn];  /* simulate a shift of "error" */
					if(yychk[yystate] == YYERRCODE)
						goto yystack;
				}

				/* the current yyp has no shift onn "error", pop stack */
				if(yydebug >= 2)
					printf("error recovery pops state %d, uncovers %d\n",
						yyp->yys, (yyp-1)->yys );
				yyp--;
			}
			/* there is no state on the stack with an error shift ... abort */
			goto ret1;

		case 3:  /* no shift yet; clobber input char */
			if(yydebug >= YYEOFCODE)
				printf("error recovery discards %s\n", yytokname(yychar));
			if(yychar == YYEOFCODE)
				goto ret1;
			yychar = -1;
			goto yynewstate;   /* try again in the same state */
		}
	}

	/* reduction by production yyn */
	if(yydebug >= 2)
		printf("reduce %d in:\n\t%s", yyn, yystatname(yystate));

	yypt = yyp;
	yyp -= yyr2[yyn];
	yyval = (yyp+1)->yyv;
	yym = yyn;

	/* consult goto table to find next state */
	yyn = yyr1[yyn];
	yyg = yypgo[yyn];
	yyj = yyg + yyp->yys + 1;

	if(yyj >= YYLAST || yychk[yystate=yyact[yyj]] != -yyn)
		yystate = yyact[yyg];
	switch(yym) {
		
case 3:
{ error("syntax error"); } break;
case 6:
{ codegen = 1; makeiattr(0, 0); } break;
case 7:
{ rightthing(yypt[-2].yyv.o, '}'); yyval.o = yypt[-1].yyv.o; } break;
case 8:
{ y.o=yypt[-0].yyv.o; makevar(yypt[-2].yyv.p,PLACENAME,y); yyval.o = yypt[-0].yyv.o; } break;
case 9:
{ y.o=yypt[-0].yyv.o; makevar(yypt[-3].yyv.p,PLACENAME,y); yyval.o = yypt[-0].yyv.o; } break;
case 10:
{ y.o=yypt[-1].yyv.o; makevar(yypt[-3].yyv.p,PLACENAME,y); yyval.o = yypt[-1].yyv.o; } break;
case 11:
{ y.f = yypt[-1].yyv.f; yyval.o = y.o; yyval.o = makenode(PLACE, 0); } break;
case 12:
{ setdir(yypt[-0].yyv.i); yyval.o = makenode(PLACE, 0); } break;
case 13:
{ printexpr(yypt[-1].yyv.f); yyval.o = makenode(PLACE, 0); } break;
case 14:
{ printpos(yypt[-1].yyv.o); yyval.o = makenode(PLACE, 0); } break;
case 15:
{ printf("%s\n", yypt[-1].yyv.p); free(yypt[-1].yyv.p); yyval.o = makenode(PLACE, 0); } break;
case 16:
{ resetvar(); makeiattr(0, 0); yyval.o = makenode(PLACE, 0); } break;
case 22:
{ makevattr(yypt[-0].yyv.p); } break;
case 23:
{ makevattr(yypt[-0].yyv.p); } break;
case 24:
{ makevattr(yypt[-0].yyv.p); } break;
case 25:
{ yyval.f=y.f=yypt[-0].yyv.f; makevar(yypt[-2].yyv.p,VARNAME,y); checkscale(yypt[-2].yyv.p); } break;
case 26:
{ copy(); } break;
case 29:
{ copyfile(yypt[-0].yyv.p); } break;
case 30:
{ copydef(yypt[-0].yyv.st); } break;
case 31:
{ copyuntil(yypt[-0].yyv.p); } break;
case 32:
{ forloop(yypt[-8].yyv.p, yypt[-6].yyv.f, yypt[-4].yyv.f, yypt[-2].yyv.i, yypt[-1].yyv.f, yypt[-0].yyv.p); } break;
case 33:
{ forloop(yypt[-5].yyv.p, yypt[-3].yyv.f, yypt[-1].yyv.f, '+', 1.0, yypt[-0].yyv.p); } break;
case 34:
{ forloop(yypt[-8].yyv.p, yypt[-6].yyv.f, yypt[-4].yyv.f, yypt[-2].yyv.i, yypt[-1].yyv.f, yypt[-0].yyv.p); } break;
case 35:
{ forloop(yypt[-5].yyv.p, yypt[-3].yyv.f, yypt[-1].yyv.f, '+', 1.0, yypt[-0].yyv.p); } break;
case 36:
{ ifstat(yypt[-2].yyv.f, yypt[-1].yyv.p, yypt[-0].yyv.p); } break;
case 37:
{ ifstat(yypt[-1].yyv.f, yypt[-0].yyv.p, (char *) 0); } break;
case 39:
{ yyval.f = strcmp(yypt[-2].yyv.p,yypt[-0].yyv.p) == 0; free(yypt[-2].yyv.p); free(yypt[-0].yyv.p); } break;
case 40:
{ yyval.f = strcmp(yypt[-2].yyv.p,yypt[-0].yyv.p) != 0; free(yypt[-2].yyv.p); free(yypt[-0].yyv.p); } break;
case 41:
{ y.f = 0; makevar(yypt[-0].yyv.p, VARNAME, y); } break;
case 42:
{ yyval.i = '+'; } break;
case 43:
{ yyval.i = '-'; } break;
case 44:
{ yyval.i = '*'; } break;
case 45:
{ yyval.i = '/'; } break;
case 46:
{ yyval.i = ' '; } break;
case 47:
{ yyval.o = leftthing('{'); } break;
case 48:
{ yyval.o = boxgen(); } break;
case 49:
{ yyval.o = circgen(yypt[-1].yyv.i); } break;
case 50:
{ yyval.o = circgen(yypt[-1].yyv.i); } break;
case 51:
{ yyval.o = arcgen(yypt[-1].yyv.i); } break;
case 52:
{ yyval.o = linegen(yypt[-1].yyv.i); } break;
case 53:
{ yyval.o = linegen(yypt[-1].yyv.i); } break;
case 54:
{ yyval.o = linegen(yypt[-1].yyv.i); } break;
case 55:
{ yyval.o = movegen(); } break;
case 56:
{ yyval.o = textgen(); } break;
case 57:
{ yyval.o = troffgen(yypt[-0].yyv.p); } break;
case 58:
{ yyval.o=rightthing(yypt[-2].yyv.o,']'); } break;
case 59:
{ yyval.o = blockgen(yypt[-4].yyv.o, yypt[-1].yyv.o); } break;
case 60:
{ yyval.o = leftthing('['); } break;
case 63:
{ makefattr(yypt[-1].yyv.i, !DEFAULT, yypt[-0].yyv.f); } break;
case 64:
{ makefattr(yypt[-0].yyv.i, DEFAULT, 0.0); } break;
case 65:
{ makefattr(curdir(), !DEFAULT, yypt[-0].yyv.f); } break;
case 66:
{ makefattr(yypt[-1].yyv.i, !DEFAULT, yypt[-0].yyv.f); } break;
case 67:
{ makefattr(yypt[-0].yyv.i, DEFAULT, 0.0); } break;
case 68:
{ makeoattr(yypt[-1].yyv.i, yypt[-0].yyv.o); } break;
case 69:
{ makeoattr(yypt[-1].yyv.i, yypt[-0].yyv.o); } break;
case 70:
{ makeoattr(yypt[-1].yyv.i, yypt[-0].yyv.o); } break;
case 71:
{ makeoattr(yypt[-1].yyv.i, yypt[-0].yyv.o); } break;
case 72:
{ makeiattr(WITH, yypt[-0].yyv.i); } break;
case 73:
{ makeoattr(PLACE, getblock(getlast(1,BLOCK), yypt[-0].yyv.p)); } break;
case 74:
{ makeoattr(PLACE, getpos(getblock(getlast(1,BLOCK), yypt[-1].yyv.p), yypt[-0].yyv.i)); } break;
case 75:
{ makeoattr(PLACE, yypt[-0].yyv.o); } break;
case 76:
{ makeiattr(SAME, yypt[-0].yyv.i); } break;
case 77:
{ maketattr(yypt[-0].yyv.i, (char *) 0); } break;
case 78:
{ makeiattr(HEAD, yypt[-0].yyv.i); } break;
case 79:
{ makefattr(DOT, !DEFAULT, yypt[-0].yyv.f); } break;
case 80:
{ makefattr(DOT, DEFAULT, 0.0); } break;
case 81:
{ makefattr(DASH, !DEFAULT, yypt[-0].yyv.f); } break;
case 82:
{ makefattr(DASH, DEFAULT, 0.0); } break;
case 83:
{ makefattr(CHOP, !DEFAULT, yypt[-0].yyv.f); } break;
case 84:
{ makefattr(CHOP, DEFAULT, 0.0); } break;
case 85:
{ makeattr(CHOP, PLACENAME, getvar(yypt[-0].yyv.p)); } break;
case 86:
{ makefattr(FILL, !DEFAULT, yypt[-0].yyv.f); } break;
case 87:
{ makefattr(FILL, DEFAULT, 0.0); } break;
case 88:
{ makeiattr(NOEDGE, 0); } break;
case 92:
{ maketattr(CENTER, yypt[-0].yyv.p); } break;
case 93:
{ maketattr(yypt[-0].yyv.i, yypt[-1].yyv.p); } break;
case 94:
{ addtattr(yypt[-0].yyv.i); } break;
case 96:
{ yyval.p = sprintgen(yypt[-1].yyv.p); } break;
case 97:
{ yyval.p = sprintgen(yypt[-3].yyv.p); } break;
case 98:
{ exprsave(yypt[-0].yyv.f); yyval.i = 0; } break;
case 99:
{ exprsave(yypt[-0].yyv.f); } break;
case 101:
{ yyval.o = yypt[-1].yyv.o; } break;
case 102:
{ yyval.o = makepos(yypt[-2].yyv.f, yypt[-0].yyv.f); } break;
case 103:
{ yyval.o = fixpos(yypt[-4].yyv.o, yypt[-2].yyv.f, yypt[-0].yyv.f); } break;
case 104:
{ yyval.o = fixpos(yypt[-4].yyv.o, -yypt[-2].yyv.f, -yypt[-0].yyv.f); } break;
case 105:
{ yyval.o = fixpos(yypt[-6].yyv.o, yypt[-3].yyv.f, yypt[-1].yyv.f); } break;
case 106:
{ yyval.o = fixpos(yypt[-6].yyv.o, -yypt[-3].yyv.f, -yypt[-1].yyv.f); } break;
case 107:
{ yyval.o = addpos(yypt[-2].yyv.o, yypt[-0].yyv.o); } break;
case 108:
{ yyval.o = subpos(yypt[-2].yyv.o, yypt[-0].yyv.o); } break;
case 109:
{ yyval.o = makepos(getcomp(yypt[-3].yyv.o,DOTX), getcomp(yypt[-1].yyv.o,DOTY)); } break;
case 110:
{ yyval.o = makebetween(yypt[-5].yyv.f, yypt[-3].yyv.o, yypt[-1].yyv.o); } break;
case 111:
{ yyval.o = makebetween(yypt[-4].yyv.f, yypt[-2].yyv.o, yypt[-0].yyv.o); } break;
case 112:
{ y = getvar(yypt[-0].yyv.p); yyval.o = y.o; } break;
case 113:
{ y = getvar(yypt[-1].yyv.p); yyval.o = getpos(y.o, yypt[-0].yyv.i); } break;
case 114:
{ y = getvar(yypt[-0].yyv.p); yyval.o = getpos(y.o, yypt[-1].yyv.i); } break;
case 115:
{ yyval.o = gethere(); } break;
case 116:
{ yyval.o = getlast(yypt[-1].yyv.i, yypt[-0].yyv.i); } break;
case 117:
{ yyval.o = getpos(getlast(yypt[-2].yyv.i, yypt[-1].yyv.i), yypt[-0].yyv.i); } break;
case 118:
{ yyval.o = getpos(getlast(yypt[-1].yyv.i, yypt[-0].yyv.i), yypt[-2].yyv.i); } break;
case 119:
{ yyval.o = getfirst(yypt[-1].yyv.i, yypt[-0].yyv.i); } break;
case 120:
{ yyval.o = getpos(getfirst(yypt[-2].yyv.i, yypt[-1].yyv.i), yypt[-0].yyv.i); } break;
case 121:
{ yyval.o = getpos(getfirst(yypt[-1].yyv.i, yypt[-0].yyv.i), yypt[-2].yyv.i); } break;
case 123:
{ yyval.o = getpos(yypt[-1].yyv.o, yypt[-0].yyv.i); } break;
case 124:
{ yyval.o = getpos(yypt[-0].yyv.o, yypt[-1].yyv.i); } break;
case 125:
{ yyval.o = getblock(getlast(yypt[-3].yyv.i,yypt[-2].yyv.i), yypt[-0].yyv.p); } break;
case 126:
{ yyval.o = getblock(getfirst(yypt[-3].yyv.i,yypt[-2].yyv.i), yypt[-0].yyv.p); } break;
case 127:
{ y = getvar(yypt[-2].yyv.p); yyval.o = getblock(y.o, yypt[-0].yyv.p); } break;
case 128:
{ yyval.i = yypt[-1].yyv.i + 1; } break;
case 129:
{ yyval.i = yypt[-1].yyv.i; } break;
case 130:
{ yyval.i = 1; } break;
case 140:
{ yyval.f = getfval(yypt[-0].yyv.p); } break;
case 142:
{ yyval.f = yypt[-2].yyv.f + yypt[-0].yyv.f; } break;
case 143:
{ yyval.f = yypt[-2].yyv.f - yypt[-0].yyv.f; } break;
case 144:
{ yyval.f = yypt[-2].yyv.f * yypt[-0].yyv.f; } break;
case 145:
{ if (yypt[-0].yyv.f == 0.0) {
					error("division by 0"); yypt[-0].yyv.f = 1; }
				  yyval.f = yypt[-2].yyv.f / yypt[-0].yyv.f; } break;
case 146:
{ if ((long)yypt[-0].yyv.f == 0) {
					error("mod division by 0"); yypt[-0].yyv.f = 1; }
				  yyval.f = (long)yypt[-2].yyv.f % (long)yypt[-0].yyv.f; } break;
case 147:
{ yyval.f = -yypt[-0].yyv.f; } break;
case 148:
{ yyval.f = yypt[-0].yyv.f; } break;
case 149:
{ yyval.f = yypt[-1].yyv.f; } break;
case 150:
{ yyval.f = getcomp(yypt[-1].yyv.o, yypt[-0].yyv.i); } break;
case 151:
{ yyval.f = getcomp(yypt[-1].yyv.o, yypt[-0].yyv.i); } break;
case 152:
{ yyval.f = getcomp(yypt[-1].yyv.o, yypt[-0].yyv.i); } break;
case 153:
{ yyval.f = getcomp(yypt[-1].yyv.o, yypt[-0].yyv.i); } break;
case 154:
{ yyval.f = getcomp(yypt[-1].yyv.o, yypt[-0].yyv.i); } break;
case 155:
{ y = getvar(yypt[-2].yyv.p); yyval.f = getblkvar(y.o, yypt[-0].yyv.p); } break;
case 156:
{ yyval.f = getblkvar(getlast(yypt[-3].yyv.i,yypt[-2].yyv.i), yypt[-0].yyv.p); } break;
case 157:
{ yyval.f = getblkvar(getfirst(yypt[-3].yyv.i,yypt[-2].yyv.i), yypt[-0].yyv.p); } break;
case 158:
{ yyval.f = yypt[-2].yyv.f > yypt[-0].yyv.f; } break;
case 159:
{ yyval.f = yypt[-2].yyv.f < yypt[-0].yyv.f; } break;
case 160:
{ yyval.f = yypt[-2].yyv.f <= yypt[-0].yyv.f; } break;
case 161:
{ yyval.f = yypt[-2].yyv.f >= yypt[-0].yyv.f; } break;
case 162:
{ yyval.f = yypt[-2].yyv.f == yypt[-0].yyv.f; } break;
case 163:
{ yyval.f = yypt[-2].yyv.f != yypt[-0].yyv.f; } break;
case 164:
{ yyval.f = yypt[-2].yyv.f && yypt[-0].yyv.f; } break;
case 165:
{ yyval.f = yypt[-2].yyv.f || yypt[-0].yyv.f; } break;
case 166:
{ yyval.f = !(yypt[-0].yyv.f); } break;
case 167:
{ yyval.f = Log10(yypt[-1].yyv.f); } break;
case 168:
{ yyval.f = Exp(yypt[-1].yyv.f * log(10.0)); } break;
case 169:
{ yyval.f = pow(yypt[-2].yyv.f, yypt[-0].yyv.f); } break;
case 170:
{ yyval.f = sin(yypt[-1].yyv.f); } break;
case 171:
{ yyval.f = cos(yypt[-1].yyv.f); } break;
case 172:
{ yyval.f = atan2(yypt[-3].yyv.f, yypt[-1].yyv.f); } break;
case 173:
{ yyval.f = Sqrt(yypt[-1].yyv.f); } break;
case 174:
{ yyval.f = (float)rand() / 32767.0; /* might be 2^31-1 */ } break;
case 175:
{ yyval.f = yypt[-3].yyv.f >= yypt[-1].yyv.f ? yypt[-3].yyv.f : yypt[-1].yyv.f; } break;
case 176:
{ yyval.f = yypt[-3].yyv.f <= yypt[-1].yyv.f ? yypt[-3].yyv.f : yypt[-1].yyv.f; } break;
case 177:
{ yyval.f = (long) yypt[-1].yyv.f; } break;
	}
	goto yystack;  /* stack new state and value */
}
