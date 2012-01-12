
#line	2	"#Z/tmp/grap/grap.y"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "grap.h"

#define	RAND_MAX 32767	/* if your rand() returns bigger, change this too */

extern int yylex(void);
extern int yyparse(void);

extern	int	yyerrflag;
#ifndef	YYMAXDEPTH
#define	YYMAXDEPTH	150
#endif
YYSTYPE	yylval;
YYSTYPE	yyval;
#define	FRAME	57346
#define	TICKS	57347
#define	GRID	57348
#define	LABEL	57349
#define	COORD	57350
#define	LINE	57351
#define	ARROW	57352
#define	CIRCLE	57353
#define	DRAW	57354
#define	NEW	57355
#define	PLOT	57356
#define	NEXT	57357
#define	PIC	57358
#define	COPY	57359
#define	THRU	57360
#define	UNTIL	57361
#define	FOR	57362
#define	FROM	57363
#define	TO	57364
#define	BY	57365
#define	AT	57366
#define	WITH	57367
#define	IF	57368
#define	GRAPH	57369
#define	THEN	57370
#define	ELSE	57371
#define	DOSTR	57372
#define	DOT	57373
#define	DASH	57374
#define	INVIS	57375
#define	SOLID	57376
#define	TEXT	57377
#define	JUST	57378
#define	SIZE	57379
#define	LOG	57380
#define	EXP	57381
#define	SIN	57382
#define	COS	57383
#define	ATAN2	57384
#define	SQRT	57385
#define	RAND	57386
#define	MAX	57387
#define	MIN	57388
#define	INT	57389
#define	PRINT	57390
#define	SPRINTF	57391
#define	X	57392
#define	Y	57393
#define	SIDE	57394
#define	IN	57395
#define	OUT	57396
#define	OFF	57397
#define	UP	57398
#define	DOWN	57399
#define	ACROSS	57400
#define	HEIGHT	57401
#define	WIDTH	57402
#define	RADIUS	57403
#define	NUMBER	57404
#define	NAME	57405
#define	VARNAME	57406
#define	DEFNAME	57407
#define	STRING	57408
#define	ST	57409
#define	OR	57410
#define	AND	57411
#define	GT	57412
#define	LT	57413
#define	LE	57414
#define	GE	57415
#define	EQ	57416
#define	NE	57417
#define	UMINUS	57418
#define	NOT	57419
#define YYEOFCODE 1
#define YYERRCODE 2
short	yyexca[] =
{-1, 0,
	1, 2,
	-2, 0,
-1, 1,
	1, -1,
	-2, 0,
-1, 4,
	67, 29,
	-2, 4,
-1, 53,
	67, 29,
	-2, 5,
-1, 64,
	71, 197,
	-2, 166,
-1, 142,
	67, 29,
	-2, 6,
-1, 210,
	67, 134,
	-2, 58,
-1, 241,
	74, 0,
	75, 0,
	76, 0,
	77, 0,
	78, 0,
	79, 0,
	-2, 186,
-1, 242,
	74, 0,
	75, 0,
	76, 0,
	77, 0,
	78, 0,
	79, 0,
	-2, 187,
-1, 243,
	74, 0,
	75, 0,
	76, 0,
	77, 0,
	78, 0,
	79, 0,
	-2, 188,
-1, 244,
	74, 0,
	75, 0,
	76, 0,
	77, 0,
	78, 0,
	79, 0,
	-2, 189,
-1, 245,
	74, 0,
	75, 0,
	76, 0,
	77, 0,
	78, 0,
	79, 0,
	-2, 190,
-1, 246,
	74, 0,
	75, 0,
	76, 0,
	77, 0,
	78, 0,
	79, 0,
	-2, 191,
};
#define	YYNPROD	200
#define	YYPRIVATE 57344
#define	YYLAST	1261
short	yyact[] =
{
 263, 204, 226, 138, 137, 319, 201, 164, 262,  41,
 261, 118, 130,  86, 155, 196,  84,  93,  30, 152,
 153, 154,   7, 202, 155, 216,  59,  52, 134,  57,
 219, 220, 116,  58, 214,  60,  44, 257, 126, 249,
 113, 102, 143, 119,  99, 127,  62,  24, 131, 177,
 115,  24,  24, 111,  46,  45, 176,  80, 122, 123,
 227, 228, 229, 230, 165,  79, 166, 167, 175, 218,
 217,  97, 349, 350, 298, 299,  52, 174, 178, 173,
 172,  54, 181, 182, 215,  94, 109, 171, 184, 203,
 186, 187, 188, 170,  50, 169, 168, 268,  24, 148,
  24,  89,  90, 141, 193,  91, 102, 183, 296,  99,
 189,  49, 185, 147,  50, 295, 150, 151, 152, 153,
 154, 208, 190, 155, 206, 113, 205, 194, 209, 128,
  44,  49, 212, 231, 211, 224,  97, 222,  58, 131,
 112, 225, 221, 223, 179, 275, 232, 233,  46,  45,
  94, 235, 236, 237, 238, 239, 240, 241, 242, 243,
 244, 245, 246, 247, 248,  52, 210, 114, 136, 251,
 252, 253, 254, 255, 256, 135, 258, 259, 260,  50,
  47,  48, 104, 105, 107, 106, 264, 112, 272,  24,
 286, 234,  50, 191, 121,  39,  49, 180, 132, 133,
  50, 265, 110, 279, 113, 270, 273, 341, 267,  49,
 281, 269, 342, 318, 284, 290, 291,  49, 292,  56,
 289, 287, 271, 274, 288, 293, 294, 297, 317,  50,
 112, 120,   8,  40,  67,  68,  69,  70,  71,  72,
  73,  74,  75,  76, 268,  50,  49, 282,  89,  90,
   4, 213,  91, 149, 139, 140,  53, 323,  61,  47,
  64, 283,  49, 207,  63,   5, 278, 309,  51, 184,
 124, 309, 313, 310, 129, 315,  66,  65, 276, 277,
 312, 320,  77, 104, 105, 107, 106, 325, 195, 321,
 322,  92, 324,  78, 266,  22, 314, 200,  20, 316,
 331, 326, 142, 329, 110, 332,  18, 333, 334, 198,
 199, 145, 146,  17,  16, 338,  15, 340, 335,  14,
 343, 104, 105, 107, 106,  13, 344,  12, 347, 348,
 346, 117,  11, 225, 345, 336,  10, 354, 355,   2,
 357, 104, 105, 107, 106, 359,   1, 197,  55, 144,
 330, 365,  34, 103, 364,  23, 367, 368, 108, 369,
  21, 125, 192, 371, 205, 372,   0,   0, 225, 373,
   0,   0, 374, 375, 376,   0,   0,   0, 379,   0,
   0,   0,   0,   0,   0,   3, 205,   9,  26,  27,
  28,  29,  32,   0,  33,  42,  43,  31,  35,  19,
  38,   0,   0,  36,   0,   0,   0,   0,   0,  37,
   8,   9,  26,  27,  28,  29,  32,   0,  33,  42,
  43,  31,  35,  19,  38,   0,  88,  36,   0,  83,
   0,  25,  50,  37,   0,   0,   0,   0,   0,   0,
 366,   0,   0,   0,   0,  44,  47,  48,   0,  49,
   6,   0,   0,   0,   0,  25,  50,  87,  81,  82,
  85,  89,  90,  46,  45,  91,  50,   0,   0,  44,
  47,  48,   0,  49,   6,   0,   0,   0,   0,   0,
   0,   0,   0,  49,   0,   0,   0,  46,  45, 163,
 162, 156, 157, 158, 159, 160, 161, 150, 151, 152,
 153, 154,   0,   0, 155,  67,  68,  69,  70,  71,
  72,  73,  74,  75,  76, 156, 157, 158, 159, 160,
 161, 150, 151, 152, 153, 154,   0,   0, 155,  61,
  47,  64, 362, 128,   0,  63,   0,   0,   0, 363,
   0,   0,   0,   0,   0,   0,   0,  66,  65,   0,
   0,   0,   0,  77,   9,  26,  27,  28,  29,  32,
   0,  33,  42,  43,  31,  35,  19,  38,   0,   0,
  36,   0,   0,   0,   0,   0,  37,   0,   0,   0,
   0, 163, 162, 156, 157, 158, 159, 160, 161, 150,
 151, 152, 153, 154,  50,   0, 155,   0,  25,  50,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,  49,  44,  47,  48,   0,  49, 163, 162, 156,
 157, 158, 159, 160, 161, 150, 151, 152, 153, 154,
  46,  45, 155,  67,  68,  69,  70,  71,  72,  73,
  74,  75,  76, 360,   0,   0,   0,   0,   0,   0,
 361,   0,   0,   0,   0,   0,   0,  61,  47,  64,
   0,   0,   0,  63,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0, 339,  66,  65,   0,   0,   0,
   0,  77,   0,   0,   0,   0,   0,   0,   0,   0,
 337,   0, 163, 162, 156, 157, 158, 159, 160, 161,
 150, 151, 152, 153, 154, 250,  58, 155, 163, 162,
 156, 157, 158, 159, 160, 161, 150, 151, 152, 153,
 154,   0,  58, 155, 163, 162, 156, 157, 158, 159,
 160, 161, 150, 151, 152, 153, 154,   0,  58, 155,
 163, 162, 156, 157, 158, 159, 160, 161, 150, 151,
 152, 153, 154,   0,   0, 155,  67,  68,  69,  70,
  71,  72,  73,  74,  75,  76, 378,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  61,  47,  64, 377,   0,   0, 280,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,  66,  65,
   0,   0,   0,   0,  77,   0,   0, 358, 163, 162,
 156, 157, 158, 159, 160, 161, 150, 151, 152, 153,
 154,   0,   0, 155, 356, 163, 162, 156, 157, 158,
 159, 160, 161, 150, 151, 152, 153, 154, 370,   0,
 155, 163, 162, 156, 157, 158, 159, 160, 161, 150,
 151, 152, 153, 154,   0,   0, 155, 163, 162, 156,
 157, 158, 159, 160, 161, 150, 151, 152, 153, 154,
   0,   0, 155,   0, 163, 162, 156, 157, 158, 159,
 160, 161, 150, 151, 152, 153, 154, 353, 328, 155,
 163, 162, 156, 157, 158, 159, 160, 161, 150, 151,
 152, 153, 154, 352, 327, 155, 163, 162, 156, 157,
 158, 159, 160, 161, 150, 151, 152, 153, 154, 351,
   0, 155, 163, 162, 156, 157, 158, 159, 160, 161,
 150, 151, 152, 153, 154,   0, 311, 155, 163, 162,
 156, 157, 158, 159, 160, 161, 150, 151, 152, 153,
 154,   0,   0, 155, 163, 162, 156, 157, 158, 159,
 160, 161, 150, 151, 152, 153, 154,   0,  58, 155,
 163, 162, 156, 157, 158, 159, 160, 161, 150, 151,
 152, 153, 154,   0,   0, 155, 163, 162, 156, 157,
 158, 159, 160, 161, 150, 151, 152, 153, 154, 308,
   0, 155, 163, 162, 156, 157, 158, 159, 160, 161,
 150, 151, 152, 153, 154,   0, 307, 155, 163, 162,
 156, 157, 158, 159, 160, 161, 150, 151, 152, 153,
 154,   0, 306, 155, 163, 162, 156, 157, 158, 159,
 160, 161, 150, 151, 152, 153, 154, 305,   0, 155,
 163, 162, 156, 157, 158, 159, 160, 161, 150, 151,
 152, 153, 154,   0, 304, 155, 163, 162, 156, 157,
 158, 159, 160, 161, 150, 151, 152, 153, 154, 303,
   0, 155, 163, 162, 156, 157, 158, 159, 160, 161,
 150, 151, 152, 153, 154, 302,   0, 155, 163, 162,
 156, 157, 158, 159, 160, 161, 150, 151, 152, 153,
 154, 301, 285, 155, 163, 162, 156, 157, 158, 159,
 160, 161, 150, 151, 152, 153, 154, 300,   0, 155,
 163, 162, 156, 157, 158, 159, 160, 161, 150, 151,
 152, 153, 154,   0,   0, 155,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
 163, 162, 156, 157, 158, 159, 160, 161, 150, 151,
 152, 153, 154, 250,   0, 155, 163, 162, 156, 157,
 158, 159, 160, 161, 150, 151, 152, 153, 154,   0,
   0, 155, 163, 162, 156, 157, 158, 159, 160, 161,
 150, 151, 152, 153, 154, 100,   0, 155, 162, 156,
 157, 158, 159, 160, 161, 150, 151, 152, 153, 154,
   0,  88, 155,   0,  98,   0,   0,   0,   0,   0,
   0, 104, 105, 107, 106,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  95,  96,  87,   0,   0, 101,  89,  90,   0,   0,
  91
};
short	yypact[] =
{
 383,-1000, 205,-1000, 550, 407,-1000,  14,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,  68,-1000, 196, 405,1200, 150,  77,
 143, 196, 310, 170,  77,  77, 117, 467, 180,-1000,
 -43,-1000,-1000,-1000,-1000, 113, 106,-1000,-1000, 218,
  35, 407, -25, 550,-1000, 252,-1000, -26,-1000,1120,
-1000,-1000,-1000, 467,-1000, 595, 595,  28,  27,  25,
  19,  12,  11,   9,   0, -12, -19, 595, 405,-1000,
 142, 595, 595,  77,-1000,-1000,-1000, 595,  77, 595,
 595, 595,1200,-1000,-1000,-1000,-1000,-1000,  77,-1000,
 138,-1000,-1000, 595,-1000,-1000,-1000,-1000, 130,-1000,
-1000, 259,-1000,-1000,  77,  65, 545,  77, 242,-1000,
 595,  77, 151, 227,  13,  -3,1120,-1000, -48, 180,
-1000,-1000,  72, 130, 595,-1000,-1000, 218,-1000,-1000,
 -20,  67, 550,-1000,-1000, 595, 595, 290,-1000,-1000,
 595, 595, 595, 595, 595, 595, 595, 595, 595, 595,
 595, 595, 595, 595, -30,1104, -73, -73, 595, 595,
 595, 595, 595, 595, -32, 595, 595, 595, -73,-1000,
-1000,1120,1120, 595,1120, 595,1120,1120,1120,-1000,
 595,-1000,-1000,1120,  45, 259,-1000,-1000, 167, 124,
 228,-1000, 718,  77, 223,-1000, 239,  77,1088, 129,
-1000, 130, 290,  77, 595, 595, 189,  63,  63,  49,
  42,-1000,-1000,-1000,1120,-1000, 595,-1000,-1000,-1000,
-1000,   5,1120,1120,-1000, -63, -63, -73, -73, -73,
 -73,  36,  36,  36,  36,  36,  36, 441,1135,-1000,
-1000,1058,1042,1026,1010, 994, 978,-1000, 962, 946,
 930, -37,-1000, 545, 914, -37, 192,-1000, 595,-1000,
-1000, 718,  77,-1000, 718,  77, 190, 175,-1000, 898,
 467,-1000,  77,  77, 235,  77, 595,-1000,-1000, 290,
 882, 866,-1000,-1000,-1000,-1000,-1000,1120, 218, 595,
-1000,-1000,-1000,-1000, 595,-1000, 595, 595,-1000, 595,
-1000,  77,-1000, 668, 595, 652, 595, 156, 162, 595,
 636,-1000, 290,  77,-1000,1120,-1000, 595, 595, 218,
   3,1120, 850, 834, 818,-1000, 595, 595, 802, 595,
 785,-1000,-1000,1120, 595,-1000,-1000, 620, 509, 218,
 595,-1000,-1000,-1000, 417,1120, 595,1120, 595, 769,
 -20,-1000, -20,-1000, 218,1120, -20,-1000,1120,1120,
-1000, 595, 595, 595, 753, 736, 545,-1000,-1000,-1000
};
short	yypgo[] =
{
   0,   0, 362, 361, 195,  46,   2,   1, 360,  23,
  16, 233,   6,  57, 358, 355,   5, 353, 352,  43,
  11,  18,   9,   3,   4, 350, 349, 348, 347,   7,
 346, 339, 250, 265,  22, 336, 332, 327, 325, 319,
 316, 314, 313, 306, 298, 295, 294,  13, 293,  65,
  10,   8, 291,  17, 288,  15, 274,  12
};
short	yyr1[] =
{
   0,  30,  30,  30,  31,  31,  31,  33,  32,  32,
  32,  34,  34,  34,  34,  34,  34,  34,  34,  34,
  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,
  15,  15,  15,   4,   4,   4,  37,  46,  46,  46,
  47,  47,  47,  47,  27,  27,  26,  26,  26,  26,
  13,  14,  14,  19,  17,  17,  17,  17,  20,  20,
  35,  48,  48,  49,  49,  49,  49,  49,  49,  49,
  49,  49,  49,  50,  50,  51,  51,  10,  10,   6,
   6,   6,   6,   6,   7,   7,  36,  52,  52,  53,
  53,  53,  53,  53,  53,  53,  53,  53,  40,  40,
  41,  41,  41,  21,  21,  22,  22,  22,  25,  25,
  24,  24,  24,  23,  23,  38,  38,  54,  54,  55,
  55,  55,  55,  55,  55,  55,  28,  28,  28,  28,
  28,  39,  39,  39,  42,  42,  42,  18,  18,  43,
  45,  56,  56,  57,  57,  57,  44,  44,  44,  44,
   8,   8,   3,   3,   3,   3,  29,  29,  12,  12,
  16,   9,   9,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   5,  11,  11,   2,   2
};
short	yyr2[] =
{
   0,   1,   0,   1,   1,   2,   3,   1,   1,   2,
   3,   2,   1,   1,   1,   1,   1,   1,   1,   1,
   1,   1,   1,   1,   1,   1,   1,   2,   2,   0,
   1,   2,   3,   1,   2,   2,   4,   1,   2,   0,
   2,   2,   2,   2,   2,   0,   2,   2,   2,   1,
   1,   1,   0,   2,   1,   1,   1,   1,   1,   0,
   2,   1,   2,   1,   2,   2,   1,   1,   3,   1,
   2,   1,   1,   1,   3,   1,   2,  10,   7,   1,
   1,   1,   1,   0,   1,   0,   2,   1,   2,   1,
   1,   1,   1,   3,   1,   2,   1,   1,   6,   6,
   5,   5,   3,   1,   2,   2,   5,   7,   1,   3,
   1,   2,   0,   1,   3,   3,   2,   1,   2,   1,
   2,   2,   5,   5,   6,   6,   2,   2,   4,   4,
   2,   3,   4,   5,   3,   4,   4,   1,   1,   5,
   2,   1,   2,   1,   2,   2,  10,   7,  10,   7,
   4,   3,   1,   1,   3,   3,   3,   3,   4,   6,
   1,   1,   0,   1,   1,   3,   1,   3,   3,   3,
   3,   3,   2,   2,   3,   4,   4,   3,   4,   4,
   6,   4,   3,   6,   6,   4,   3,   3,   3,   3,
   3,   3,   3,   3,   2,   3,   1,   1,   1,   0
};
short	yychk[] =
{
-1000, -30, -31,   2, -32, -33,  67, -34,  27,   4,
 -35, -36, -37, -38, -39, -40, -41, -42, -43,  16,
 -44,  -8, -45, -15,  -5,  48,   5,   6,   7,   8,
 -21,  14,   9,  11, -18,  15,  20,  26,  17,  -4,
 -11, -22,  12,  13,  62,  81,  80,  63,  64,  66,
  49, -33, -34, -32,  67, -27,  -4, -16,  70,  -1,
 -22,  62,  -5,  68,  64,  81,  80,  38,  39,  40,
  41,  42,  43,  44,  45,  46,  47,  86, -48, -49,
 -13,  53,  54,  24, -10,  55, -47,  52,  21,  56,
  57,  60, -52, -53, -13,  50,  51, -19,  24, -10,
   5,  55, -47, -17,  31,  32,  34,  33, -14, -13,
  52,  -9,  63, -22,  24, -21,  -1,  21, -20, -19,
  61,  24,  -9,  -9, -11,  -3,  -1, -29,  66, -56,
 -57, -22,  18,  19,  71,  62,  62, -24, -23,  36,
  37,  68, -32,  67, -26,  59,  60, -13, -19,  -4,
  80,  81,  82,  83,  84,  87,  74,  75,  76,  77,
  78,  79,  73,  72, -29,  -1,  -1,  -1,  68,  68,
  68,  68,  68,  68,  68,  68,  68,  68,  -1, -49,
  55,  -1,  -1,  -9,  -1,  -9,  -1,  -1,  -1, -53,
  -9,  55,  -2,  -1, -21, -54, -55, -28,  50,  51,
  38, -12,  -9,  24,  -7, -22, -12,  21,  -1, -12,
 -19, -20, -22,  24,  21,  71,  28,  73,  72,  78,
  79, -57,  65, -22,  -1, -23,  -6,  80,  81,  82,
  83,  66,  -1,  -1, -19,  -1,  -1,  -1,  -1,  -1,
  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  69,
  69,  -1,  -1,  -1,  -1,  -1,  -1,  69,  -1,  -1,
  -1, -50, -51,  -1,  -1, -50, -46, -47,  52, -55,
 -12,  -9,  21, -12,  -9,  21,  50,  51,  38,  -1,
  68, -12,  24,  22, -12,  24,  61, -22, -20, -12,
  -1,  -1,  29, -29, -29,  66,  66,  -1,  69,  70,
  69,  69,  69,  69,  70,  69,  70,  70,  69, -16,
 -22,  22, -47,  -1,  -9,  -1,  -9,  38,  38, -16,
  -1, -12, -12,  22, -12,  -1, -20,  22,  22, -24,
 -25,  -1,  -1,  -1,  -1, -51,  -9,  22,  -1,  22,
  -1,  51,  50,  -1, -16, -20, -12,  -1,  -1,  69,
  70,  69,  69,  69,  -1,  -1,  22,  -1,  22,  -1,
  23,  30,  23,  30, -24,  -1,  23,  -7,  -1,  -1,
  69,  -6,  -6,  -6,  -1,  -1,  -1,  30,  30,  -7
};
short	yydef[] =
{
  -2,  -2,   1,   3,  -2,   0,   8,   0,   7,  45,
  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,
  22,  23,  24,  25,  26,   0,   0,   0,  52, 162,
   0,   0,   0,   0, 162, 162,   0,   0,   0,  30,
   0, 103, 137, 138,  33,   0,   0, 196, 197, 112,
   0,   0,   0,  -2,   9,  11,  31,   0, 160,  27,
  28, 163, 164,   0,  -2,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,  60,  61,
  63,  66,  67, 162,  69,  71,  72,  50, 162,   0,
   0,   0,  86,  87,  89,  90,  91,  92, 162,  94,
   0,  96,  97, 199,  54,  55,  56,  57,   0,  51,
  50, 116, 161, 104, 162,   0,  85, 162,   0,  58,
   0, 162,   0,   0,   0,   0, 152, 153,   0, 140,
 141, 143,   0,   0,   0,  34,  35, 105, 110, 113,
  83,   0,  -2,  10,  44,   0,   0,   0,  49,  32,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0, 172, 173,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0, 194,  62,
  70,  64,  65,   0,  42,   0,  40,  41,  43,  88,
   0,  95,  53, 198,  39, 115, 117, 119, 162, 162,
   0, 131,   0, 162,   0,  84,   0, 162,   0, 102,
  -2,   0,  59, 162,   0,   0, 151,   0,   0,   0,
   0, 142, 144, 145, 195, 111,   0,  79,  80,  81,
  82,   0,  46,  47,  48, 167, 168, 169, 170, 171,
 177,  -2,  -2,  -2,  -2,  -2,  -2, 192, 193, 165,
 174,   0,   0,   0,   0,   0,   0, 182,   0,   0,
   0,  68,  73,  75,   0,  93,  36,  37,   0, 118,
 120,   0, 162, 121,   0, 162, 126, 127, 130,   0,
   0, 132, 162, 162,   0, 162,   0, 135, 136,  59,
   0,   0, 150, 154, 155, 156, 157, 114, 112,   0,
 175, 176, 178, 179,   0, 181,   0,   0, 185,   0,
  76, 162,  38,   0,   0,   0,   0,   0,   0,   0,
   0, 133,  59, 162, 100, 101, 139,   0,   0, 106,
   0, 108,   0,   0,   0,  74,   0,   0,   0,   0,
   0, 128, 129, 158,   0,  98,  99,   0,   0, 112,
   0, 180, 183, 184,  85, 122,   0, 123,   0,   0,
  83, 147,  83, 149, 107, 109,  83,  78, 124, 125,
 159,   0,   0,   0,   0,   0,  85, 146, 148,  77
};
short	yytok1[] =
{
   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,  84,   0,   0,
  68,  69,  82,  80,  70,  81,   0,  83,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,  71,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,  87
};
short	yytok2[] =
{
   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,
  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,
  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,
  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,
  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,
  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,
  62,  63,  64,  65,  66,  67,  72,  73,  74,  75,
  76,  77,  78,  79,  85,  86
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
		
case 1:
#line	54	"#Z/tmp/grap/grap.y"
{ if (codegen && !synerr) graph((char *) 0); } break;
case 2:
#line	55	"#Z/tmp/grap/grap.y"
{ codegen = 0; } break;
case 3:
#line	56	"#Z/tmp/grap/grap.y"
{ codegen = 0; ERROR "syntax error" WARNING; } break;
case 7:
#line	65	"#Z/tmp/grap/grap.y"
{ graph(yypt[-0].yyv.p); endstat(); } break;
case 9:
#line	70	"#Z/tmp/grap/grap.y"
{ endstat(); } break;
case 10:
#line	71	"#Z/tmp/grap/grap.y"
{ endstat(); } break;
case 11:
#line	75	"#Z/tmp/grap/grap.y"
{ codegen = 1; } break;
case 12:
#line	76	"#Z/tmp/grap/grap.y"
{ codegen = 1; } break;
case 13:
#line	77	"#Z/tmp/grap/grap.y"
{ codegen = 1; } break;
case 14:
#line	78	"#Z/tmp/grap/grap.y"
{ codegen = 1; } break;
case 16:
#line	80	"#Z/tmp/grap/grap.y"
{ codegen = 1; } break;
case 17:
#line	81	"#Z/tmp/grap/grap.y"
{ codegen = 1; } break;
case 18:
#line	82	"#Z/tmp/grap/grap.y"
{ codegen = 1; } break;
case 20:
#line	84	"#Z/tmp/grap/grap.y"
{ codegen = 1; } break;
case 21:
#line	85	"#Z/tmp/grap/grap.y"
{ codegen = 1; pic(yypt[-0].yyv.p); } break;
case 25:
#line	89	"#Z/tmp/grap/grap.y"
{ codegen = 1; numlist(); } break;
case 27:
#line	91	"#Z/tmp/grap/grap.y"
{ fprintf(stderr, "\t%g\n", yypt[-0].yyv.f); } break;
case 28:
#line	92	"#Z/tmp/grap/grap.y"
{ fprintf(stderr, "\t%s\n", yypt[-0].yyv.ap->sval); freeattr(yypt[-0].yyv.ap); } break;
case 30:
#line	97	"#Z/tmp/grap/grap.y"
{ savenum(0, yypt[-0].yyv.f); yyval.i = 1; } break;
case 31:
#line	98	"#Z/tmp/grap/grap.y"
{ savenum(yypt[-1].yyv.i, yypt[-0].yyv.f); yyval.i = yypt[-1].yyv.i+1; } break;
case 32:
#line	99	"#Z/tmp/grap/grap.y"
{ savenum(yypt[-2].yyv.i, yypt[-0].yyv.f); yyval.i = yypt[-2].yyv.i+1; } break;
case 34:
#line	103	"#Z/tmp/grap/grap.y"
{ yyval.f = -yypt[-0].yyv.f; } break;
case 35:
#line	104	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-0].yyv.f; } break;
case 36:
#line	108	"#Z/tmp/grap/grap.y"
{ label(yypt[-2].yyv.i, yypt[-1].yyv.ap); } break;
case 40:
#line	116	"#Z/tmp/grap/grap.y"
{ labelmove(yypt[-1].yyv.i, yypt[-0].yyv.f); } break;
case 41:
#line	117	"#Z/tmp/grap/grap.y"
{ labelmove(yypt[-1].yyv.i, yypt[-0].yyv.f); } break;
case 42:
#line	118	"#Z/tmp/grap/grap.y"
{ labelmove(yypt[-1].yyv.i, yypt[-0].yyv.f); /* LEFT or RIGHT only */ } break;
case 43:
#line	119	"#Z/tmp/grap/grap.y"
{ labelwid(yypt[-0].yyv.f); } break;
case 45:
#line	124	"#Z/tmp/grap/grap.y"
{ yyval.i = 0; } break;
case 46:
#line	127	"#Z/tmp/grap/grap.y"
{ frameht(yypt[-0].yyv.f); } break;
case 47:
#line	128	"#Z/tmp/grap/grap.y"
{ framewid(yypt[-0].yyv.f); } break;
case 48:
#line	129	"#Z/tmp/grap/grap.y"
{ frameside(yypt[-1].yyv.i, yypt[-0].yyv.ap); } break;
case 49:
#line	130	"#Z/tmp/grap/grap.y"
{ frameside(0, yypt[-0].yyv.ap); } break;
case 52:
#line	137	"#Z/tmp/grap/grap.y"
{ yyval.i = 0; } break;
case 53:
#line	141	"#Z/tmp/grap/grap.y"
{ yyval.ap = makeattr(yypt[-1].yyv.i, yypt[-0].yyv.f, (char *) 0, 0, 0); } break;
case 59:
#line	148	"#Z/tmp/grap/grap.y"
{ yyval.ap = makeattr(0, 0.0, (char *) 0, 0, 0); } break;
case 60:
#line	152	"#Z/tmp/grap/grap.y"
{ ticks(); } break;
case 63:
#line	159	"#Z/tmp/grap/grap.y"
{ tickside(yypt[-0].yyv.i); } break;
case 64:
#line	160	"#Z/tmp/grap/grap.y"
{ tickdir(IN, yypt[-0].yyv.f, 1); } break;
case 65:
#line	161	"#Z/tmp/grap/grap.y"
{ tickdir(OUT, yypt[-0].yyv.f, 1); } break;
case 66:
#line	162	"#Z/tmp/grap/grap.y"
{ tickdir(IN, 0.0, 0); } break;
case 67:
#line	163	"#Z/tmp/grap/grap.y"
{ tickdir(OUT, 0.0, 0); } break;
case 68:
#line	164	"#Z/tmp/grap/grap.y"
{ setlist(); ticklist(yypt[-1].yyv.op, AT); } break;
case 69:
#line	165	"#Z/tmp/grap/grap.y"
{ setlist(); ticklist(yypt[-0].yyv.op, AT); } break;
case 70:
#line	166	"#Z/tmp/grap/grap.y"
{ tickoff(yypt[-1].yyv.i); } break;
case 71:
#line	167	"#Z/tmp/grap/grap.y"
{ tickoff(LEFT|RIGHT|TOP|BOT); } break;
case 75:
#line	175	"#Z/tmp/grap/grap.y"
{ savetick(yypt[-0].yyv.f, (char *) 0); } break;
case 76:
#line	176	"#Z/tmp/grap/grap.y"
{ savetick(yypt[-1].yyv.f, yypt[-0].yyv.ap->sval); } break;
case 77:
#line	180	"#Z/tmp/grap/grap.y"
{ iterator(yypt[-7].yyv.f, yypt[-4].yyv.f, yypt[-2].yyv.i, yypt[-1].yyv.f, yypt[-0].yyv.p); yyval.op = yypt[-8].yyv.op; } break;
case 78:
#line	182	"#Z/tmp/grap/grap.y"
{ iterator(yypt[-4].yyv.f, yypt[-1].yyv.f, '+', 1.0, yypt[-0].yyv.p); yyval.op = yypt[-5].yyv.op; } break;
case 79:
#line	185	"#Z/tmp/grap/grap.y"
{ yyval.i = '+'; } break;
case 80:
#line	186	"#Z/tmp/grap/grap.y"
{ yyval.i = '-'; } break;
case 81:
#line	187	"#Z/tmp/grap/grap.y"
{ yyval.i = '*'; } break;
case 82:
#line	188	"#Z/tmp/grap/grap.y"
{ yyval.i = '/'; } break;
case 83:
#line	189	"#Z/tmp/grap/grap.y"
{ yyval.i = ' '; } break;
case 84:
#line	192	"#Z/tmp/grap/grap.y"
{ yyval.p = yypt[-0].yyv.ap->sval; } break;
case 85:
#line	193	"#Z/tmp/grap/grap.y"
{ yyval.p = (char *) 0; } break;
case 86:
#line	197	"#Z/tmp/grap/grap.y"
{ ticks(); } break;
case 89:
#line	204	"#Z/tmp/grap/grap.y"
{ tickside(yypt[-0].yyv.i); } break;
case 90:
#line	205	"#Z/tmp/grap/grap.y"
{ tickside(BOT); } break;
case 91:
#line	206	"#Z/tmp/grap/grap.y"
{ tickside(LEFT); } break;
case 92:
#line	207	"#Z/tmp/grap/grap.y"
{ griddesc(yypt[-0].yyv.ap); } break;
case 93:
#line	208	"#Z/tmp/grap/grap.y"
{ setlist(); gridlist(yypt[-1].yyv.op); } break;
case 94:
#line	209	"#Z/tmp/grap/grap.y"
{ setlist(); gridlist(yypt[-0].yyv.op); } break;
case 95:
#line	210	"#Z/tmp/grap/grap.y"
{ gridtickoff(); } break;
case 96:
#line	211	"#Z/tmp/grap/grap.y"
{ gridtickoff(); } break;
case 98:
#line	216	"#Z/tmp/grap/grap.y"
{ line(yypt[-5].yyv.i, yypt[-3].yyv.pt, yypt[-1].yyv.pt, yypt[-0].yyv.ap); } break;
case 99:
#line	217	"#Z/tmp/grap/grap.y"
{ line(yypt[-5].yyv.i, yypt[-2].yyv.pt, yypt[-0].yyv.pt, yypt[-4].yyv.ap); } break;
case 100:
#line	220	"#Z/tmp/grap/grap.y"
{ circle(yypt[-2].yyv.f, yypt[-0].yyv.pt); } break;
case 101:
#line	221	"#Z/tmp/grap/grap.y"
{ circle(yypt[-0].yyv.f, yypt[-2].yyv.pt); } break;
case 102:
#line	222	"#Z/tmp/grap/grap.y"
{ circle(0.0, yypt[-0].yyv.pt); } break;
case 104:
#line	227	"#Z/tmp/grap/grap.y"
{ yyval.ap = addattr(yypt[-1].yyv.ap, yypt[-0].yyv.ap); } break;
case 105:
#line	230	"#Z/tmp/grap/grap.y"
{ yyval.ap = makesattr(yypt[-1].yyv.p); } break;
case 106:
#line	232	"#Z/tmp/grap/grap.y"
{ yyval.ap = makesattr(sprntf(yypt[-2].yyv.p, (Attr*) 0)); } break;
case 107:
#line	234	"#Z/tmp/grap/grap.y"
{ yyval.ap = makesattr(sprntf(yypt[-4].yyv.p, yypt[-2].yyv.ap)); } break;
case 108:
#line	237	"#Z/tmp/grap/grap.y"
{ yyval.ap = makefattr(NUMBER, yypt[-0].yyv.f); } break;
case 109:
#line	238	"#Z/tmp/grap/grap.y"
{ yyval.ap = addattr(yypt[-2].yyv.ap, makefattr(NUMBER, yypt[-0].yyv.f)); } break;
case 112:
#line	243	"#Z/tmp/grap/grap.y"
{ yyval.ap = (Attr *) 0; } break;
case 113:
#line	246	"#Z/tmp/grap/grap.y"
{ setjust(yypt[-0].yyv.i); } break;
case 114:
#line	247	"#Z/tmp/grap/grap.y"
{ setsize(yypt[-1].yyv.i, yypt[-0].yyv.f); } break;
case 115:
#line	251	"#Z/tmp/grap/grap.y"
{ coord(yypt[-1].yyv.op); } break;
case 116:
#line	252	"#Z/tmp/grap/grap.y"
{ resetcoord(yypt[-0].yyv.op); } break;
case 119:
#line	259	"#Z/tmp/grap/grap.y"
{ coordlog(yypt[-0].yyv.i); } break;
case 120:
#line	260	"#Z/tmp/grap/grap.y"
{ coord_x(yypt[-0].yyv.pt); } break;
case 121:
#line	261	"#Z/tmp/grap/grap.y"
{ coord_y(yypt[-0].yyv.pt); } break;
case 122:
#line	262	"#Z/tmp/grap/grap.y"
{ coord_x(makepoint(yypt[-3].yyv.op, yypt[-2].yyv.f, yypt[-0].yyv.f)); } break;
case 123:
#line	263	"#Z/tmp/grap/grap.y"
{ coord_y(makepoint(yypt[-3].yyv.op, yypt[-2].yyv.f, yypt[-0].yyv.f)); } break;
case 124:
#line	264	"#Z/tmp/grap/grap.y"
{ coord_x(makepoint(yypt[-3].yyv.op, yypt[-2].yyv.f, yypt[-0].yyv.f)); } break;
case 125:
#line	265	"#Z/tmp/grap/grap.y"
{ coord_y(makepoint(yypt[-3].yyv.op, yypt[-2].yyv.f, yypt[-0].yyv.f)); } break;
case 126:
#line	268	"#Z/tmp/grap/grap.y"
{ yyval.i = XFLAG; } break;
case 127:
#line	269	"#Z/tmp/grap/grap.y"
{ yyval.i = YFLAG; } break;
case 128:
#line	270	"#Z/tmp/grap/grap.y"
{ yyval.i = XFLAG|YFLAG; } break;
case 129:
#line	271	"#Z/tmp/grap/grap.y"
{ yyval.i = XFLAG|YFLAG; } break;
case 130:
#line	272	"#Z/tmp/grap/grap.y"
{ yyval.i = XFLAG|YFLAG; } break;
case 131:
#line	276	"#Z/tmp/grap/grap.y"
{ plot(yypt[-2].yyv.ap, yypt[-0].yyv.pt); } break;
case 132:
#line	277	"#Z/tmp/grap/grap.y"
{ plot(yypt[-2].yyv.ap, yypt[-0].yyv.pt); } break;
case 133:
#line	278	"#Z/tmp/grap/grap.y"
{ plotnum(yypt[-3].yyv.f, yypt[-2].yyv.p, yypt[-0].yyv.pt); } break;
case 134:
#line	282	"#Z/tmp/grap/grap.y"
{ drawdesc(yypt[-2].yyv.i, yypt[-1].yyv.op, yypt[-0].yyv.ap, (char *) 0); } break;
case 135:
#line	283	"#Z/tmp/grap/grap.y"
{ drawdesc(yypt[-3].yyv.i, yypt[-2].yyv.op, yypt[-1].yyv.ap, yypt[-0].yyv.ap->sval); } break;
case 136:
#line	284	"#Z/tmp/grap/grap.y"
{ drawdesc(yypt[-3].yyv.i, yypt[-2].yyv.op, yypt[-0].yyv.ap, yypt[-1].yyv.ap->sval); } break;
case 139:
#line	292	"#Z/tmp/grap/grap.y"
{ next(yypt[-3].yyv.op, yypt[-1].yyv.pt, yypt[-0].yyv.ap); } break;
case 140:
#line	295	"#Z/tmp/grap/grap.y"
{ copy(); } break;
case 143:
#line	302	"#Z/tmp/grap/grap.y"
{ copyfile(yypt[-0].yyv.ap->sval); } break;
case 144:
#line	303	"#Z/tmp/grap/grap.y"
{ copydef(yypt[-0].yyv.op); } break;
case 145:
#line	304	"#Z/tmp/grap/grap.y"
{ copyuntil(yypt[-0].yyv.ap->sval); } break;
case 146:
#line	309	"#Z/tmp/grap/grap.y"
{ forloop(yypt[-8].yyv.op, yypt[-6].yyv.f, yypt[-4].yyv.f, yypt[-2].yyv.i, yypt[-1].yyv.f, yypt[-0].yyv.p); } break;
case 147:
#line	311	"#Z/tmp/grap/grap.y"
{ forloop(yypt[-5].yyv.op, yypt[-3].yyv.f, yypt[-1].yyv.f, '+', 1.0, yypt[-0].yyv.p); } break;
case 148:
#line	313	"#Z/tmp/grap/grap.y"
{ forloop(yypt[-8].yyv.op, yypt[-6].yyv.f, yypt[-4].yyv.f, yypt[-2].yyv.i, yypt[-1].yyv.f, yypt[-0].yyv.p); } break;
case 149:
#line	315	"#Z/tmp/grap/grap.y"
{ forloop(yypt[-5].yyv.op, yypt[-3].yyv.f, yypt[-1].yyv.f, '+', 1.0, yypt[-0].yyv.p); } break;
case 150:
#line	319	"#Z/tmp/grap/grap.y"
{ yyval.p = ifstat(yypt[-2].yyv.f, yypt[-1].yyv.p, yypt[-0].yyv.p); } break;
case 151:
#line	320	"#Z/tmp/grap/grap.y"
{ yyval.p = ifstat(yypt[-1].yyv.f, yypt[-0].yyv.p, (char *) 0); } break;
case 154:
#line	325	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f && yypt[-0].yyv.f; } break;
case 155:
#line	326	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f || yypt[-0].yyv.f; } break;
case 156:
#line	329	"#Z/tmp/grap/grap.y"
{ yyval.f = strcmp(yypt[-2].yyv.p,yypt[-0].yyv.p) == 0; free(yypt[-2].yyv.p); free(yypt[-0].yyv.p); } break;
case 157:
#line	330	"#Z/tmp/grap/grap.y"
{ yyval.f = strcmp(yypt[-2].yyv.p,yypt[-0].yyv.p) != 0; free(yypt[-2].yyv.p); free(yypt[-0].yyv.p); } break;
case 158:
#line	334	"#Z/tmp/grap/grap.y"
{ yyval.pt = makepoint(yypt[-3].yyv.op, yypt[-2].yyv.f, yypt[-0].yyv.f); } break;
case 159:
#line	335	"#Z/tmp/grap/grap.y"
{ yyval.pt = makepoint(yypt[-5].yyv.op, yypt[-3].yyv.f, yypt[-1].yyv.f); } break;
case 160:
#line	338	"#Z/tmp/grap/grap.y"
{ yyval.i = ','; } break;
case 161:
#line	342	"#Z/tmp/grap/grap.y"
{ yyval.op = yypt[-0].yyv.op; } break;
case 162:
#line	343	"#Z/tmp/grap/grap.y"
{ yyval.op = lookup(curr_coord, 1); } break;
case 165:
#line	349	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-1].yyv.f; } break;
case 166:
#line	350	"#Z/tmp/grap/grap.y"
{ yyval.f = getvar(yypt[-0].yyv.op); } break;
case 167:
#line	351	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f + yypt[-0].yyv.f; } break;
case 168:
#line	352	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f - yypt[-0].yyv.f; } break;
case 169:
#line	353	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f * yypt[-0].yyv.f; } break;
case 170:
#line	354	"#Z/tmp/grap/grap.y"
{ if (yypt[-0].yyv.f == 0.0) {
					ERROR "division by 0" WARNING; yypt[-0].yyv.f = 1; }
				  yyval.f = yypt[-2].yyv.f / yypt[-0].yyv.f; } break;
case 171:
#line	357	"#Z/tmp/grap/grap.y"
{ if ((long)yypt[-0].yyv.f == 0) {
					ERROR "mod division by 0" WARNING; yypt[-0].yyv.f = 1; }
				  yyval.f = (long)yypt[-2].yyv.f % (long)yypt[-0].yyv.f; } break;
case 172:
#line	360	"#Z/tmp/grap/grap.y"
{ yyval.f = -yypt[-0].yyv.f; } break;
case 173:
#line	361	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-0].yyv.f; } break;
case 174:
#line	362	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-1].yyv.f; } break;
case 175:
#line	363	"#Z/tmp/grap/grap.y"
{ yyval.f = Log10(yypt[-1].yyv.f); } break;
case 176:
#line	364	"#Z/tmp/grap/grap.y"
{ yyval.f = Exp(yypt[-1].yyv.f * log(10.0)); } break;
case 177:
#line	365	"#Z/tmp/grap/grap.y"
{ yyval.f = pow(yypt[-2].yyv.f, yypt[-0].yyv.f); } break;
case 178:
#line	366	"#Z/tmp/grap/grap.y"
{ yyval.f = sin(yypt[-1].yyv.f); } break;
case 179:
#line	367	"#Z/tmp/grap/grap.y"
{ yyval.f = cos(yypt[-1].yyv.f); } break;
case 180:
#line	368	"#Z/tmp/grap/grap.y"
{ yyval.f = atan2(yypt[-3].yyv.f, yypt[-1].yyv.f); } break;
case 181:
#line	369	"#Z/tmp/grap/grap.y"
{ yyval.f = Sqrt(yypt[-1].yyv.f); } break;
case 182:
#line	370	"#Z/tmp/grap/grap.y"
{ yyval.f = (double)rand() / (double)RAND_MAX; } break;
case 183:
#line	371	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-3].yyv.f >= yypt[-1].yyv.f ? yypt[-3].yyv.f : yypt[-1].yyv.f; } break;
case 184:
#line	372	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-3].yyv.f <= yypt[-1].yyv.f ? yypt[-3].yyv.f : yypt[-1].yyv.f; } break;
case 185:
#line	373	"#Z/tmp/grap/grap.y"
{ yyval.f = (long) yypt[-1].yyv.f; } break;
case 186:
#line	374	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f > yypt[-0].yyv.f; } break;
case 187:
#line	375	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f < yypt[-0].yyv.f; } break;
case 188:
#line	376	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f <= yypt[-0].yyv.f; } break;
case 189:
#line	377	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f >= yypt[-0].yyv.f; } break;
case 190:
#line	378	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f == yypt[-0].yyv.f; } break;
case 191:
#line	379	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f != yypt[-0].yyv.f; } break;
case 192:
#line	380	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f && yypt[-0].yyv.f; } break;
case 193:
#line	381	"#Z/tmp/grap/grap.y"
{ yyval.f = yypt[-2].yyv.f || yypt[-0].yyv.f; } break;
case 194:
#line	382	"#Z/tmp/grap/grap.y"
{ yyval.f = !(yypt[-0].yyv.f); } break;
case 195:
#line	385	"#Z/tmp/grap/grap.y"
{ yyval.f = setvar(yypt[-2].yyv.op, yypt[-0].yyv.f); } break;
case 199:
#line	395	"#Z/tmp/grap/grap.y"
{ yyval.f = 0.0; } break;
	}
	goto yystack;  /* stack new state and value */
}
