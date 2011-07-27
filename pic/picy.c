
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "picy.y"

#include <stdio.h>
#include "pic.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

YYSTYPE	y;

extern	void	yyerror(char *);
extern	int	yylex(void);


/* Line 189 of yacc.c  */
#line 87 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BOX = 1,
     LINE = 2,
     ARROW = 3,
     CIRCLE = 4,
     ELLIPSE = 5,
     ARC = 6,
     SPLINE = 7,
     BLOCK = 8,
     TEXT = 9,
     TROFF = 10,
     MOVE = 11,
     BLOCKEND = 12,
     PLACE = 13,
     PRINT = 258,
     RESET = 259,
     THRU = 260,
     UNTIL = 261,
     FOR = 262,
     IF = 263,
     COPY = 264,
     THENSTR = 265,
     ELSESTR = 266,
     DOSTR = 267,
     PLACENAME = 268,
     VARNAME = 269,
     SPRINTF = 270,
     DEFNAME = 271,
     ATTR = 272,
     TEXTATTR = 273,
     LEFT = 274,
     RIGHT = 275,
     UP = 276,
     DOWN = 277,
     FROM = 278,
     TO = 279,
     AT = 280,
     BY = 281,
     WITH = 282,
     HEAD = 283,
     CW = 284,
     CCW = 285,
     THEN = 286,
     HEIGHT = 287,
     WIDTH = 288,
     RADIUS = 289,
     DIAMETER = 290,
     LENGTH = 291,
     SIZE = 292,
     CORNER = 293,
     HERE = 294,
     LAST = 295,
     NTH = 296,
     SAME = 297,
     BETWEEN = 298,
     AND = 299,
     EAST = 300,
     WEST = 301,
     NORTH = 302,
     SOUTH = 303,
     NE = 304,
     NW = 305,
     SE = 306,
     SW = 307,
     START = 308,
     END = 309,
     DOTX = 310,
     DOTY = 311,
     DOTHT = 312,
     DOTWID = 313,
     DOTRAD = 314,
     NUMBER = 315,
     LOG = 316,
     EXP = 317,
     SIN = 318,
     COS = 319,
     ATAN2 = 320,
     SQRT = 321,
     RAND = 322,
     MIN = 323,
     MAX = 324,
     INT = 325,
     DIR = 326,
     DOT = 327,
     DASH = 328,
     CHOP = 329,
     FILL = 330,
     NOEDGE = 331,
     ST = 332,
     OROR = 333,
     ANDAND = 334,
     NEQ = 335,
     EQ = 336,
     GE = 337,
     LE = 338,
     LT = 339,
     GT = 340,
     NOT = 341,
     UMINUS = 342
   };
#endif
/* Tokens.  */
#define BOX 1
#define LINE 2
#define ARROW 3
#define CIRCLE 4
#define ELLIPSE 5
#define ARC 6
#define SPLINE 7
#define BLOCK 8
#define TEXT 9
#define TROFF 10
#define MOVE 11
#define BLOCKEND 12
#define PLACE 13
#define PRINT 258
#define RESET 259
#define THRU 260
#define UNTIL 261
#define FOR 262
#define IF 263
#define COPY 264
#define THENSTR 265
#define ELSESTR 266
#define DOSTR 267
#define PLACENAME 268
#define VARNAME 269
#define SPRINTF 270
#define DEFNAME 271
#define ATTR 272
#define TEXTATTR 273
#define LEFT 274
#define RIGHT 275
#define UP 276
#define DOWN 277
#define FROM 278
#define TO 279
#define AT 280
#define BY 281
#define WITH 282
#define HEAD 283
#define CW 284
#define CCW 285
#define THEN 286
#define HEIGHT 287
#define WIDTH 288
#define RADIUS 289
#define DIAMETER 290
#define LENGTH 291
#define SIZE 292
#define CORNER 293
#define HERE 294
#define LAST 295
#define NTH 296
#define SAME 297
#define BETWEEN 298
#define AND 299
#define EAST 300
#define WEST 301
#define NORTH 302
#define SOUTH 303
#define NE 304
#define NW 305
#define SE 306
#define SW 307
#define START 308
#define END 309
#define DOTX 310
#define DOTY 311
#define DOTHT 312
#define DOTWID 313
#define DOTRAD 314
#define NUMBER 315
#define LOG 316
#define EXP 317
#define SIN 318
#define COS 319
#define ATAN2 320
#define SQRT 321
#define RAND 322
#define MIN 323
#define MAX 324
#define INT 325
#define DIR 326
#define DOT 327
#define DASH 328
#define CHOP 329
#define FILL 330
#define NOEDGE 331
#define ST 332
#define OROR 333
#define ANDAND 334
#define NEQ 335
#define EQ 336
#define GE 337
#define LE 338
#define LT 339
#define GT 340
#define NOT 341
#define UMINUS 342




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 328 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  90
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1634

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNRULES -- Number of states.  */
#define YYNSTATES  345

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   104,     2,     2,
     115,   116,   102,   100,   110,   101,   114,   103,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   109,     2,
       2,    91,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   113,     2,   112,   107,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   111,     2,   108,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    92,    93,    94,    95,    96,    97,    98,
      99,   105,   106
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    16,    20,
      24,    29,    34,    37,    39,    43,    47,    51,    55,    57,
      59,    61,    63,    64,    66,    69,    73,    77,    80,    82,
      85,    87,    90,    93,   104,   112,   123,   131,   136,   140,
     142,   146,   150,   152,   154,   156,   158,   160,   161,   163,
     166,   169,   172,   175,   178,   181,   184,   187,   190,   192,
     193,   199,   201,   204,   205,   208,   210,   212,   215,   217,
     220,   223,   226,   229,   232,   236,   241,   244,   246,   248,
     250,   253,   255,   258,   260,   263,   265,   268,   271,   273,
     275,   277,   279,   282,   284,   287,   290,   292,   297,   304,
     306,   310,   312,   316,   320,   326,   332,   340,   348,   352,
     356,   362,   369,   375,   377,   380,   383,   385,   388,   392,
     396,   399,   403,   407,   409,   412,   415,   420,   425,   429,
     432,   435,   437,   439,   441,   443,   445,   447,   449,   451,
     453,   455,   457,   459,   463,   467,   471,   475,   479,   482,
     485,   489,   492,   495,   498,   501,   504,   508,   513,   518,
     522,   526,   530,   534,   538,   542,   546,   550,   553,   558,
     563,   567,   572,   577,   584,   589,   593,   600,   607
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     118,     0,    -1,   119,    -1,    -1,     1,    -1,   120,    -1,
     119,   120,    -1,   132,    90,    -1,   131,   119,   108,    -1,
      26,   109,   120,    -1,    26,   109,    90,   120,    -1,    26,
     109,   141,    90,    -1,   122,    90,    -1,    84,    -1,    16,
     146,    90,    -1,    16,   141,    90,    -1,    16,   139,    90,
      -1,    17,   121,    90,    -1,   123,    -1,   126,    -1,   127,
      -1,    90,    -1,    -1,    27,    -1,   121,    27,    -1,   121,
     110,    27,    -1,    27,    91,   146,    -1,    22,   124,    -1,
     125,    -1,   124,   125,    -1,   139,    -1,    18,    29,    -1,
      19,   139,    -1,    20,   129,    36,   146,    37,   146,    39,
     130,   146,    25,    -1,    20,   129,    36,   146,    37,   146,
      25,    -1,    20,   129,    91,   146,    37,   146,    39,   130,
     146,    25,    -1,    20,   129,    91,   146,    37,   146,    25,
      -1,    21,   128,    23,    24,    -1,    21,   128,    23,    -1,
     146,    -1,   139,    95,   139,    -1,   139,    94,   139,    -1,
      27,    -1,   100,    -1,   101,    -1,   102,    -1,   103,    -1,
      -1,   111,    -1,     3,   135,    -1,     6,   135,    -1,     7,
     135,    -1,     8,   135,    -1,     4,   135,    -1,     5,   135,
      -1,     9,   135,    -1,    13,   135,    -1,   137,   135,    -1,
      12,    -1,    -1,   134,   119,   112,   133,   135,    -1,   113,
      -1,   135,   136,    -1,    -1,    30,   146,    -1,    30,    -1,
     146,    -1,    84,   146,    -1,    84,    -1,    36,   141,    -1,
      37,   141,    -1,    38,   141,    -1,    39,   141,    -1,    40,
      51,    -1,    40,   114,    26,    -1,    40,   114,    26,    51,
      -1,    40,   141,    -1,    55,    -1,    31,    -1,    41,    -1,
      85,   146,    -1,    85,    -1,    86,   146,    -1,    86,    -1,
      87,   146,    -1,    87,    -1,    87,    26,    -1,    88,   146,
      -1,    88,    -1,    89,    -1,   137,    -1,   138,    -1,   137,
     138,    -1,   139,    -1,   139,    31,    -1,   138,    31,    -1,
      11,    -1,    28,   115,   139,   116,    -1,    28,   115,   139,
     110,   140,   116,    -1,   146,    -1,   140,   110,   146,    -1,
     142,    -1,   115,   141,   116,    -1,   146,   110,   146,    -1,
     141,   100,   146,   110,   146,    -1,   141,   101,   146,   110,
     146,    -1,   141,   100,   115,   146,   110,   146,   116,    -1,
     141,   101,   115,   146,   110,   146,   116,    -1,   141,   100,
     142,    -1,   141,   101,   142,    -1,   115,   142,   110,   142,
     116,    -1,   146,    98,   141,   110,   141,    99,    -1,   146,
      56,   141,    57,   141,    -1,    26,    -1,    26,    51,    -1,
      51,    26,    -1,    52,    -1,   144,   145,    -1,   144,   145,
      51,    -1,    51,   144,   145,    -1,    54,   145,    -1,    54,
     145,    51,    -1,    51,    54,   145,    -1,   143,    -1,   143,
      51,    -1,    51,   143,    -1,   144,    10,   114,    26,    -1,
      54,    10,   114,    26,    -1,    26,   114,    26,    -1,   144,
      53,    -1,    54,    53,    -1,    53,    -1,     3,    -1,     6,
      -1,     7,    -1,     8,    -1,     4,    -1,     5,    -1,     9,
      -1,    10,    -1,    73,    -1,    27,    -1,   122,    -1,   146,
     100,   146,    -1,   146,   101,   146,    -1,   146,   102,   146,
      -1,   146,   103,   146,    -1,   146,   104,   146,    -1,   101,
     146,    -1,   100,   146,    -1,   115,   146,   116,    -1,   142,
      68,    -1,   142,    69,    -1,   142,    70,    -1,   142,    71,
      -1,   142,    72,    -1,    26,   114,    27,    -1,   144,    10,
     114,    27,    -1,    54,    10,   114,    27,    -1,   146,    99,
     146,    -1,   146,    98,   146,    -1,   146,    97,   146,    -1,
     146,    96,   146,    -1,   146,    95,   146,    -1,   146,    94,
     146,    -1,   146,    93,   146,    -1,   146,    92,   146,    -1,
     105,   146,    -1,    74,   115,   146,   116,    -1,    75,   115,
     146,   116,    -1,   146,   107,   146,    -1,    76,   115,   146,
     116,    -1,    77,   115,   146,   116,    -1,    78,   115,   146,
     110,   146,   116,    -1,    79,   115,   146,   116,    -1,    80,
     115,   116,    -1,    82,   115,   146,   110,   146,   116,    -1,
      81,   115,   146,   110,   146,   116,    -1,    83,   115,   146,
     116,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    67,    68,    72,    73,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    94,    96,    97,    98,   102,   106,   109,   110,
     113,   114,   115,   119,   121,   123,   125,   130,   131,   134,
     135,   136,   140,   143,   144,   145,   146,   147,   152,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     166,   171,   175,   176,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   211,   212,   215,   216,   217,   220,   221,   222,   226,
     227,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   262,   263,   264,   268,
     269,   270,   274,   275,   276,   277,   278,   279,   280,   281,
     285,   286,   287,   288,   289,   290,   291,   294,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOX", "LINE", "ARROW", "CIRCLE",
  "ELLIPSE", "ARC", "SPLINE", "BLOCK", "TEXT", "TROFF", "MOVE", "BLOCKEND",
  "PLACE", "PRINT", "RESET", "THRU", "UNTIL", "FOR", "IF", "COPY",
  "THENSTR", "ELSESTR", "DOSTR", "PLACENAME", "VARNAME", "SPRINTF",
  "DEFNAME", "ATTR", "TEXTATTR", "LEFT", "RIGHT", "UP", "DOWN", "FROM",
  "TO", "AT", "BY", "WITH", "HEAD", "CW", "CCW", "THEN", "HEIGHT", "WIDTH",
  "RADIUS", "DIAMETER", "LENGTH", "SIZE", "CORNER", "HERE", "LAST", "NTH",
  "SAME", "BETWEEN", "AND", "EAST", "WEST", "NORTH", "SOUTH", "NE", "NW",
  "SE", "SW", "START", "END", "DOTX", "DOTY", "DOTHT", "DOTWID", "DOTRAD",
  "NUMBER", "LOG", "EXP", "SIN", "COS", "ATAN2", "SQRT", "RAND", "MIN",
  "MAX", "INT", "DIR", "DOT", "DASH", "CHOP", "FILL", "NOEDGE", "ST",
  "'='", "OROR", "ANDAND", "NEQ", "EQ", "GE", "LE", "LT", "GT", "'+'",
  "'-'", "'*'", "'/'", "'%'", "NOT", "UMINUS", "'^'", "'}'", "':'", "','",
  "'{'", "']'", "'['", "'.'", "'('", "')'", "$accept", "top", "piclist",
  "picture", "varlist", "asgn", "copy", "copylist", "copyattr", "for",
  "if", "if_expr", "name", "optop", "leftbrace", "prim", "@1", "lbracket",
  "attrlist", "attr", "textlist", "textattr", "text", "exprlist",
  "position", "place", "blockname", "last", "type", "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    61,   333,   334,   335,   336,   337,   338,   339,   340,
      43,    45,    42,    47,    37,   341,   342,    94,   125,    58,
      44,   123,    93,    91,    46,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   117,   118,   118,   118,   119,   119,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   122,   123,   124,   124,
     125,   125,   125,   126,   126,   126,   126,   127,   127,   128,
     128,   128,   129,   130,   130,   130,   130,   130,   131,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   133,
     132,   134,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   137,   137,   138,   138,   138,   139,   139,   139,   140,
     140,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   143,   143,   143,   144,
     144,   144,   145,   145,   145,   145,   145,   145,   145,   145,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     2,     3,     3,
       4,     4,     2,     1,     3,     3,     3,     3,     1,     1,
       1,     1,     0,     1,     2,     3,     3,     2,     1,     2,
       1,     2,     2,    10,     7,    10,     7,     4,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     0,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     0,
       5,     1,     2,     0,     2,     1,     1,     2,     1,     2,
       2,     2,     2,     2,     3,     4,     2,     1,     1,     1,
       2,     1,     2,     1,     2,     1,     2,     2,     1,     1,
       1,     1,     2,     1,     2,     2,     1,     4,     6,     1,
       3,     1,     3,     3,     5,     5,     7,     7,     3,     3,
       5,     6,     5,     1,     2,     2,     1,     2,     3,     3,
       2,     3,     3,     1,     2,     2,     4,     4,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     2,     2,
       3,     2,     2,     2,     2,     2,     3,     4,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     4,     4,
       3,     4,     4,     6,     4,     3,     6,     6,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,    63,    63,    63,    63,    63,    63,    63,    96,
      58,    63,     0,    22,     0,     0,     0,     0,     0,     0,
      13,    21,    48,    61,     0,     2,     5,     0,    18,    19,
      20,     0,     0,     0,    63,    91,    93,    49,    53,    54,
      50,    51,    52,    55,    56,   113,   141,     0,   116,   131,
       0,   140,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   142,     0,     0,   101,
     123,     0,     0,    23,     0,    42,     0,     0,     0,     0,
       0,    39,     0,     0,    27,    28,    30,     0,     0,     0,
       1,     6,    12,     0,     7,     0,    57,    92,    95,    94,
      65,    78,     0,     0,     0,     0,     0,    79,    77,    68,
      81,    83,    85,    88,    89,    62,    90,    66,   114,     0,
     115,     0,   125,     0,   132,   136,   137,   133,   134,   135,
     138,   139,   130,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   149,   148,   167,     0,   101,     0,
      16,    15,     0,     0,   151,   152,   153,   154,   155,   124,
     139,   129,   117,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    17,     0,     0,     0,     0,    38,     0,     0,     0,
      31,    32,    29,   113,    21,     9,   142,     0,     0,    26,
       0,     8,    59,    64,    69,    70,    71,    72,    73,     0,
      76,    67,    80,    82,    86,    84,    87,   128,   156,     0,
     139,   122,   139,   119,     0,   121,     0,     0,     0,     0,
       0,     0,   175,     0,     0,     0,   102,     0,   150,     0,
     108,     0,     0,   109,     0,     0,   118,     0,   166,   165,
     164,   163,   162,   161,     0,   160,   159,   143,   144,   145,
     146,   147,   170,   103,    25,     0,     0,    37,    41,    40,
     160,    10,    11,     0,    97,    63,    74,     0,     0,   127,
     158,   168,   169,   171,   172,     0,   174,     0,     0,   178,
     113,     0,     0,     0,     0,     0,     0,     0,   126,   157,
       0,     0,     0,     0,     0,    99,    60,    75,     0,     0,
       0,   110,     0,   104,     0,   105,   112,     0,     0,     0,
       0,    98,   173,   177,   176,     0,     0,   111,    34,    47,
      36,    47,   100,   106,   107,    43,    44,    45,    46,     0,
       0,     0,     0,    33,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    74,    66,    28,    84,    85,    29,
      30,    78,    76,   339,    31,    32,   275,    33,    37,   115,
     116,    35,    36,   304,    68,    80,    70,    71,   133,   117
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -84
static const yytype_int16 yypact[] =
{
     332,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   644,   -25,    -3,   655,     7,   -80,   -52,   -72,
     -84,   -84,   -84,   -84,    45,   523,   -84,   -16,   -84,   -84,
     -84,   523,    -4,   523,    10,    24,    47,   564,   564,   564,
     564,   564,   564,   564,   564,   -34,   -52,    95,   -84,   -84,
     228,   -84,    27,    32,    35,    37,    55,    59,    66,    70,
      79,    96,   724,   724,   724,   782,   -84,    -1,     6,   128,
      53,   966,   962,   -84,   -26,   -84,    -6,   724,    93,   -37,
     128,  1484,   110,    10,     7,   -84,   -84,   358,   724,    10,
     -84,   -84,   -84,   471,   -84,   497,   564,    24,   -84,   -84,
     724,   -84,   782,   782,   782,   782,   713,   -84,   -84,   724,
     724,   724,   793,   724,   -84,   -84,    10,  1484,   -84,    41,
      98,  1092,   -84,  1119,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   115,   -84,   188,   724,   724,   724,   724,   724,   724,
     124,   724,   724,   724,   136,   136,   136,    68,   194,   935,
     -84,   -84,   851,   862,   -84,   -84,   -84,   -84,   -84,   -84,
     146,   -84,   220,   782,   -84,   724,   724,   724,   724,   724,
     724,   782,   724,   724,   724,   724,   724,   724,   724,   724,
     -84,   -84,   245,   724,   724,  1089,   250,    10,    10,   724,
     -84,   -84,   -84,   -32,   523,   -84,   -16,    86,   984,  1484,
     -83,   -84,   -84,  1484,    18,    18,    18,    18,    95,   252,
      18,  1484,  1484,  1484,   241,  1484,  1484,   -84,   -84,   253,
     166,   -84,   168,   -84,   118,   -84,  1114,  1139,  1164,  1189,
    1389,  1214,   -84,  1408,  1427,  1239,   -84,    61,   -84,   724,
     128,  1446,   724,   128,  1465,   181,   -84,   -29,  1499,  1513,
    1527,  1527,  1527,  1527,    78,  1011,  1527,    88,    88,   136,
     136,   136,   136,  1484,   -84,   152,   909,   -84,   -84,   -84,
    1527,   -84,   -84,   724,   -84,   -84,   233,   260,   261,   -84,
     -84,   -84,   -84,   -84,   -84,   724,   -84,   724,   724,   -84,
     -31,  1092,   177,  1119,  1039,   724,  1064,   724,   -84,   -84,
     782,   782,   724,   724,   -79,  1484,   564,   -84,  1264,  1289,
    1314,   -84,   724,  1484,   724,  1484,    18,   169,   295,   528,
     724,   -84,   -84,   -84,   -84,  1339,  1364,   -84,   -84,   103,
     -84,   103,  1484,   -84,   -84,   -84,   -84,   -84,   -84,   724,
     724,   121,   886,   -84,   -84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,     1,   -14,   -84,    15,   -84,   -84,   210,   -84,
     -84,   -84,   -84,   -36,   -84,   -84,   -84,   -84,     2,   -84,
      16,   -11,    54,   -84,   -43,    30,   -33,   -35,   -67,   -12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -114
static const yytype_int16 yytable[] =
{
      72,   180,    73,    81,   162,    38,    39,    40,    41,    42,
      43,    91,   123,    44,   122,    27,    34,   118,     9,   118,
     118,     9,   147,    97,    75,    82,    83,   273,   300,    87,
     183,   320,    93,   274,    95,    19,    96,   321,    19,    88,
      27,    34,    69,    89,   197,    90,    27,    34,    27,    34,
     144,   145,   146,   149,   221,    98,   223,   187,   188,   204,
     205,   206,   207,   210,   181,   185,    67,   217,   218,    79,
      86,   152,   153,   195,    92,   198,   199,    87,    99,    91,
     119,    91,   119,   219,   182,   184,    94,   290,   203,   150,
     198,   198,   198,   198,   198,   148,   151,   211,   212,   213,
     215,   216,   196,    34,   159,    97,   152,   153,    27,    34,
      27,    34,    47,    48,    49,   291,   186,    69,   152,   153,
     247,   120,   226,   227,   228,   229,   230,   231,   254,   233,
     234,   235,    69,    69,    69,    69,    69,   191,    86,   190,
     241,   244,   134,   200,   279,   280,   343,   135,    49,   121,
     136,   198,   137,   248,   249,   250,   251,   252,   253,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   152,   153,
     138,   265,   266,   123,   139,   122,   272,   270,   152,   153,
     271,   140,   240,   243,   236,   141,   152,   153,   301,   302,
     175,   176,   177,    69,   142,   178,   154,   155,   156,   157,
     158,    69,   293,   335,   336,   337,   338,   298,   299,    27,
      34,   143,   219,   165,   166,   167,   168,   169,   170,   189,
     172,   173,   174,   175,   176,   177,   162,   294,   178,   224,
     296,   124,   125,   126,   127,   128,   129,   130,   131,   225,
     232,   268,   269,   178,   165,   166,   167,   168,   169,   170,
     189,   172,   173,   174,   175,   176,   177,   316,   317,   178,
     245,   305,   154,   155,   156,   157,   158,   292,   327,   152,
     153,   246,   264,   308,   267,   309,   310,   306,   276,   217,
     277,   132,   278,   313,   307,   315,   279,   298,   198,   198,
     318,   319,   118,   311,   192,   340,     0,     0,     0,     0,
     325,     0,   326,     0,   237,     0,     0,     0,   332,  -113,
    -113,  -113,  -113,  -113,     0,     0,     0,     0,     0,     0,
     328,     0,     0,     0,     0,     0,     0,   341,   342,     0,
      69,    69,    -3,     1,   329,     2,     3,     4,     5,     6,
       7,     8,     0,     9,    10,    11,     0,     0,    12,    13,
       0,     0,    14,    15,    16,   119,     0,     0,    17,    18,
      19,     2,     3,     4,     5,     6,     7,     8,     0,     9,
      10,    11,     0,     0,    12,    13,     0,     0,    14,    15,
      16,     0,     0,     0,   193,    46,    19,   165,   166,   167,
     168,   169,   170,   189,   172,   173,   174,   175,   176,   177,
       0,     0,   178,     0,     0,     0,     0,     0,     0,    47,
      48,    49,    50,     0,     0,     0,    20,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    20,    22,     0,    23,     0,     0,   194,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    63,
       0,     0,     0,    64,     0,     0,     0,     0,     0,    22,
       0,    23,     0,    65,     2,     3,     4,     5,     6,     7,
       8,     0,     9,    10,    11,     0,     0,    12,    13,     0,
       0,    14,    15,    16,     0,     0,     0,    17,    18,    19,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,     0,     0,    12,    13,     0,     0,    14,    15,    16,
       0,     0,     0,    17,    18,    19,     2,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,     0,     0,    12,
      13,     0,     0,    14,    15,    16,     0,     0,     0,    17,
      18,    19,     0,   330,     0,    20,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,   331,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,     0,   201,
       0,    20,    22,     0,    23,     0,     0,    21,     0,     0,
      45,    46,    19,     0,   100,   101,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,    20,    22,   202,
      23,     0,     0,    21,     0,    47,    48,    49,    50,   108,
     165,   166,   167,   168,   169,   170,   189,   172,   173,   174,
     175,   176,   177,     0,    22,   178,    23,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,   109,   110,
     111,   112,   113,   114,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    62,    63,     9,     0,     0,    64,
      45,    46,    19,     0,     0,     0,     0,     0,     0,    77,
       0,    45,    46,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,    48,    49,    50,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    45,
      46,     0,     0,     0,    62,    63,     0,     0,     0,    64,
      45,    46,     0,     0,     0,    62,    63,     0,     0,    65,
      64,     0,     0,     0,   208,    48,    49,    50,     0,     0,
      77,     0,     0,     0,     0,    47,    48,    49,    50,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    45,    46,
       0,     0,     0,    62,    63,     0,     0,     0,    64,   214,
      46,     0,     0,     0,    62,    63,     0,   209,    65,    64,
       0,     0,     0,    47,    48,    49,    50,     0,     0,    77,
       0,     0,     0,     0,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    45,    46,     0,
       0,     0,    62,    63,     0,     0,     0,    64,    45,    46,
       0,     0,     0,    62,    63,     0,     0,    65,    64,     0,
       0,     0,    47,    48,    49,    50,     0,     0,    77,     0,
       0,   344,     0,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,   303,     0,     0,     0,
       0,    62,    63,     0,     0,     0,    64,     0,     0,     0,
       0,     0,    62,    63,     0,     0,   239,    64,     0,   124,
     125,   126,   127,   128,   129,   130,   160,   242,   165,   166,
     167,   168,   169,   170,   189,   172,   173,   174,   175,   176,
     177,   163,     0,   178,     0,     0,     0,     0,     0,     0,
       0,   165,   166,   167,   168,   169,   170,   189,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,   163,   161,
       0,     0,     0,     0,     0,     0,     0,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     163,     0,   178,     0,     0,   179,     0,     0,     0,     0,
       0,   238,   164,     0,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   163,     0,   178,
       0,     0,   179,     0,     0,     0,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,   179,   124,   125,   126,   127,   128,
     129,   130,   220,     0,     0,  -114,  -114,  -114,  -114,  -114,
    -114,   173,   174,   175,   176,   177,     0,     0,   178,     0,
       0,   179,   124,   125,   126,   127,   128,   129,   130,   222,
       0,   165,   166,   167,   168,   169,   170,   189,   172,   173,
     174,   175,   176,   177,     0,   132,   178,     0,     0,   312,
       0,     0,     0,     0,     0,   238,   165,   166,   167,   168,
     169,   170,   189,   172,   173,   174,   175,   176,   177,     0,
       0,   178,   161,     0,   314,     0,     0,     0,     0,     0,
     238,   165,   166,   167,   168,   169,   170,   189,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   238,   165,   166,   167,   168,
     169,   170,   189,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     281,   165,   166,   167,   168,   169,   170,   189,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   282,   165,   166,   167,   168,
     169,   170,   189,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     283,   165,   166,   167,   168,   169,   170,   189,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   284,   165,   166,   167,   168,
     169,   170,   189,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     286,   165,   166,   167,   168,   169,   170,   189,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   289,   165,   166,   167,   168,
     169,   170,   189,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     322,   165,   166,   167,   168,   169,   170,   189,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   323,   165,   166,   167,   168,
     169,   170,   189,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     324,   165,   166,   167,   168,   169,   170,   189,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   333,   165,   166,   167,   168,
     169,   170,   189,   172,   173,   174,   175,   176,   177,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     334,   165,   166,   167,   168,   169,   170,   189,   172,   173,
     174,   175,   176,   177,     0,     0,   178,     0,     0,   285,
     165,   166,   167,   168,   169,   170,   189,   172,   173,   174,
     175,   176,   177,     0,     0,   178,     0,     0,   287,   165,
     166,   167,   168,   169,   170,   189,   172,   173,   174,   175,
     176,   177,     0,     0,   178,     0,     0,   288,   165,   166,
     167,   168,   169,   170,   189,   172,   173,   174,   175,   176,
     177,     0,     0,   178,     0,     0,   295,   165,   166,   167,
     168,   169,   170,   189,   172,   173,   174,   175,   176,   177,
       0,     0,   178,     0,     0,   297,   165,   166,   167,   168,
     169,   170,   189,   172,   173,   174,   175,   176,   177,     0,
       0,   178,   166,   167,   168,   169,   170,   189,   172,   173,
     174,   175,   176,   177,     0,     0,   178,   167,   168,   169,
     170,   189,   172,   173,   174,   175,   176,   177,     0,     0,
     178,  -114,  -114,  -114,  -114,  -114,  -114,   173,   174,   175,
     176,   177,     0,     0,   178
};

static const yytype_int16 yycheck[] =
{
      12,    27,    27,    15,    71,     3,     4,     5,     6,     7,
       8,    25,    47,    11,    47,     0,     0,    51,    11,    51,
      51,    11,    65,    34,    27,    18,    19,   110,    57,   109,
      36,   110,    31,   116,    33,    28,    34,   116,    28,    91,
      25,    25,    12,   115,    87,     0,    31,    31,    33,    33,
      62,    63,    64,    65,   121,    31,   123,    94,    95,   102,
     103,   104,   105,   106,    90,    77,    12,    26,    27,    15,
      16,   100,   101,    87,    90,    87,    88,   109,    31,    93,
     114,    95,   114,   114,   110,    91,    90,    26,   100,    90,
     102,   103,   104,   105,   106,    65,    90,   109,   110,   111,
     112,   113,    87,    87,    51,   116,   100,   101,    93,    93,
      95,    95,    51,    52,    53,    54,    23,    87,   100,   101,
     163,    26,   134,   135,   136,   137,   138,   139,   171,   141,
     142,   143,   102,   103,   104,   105,   106,    83,    84,    29,
     152,   153,   115,    89,    26,    27,    25,   115,    53,    54,
     115,   163,   115,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   100,   101,
     115,   183,   184,   208,   115,   208,    90,   189,   100,   101,
     194,   115,   152,   153,   116,   115,   100,   101,   110,    37,
     102,   103,   104,   163,   115,   107,    68,    69,    70,    71,
      72,   171,   237,   100,   101,   102,   103,    26,    27,   194,
     194,   115,   114,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   293,   239,   107,   114,
     242,     3,     4,     5,     6,     7,     8,     9,    10,    51,
     116,   187,   188,   107,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   300,   301,   107,
     114,   273,    68,    69,    70,    71,    72,   237,    99,   100,
     101,    51,    27,   285,    24,   287,   288,   275,    26,    26,
     114,    53,   114,   295,    51,   297,    26,    26,   300,   301,
     302,   303,    51,   116,    84,   331,    -1,    -1,    -1,    -1,
     312,    -1,   314,    -1,   110,    -1,    -1,    -1,   320,    68,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,   339,   340,    -1,
     300,   301,     0,     1,    39,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    16,    17,
      -1,    -1,    20,    21,    22,   114,    -1,    -1,    26,    27,
      28,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    -1,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   111,    -1,   113,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    -1,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    27,    28,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    28,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    -1,    25,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,   108,
      -1,    84,   111,    -1,   113,    -1,    -1,    90,    -1,    -1,
      26,    27,    28,    -1,    30,    31,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    84,   111,   112,
     113,    -1,    -1,    90,    -1,    51,    52,    53,    54,    55,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,   111,   107,   113,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,    11,    -1,    -1,   105,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    26,
      27,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,   105,
      26,    27,    -1,    -1,    -1,   100,   101,    -1,    -1,   115,
     105,    -1,    -1,    -1,    51,    52,    53,    54,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    26,    27,
      -1,    -1,    -1,   100,   101,    -1,    -1,    -1,   105,    26,
      27,    -1,    -1,    -1,   100,   101,    -1,   114,   115,   105,
      -1,    -1,    -1,    51,    52,    53,    54,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    26,    27,    -1,
      -1,    -1,   100,   101,    -1,    -1,    -1,   105,    26,    27,
      -1,    -1,    -1,   100,   101,    -1,    -1,   115,   105,    -1,
      -1,    -1,    51,    52,    53,    54,    -1,    -1,   115,    -1,
      -1,    25,    -1,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    37,    -1,    -1,    -1,
      -1,   100,   101,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,   100,   101,    -1,    -1,   115,   105,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,   115,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    56,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    56,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      56,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,   116,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    56,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,   110,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,   107,    -1,
      -1,   110,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    53,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    53,    -1,   110,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    -1,    -1,   110,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,   107,    -1,    -1,   110,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,   107,    -1,    -1,   110,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,   107,    -1,    -1,   110,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,   107,    -1,    -1,   110,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
     107,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,   107
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    11,
      12,    13,    16,    17,    20,    21,    22,    26,    27,    28,
      84,    90,   111,   113,   118,   119,   120,   122,   123,   126,
     127,   131,   132,   134,   137,   138,   139,   135,   135,   135,
     135,   135,   135,   135,   135,    26,    27,    51,    52,    53,
      54,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,   100,   101,   105,   115,   122,   139,   141,   142,
     143,   144,   146,    27,   121,    27,   129,   115,   128,   139,
     142,   146,    18,    19,   124,   125,   139,   109,    91,   115,
       0,   120,    90,   119,    90,   119,   135,   138,    31,    31,
      30,    31,    36,    37,    38,    39,    40,    41,    55,    84,
      85,    86,    87,    88,    89,   136,   137,   146,    51,   114,
      26,    54,   143,   144,     3,     4,     5,     6,     7,     8,
       9,    10,    53,   145,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   146,   146,   146,   141,   142,   146,
      90,    90,   100,   101,    68,    69,    70,    71,    72,    51,
      10,    53,   145,    56,    90,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   107,   110,
      27,    90,   110,    36,    91,   146,    23,    94,    95,    98,
      29,   139,   125,    26,    90,   120,   122,   141,   146,   146,
     139,   108,   112,   146,   141,   141,   141,   141,    51,   114,
     141,   146,   146,   146,    26,   146,   146,    26,    27,   114,
      10,   145,    10,   145,   114,    51,   146,   146,   146,   146,
     146,   146,   116,   146,   146,   146,   116,   110,   116,   115,
     142,   146,   115,   142,   146,   114,    51,   141,   146,   146,
     146,   146,   146,   146,   141,   146,   146,   146,   146,   146,
     146,   146,   146,   146,    27,   146,   146,    24,   139,   139,
     146,   120,    90,   110,   116,   133,    26,   114,   114,    26,
      27,   116,   116,   116,   116,   110,   116,   110,   110,   116,
      26,    54,   142,   144,   146,   110,   146,   110,    26,    27,
      57,   110,    37,    37,   140,   146,   135,    51,   146,   146,
     146,   116,   110,   146,   110,   146,   141,   141,   146,   146,
     110,   116,   116,   116,   116,   146,   146,    99,    25,    39,
      25,    39,   146,   116,   116,   100,   101,   102,   103,   130,
     130,   146,   146,    25,    25
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 68 "picy.y"
    { ERROR "syntax error" WARNING; }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 77 "picy.y"
    { codegen = 1; makeiattr(0, 0); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 78 "picy.y"
    { rightthing((yyvsp[(1) - (3)].o), '}'); (yyval.o) = (yyvsp[(2) - (3)].o); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 79 "picy.y"
    { y.o=(yyvsp[(3) - (3)].o); makevar((yyvsp[(1) - (3)].p),PLACENAME,y); (yyval.o) = (yyvsp[(3) - (3)].o); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 80 "picy.y"
    { y.o=(yyvsp[(4) - (4)].o); makevar((yyvsp[(1) - (4)].p),PLACENAME,y); (yyval.o) = (yyvsp[(4) - (4)].o); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 81 "picy.y"
    { y.o=(yyvsp[(3) - (4)].o); makevar((yyvsp[(1) - (4)].p),PLACENAME,y); (yyval.o) = (yyvsp[(3) - (4)].o); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 82 "picy.y"
    { y.f = (yyvsp[(1) - (2)].f); (yyval.o) = y.o; (yyval.o) = makenode(PLACE, 0); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 83 "picy.y"
    { setdir((yyvsp[(1) - (1)].i)); (yyval.o) = makenode(PLACE, 0); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 84 "picy.y"
    { printexpr((yyvsp[(2) - (3)].f)); (yyval.o) = makenode(PLACE, 0); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 85 "picy.y"
    { printpos((yyvsp[(2) - (3)].o)); (yyval.o) = makenode(PLACE, 0); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 86 "picy.y"
    { printf("%s\n", (yyvsp[(2) - (3)].p)); free((yyvsp[(2) - (3)].p)); (yyval.o) = makenode(PLACE, 0); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 87 "picy.y"
    { resetvar(); makeiattr(0, 0); (yyval.o) = makenode(PLACE, 0); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 96 "picy.y"
    { makevattr((yyvsp[(1) - (1)].p)); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 97 "picy.y"
    { makevattr((yyvsp[(2) - (2)].p)); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 98 "picy.y"
    { makevattr((yyvsp[(3) - (3)].p)); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 102 "picy.y"
    { (yyval.f)=y.f=(yyvsp[(3) - (3)].f); makevar((yyvsp[(1) - (3)].p),VARNAME,y); checkscale((yyvsp[(1) - (3)].p)); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 106 "picy.y"
    { copy(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 113 "picy.y"
    { copyfile((yyvsp[(1) - (1)].p)); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 114 "picy.y"
    { copydef((yyvsp[(2) - (2)].st)); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 115 "picy.y"
    { copyuntil((yyvsp[(2) - (2)].p)); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 120 "picy.y"
    { forloop((yyvsp[(2) - (10)].p), (yyvsp[(4) - (10)].f), (yyvsp[(6) - (10)].f), (yyvsp[(8) - (10)].i), (yyvsp[(9) - (10)].f), (yyvsp[(10) - (10)].p)); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 122 "picy.y"
    { forloop((yyvsp[(2) - (7)].p), (yyvsp[(4) - (7)].f), (yyvsp[(6) - (7)].f), '+', 1.0, (yyvsp[(7) - (7)].p)); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 124 "picy.y"
    { forloop((yyvsp[(2) - (10)].p), (yyvsp[(4) - (10)].f), (yyvsp[(6) - (10)].f), (yyvsp[(8) - (10)].i), (yyvsp[(9) - (10)].f), (yyvsp[(10) - (10)].p)); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 126 "picy.y"
    { forloop((yyvsp[(2) - (7)].p), (yyvsp[(4) - (7)].f), (yyvsp[(6) - (7)].f), '+', 1.0, (yyvsp[(7) - (7)].p)); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 130 "picy.y"
    { ifstat((yyvsp[(2) - (4)].f), (yyvsp[(3) - (4)].p), (yyvsp[(4) - (4)].p)); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 131 "picy.y"
    { ifstat((yyvsp[(2) - (3)].f), (yyvsp[(3) - (3)].p), (char *) 0); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 135 "picy.y"
    { (yyval.f) = strcmp((yyvsp[(1) - (3)].p),(yyvsp[(3) - (3)].p)) == 0; free((yyvsp[(1) - (3)].p)); free((yyvsp[(3) - (3)].p)); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 136 "picy.y"
    { (yyval.f) = strcmp((yyvsp[(1) - (3)].p),(yyvsp[(3) - (3)].p)) != 0; free((yyvsp[(1) - (3)].p)); free((yyvsp[(3) - (3)].p)); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 140 "picy.y"
    { y.f = 0; makevar((yyvsp[(1) - (1)].p), VARNAME, y); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 143 "picy.y"
    { (yyval.i) = '+'; }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 144 "picy.y"
    { (yyval.i) = '-'; }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 145 "picy.y"
    { (yyval.i) = '*'; }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 146 "picy.y"
    { (yyval.i) = '/'; }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 147 "picy.y"
    { (yyval.i) = ' '; }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 152 "picy.y"
    { (yyval.o) = leftthing('{'); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 156 "picy.y"
    { (yyval.o) = boxgen(); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 157 "picy.y"
    { (yyval.o) = circgen((yyvsp[(1) - (2)].i)); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 158 "picy.y"
    { (yyval.o) = circgen((yyvsp[(1) - (2)].i)); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 159 "picy.y"
    { (yyval.o) = arcgen((yyvsp[(1) - (2)].i)); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 160 "picy.y"
    { (yyval.o) = linegen((yyvsp[(1) - (2)].i)); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 161 "picy.y"
    { (yyval.o) = linegen((yyvsp[(1) - (2)].i)); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 162 "picy.y"
    { (yyval.o) = linegen((yyvsp[(1) - (2)].i)); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 163 "picy.y"
    { (yyval.o) = movegen(); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 164 "picy.y"
    { (yyval.o) = textgen(); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 165 "picy.y"
    { (yyval.o) = troffgen((yyvsp[(1) - (1)].p)); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 166 "picy.y"
    { (yyval.o)=rightthing((yyvsp[(1) - (3)].o),']'); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 167 "picy.y"
    { (yyval.o) = blockgen((yyvsp[(1) - (5)].o), (yyvsp[(4) - (5)].o)); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 171 "picy.y"
    { (yyval.o) = leftthing('['); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 180 "picy.y"
    { makefattr((yyvsp[(1) - (2)].i), !DEFAULT, (yyvsp[(2) - (2)].f)); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 181 "picy.y"
    { makefattr((yyvsp[(1) - (1)].i), DEFAULT, 0.0); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 182 "picy.y"
    { makefattr(curdir(), !DEFAULT, (yyvsp[(1) - (1)].f)); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 183 "picy.y"
    { makefattr((yyvsp[(1) - (2)].i), !DEFAULT, (yyvsp[(2) - (2)].f)); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 184 "picy.y"
    { makefattr((yyvsp[(1) - (1)].i), DEFAULT, 0.0); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 185 "picy.y"
    { makeoattr((yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].o)); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 186 "picy.y"
    { makeoattr((yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].o)); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 187 "picy.y"
    { makeoattr((yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].o)); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 188 "picy.y"
    { makeoattr((yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].o)); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 189 "picy.y"
    { makeiattr(WITH, (yyvsp[(2) - (2)].i)); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 190 "picy.y"
    { makeoattr(PLACE, getblock(getlast(1,BLOCK), (yyvsp[(3) - (3)].p))); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 192 "picy.y"
    { makeoattr(PLACE, getpos(getblock(getlast(1,BLOCK), (yyvsp[(3) - (4)].p)), (yyvsp[(4) - (4)].i))); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 193 "picy.y"
    { makeoattr(PLACE, (yyvsp[(2) - (2)].o)); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 194 "picy.y"
    { makeiattr(SAME, (yyvsp[(1) - (1)].i)); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 195 "picy.y"
    { maketattr((yyvsp[(1) - (1)].i), (char *) 0); }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 196 "picy.y"
    { makeiattr(HEAD, (yyvsp[(1) - (1)].i)); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 197 "picy.y"
    { makefattr(DOT, !DEFAULT, (yyvsp[(2) - (2)].f)); }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 198 "picy.y"
    { makefattr(DOT, DEFAULT, 0.0); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 199 "picy.y"
    { makefattr(DASH, !DEFAULT, (yyvsp[(2) - (2)].f)); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 200 "picy.y"
    { makefattr(DASH, DEFAULT, 0.0); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 201 "picy.y"
    { makefattr(CHOP, !DEFAULT, (yyvsp[(2) - (2)].f)); }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 202 "picy.y"
    { makefattr(CHOP, DEFAULT, 0.0); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 203 "picy.y"
    { makeattr(CHOP, PLACENAME, getvar((yyvsp[(2) - (2)].p))); }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 204 "picy.y"
    { makefattr(FILL, !DEFAULT, (yyvsp[(2) - (2)].f)); }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 205 "picy.y"
    { makefattr(FILL, DEFAULT, 0.0); }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 206 "picy.y"
    { makeiattr(NOEDGE, 0); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 215 "picy.y"
    { maketattr(CENTER, (yyvsp[(1) - (1)].p)); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 216 "picy.y"
    { maketattr((yyvsp[(2) - (2)].i), (yyvsp[(1) - (2)].p)); }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 217 "picy.y"
    { addtattr((yyvsp[(2) - (2)].i)); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 221 "picy.y"
    { (yyval.p) = sprintgen((yyvsp[(3) - (4)].p)); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 222 "picy.y"
    { (yyval.p) = sprintgen((yyvsp[(3) - (6)].p)); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 226 "picy.y"
    { exprsave((yyvsp[(1) - (1)].f)); (yyval.i) = 0; }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 227 "picy.y"
    { exprsave((yyvsp[(3) - (3)].f)); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 232 "picy.y"
    { (yyval.o) = (yyvsp[(2) - (3)].o); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 233 "picy.y"
    { (yyval.o) = makepos((yyvsp[(1) - (3)].f), (yyvsp[(3) - (3)].f)); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 234 "picy.y"
    { (yyval.o) = fixpos((yyvsp[(1) - (5)].o), (yyvsp[(3) - (5)].f), (yyvsp[(5) - (5)].f)); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 235 "picy.y"
    { (yyval.o) = fixpos((yyvsp[(1) - (5)].o), -(yyvsp[(3) - (5)].f), -(yyvsp[(5) - (5)].f)); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 236 "picy.y"
    { (yyval.o) = fixpos((yyvsp[(1) - (7)].o), (yyvsp[(4) - (7)].f), (yyvsp[(6) - (7)].f)); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 237 "picy.y"
    { (yyval.o) = fixpos((yyvsp[(1) - (7)].o), -(yyvsp[(4) - (7)].f), -(yyvsp[(6) - (7)].f)); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 238 "picy.y"
    { (yyval.o) = addpos((yyvsp[(1) - (3)].o), (yyvsp[(3) - (3)].o)); }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 239 "picy.y"
    { (yyval.o) = subpos((yyvsp[(1) - (3)].o), (yyvsp[(3) - (3)].o)); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 240 "picy.y"
    { (yyval.o) = makepos(getcomp((yyvsp[(2) - (5)].o),DOTX), getcomp((yyvsp[(4) - (5)].o),DOTY)); }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 241 "picy.y"
    { (yyval.o) = makebetween((yyvsp[(1) - (6)].f), (yyvsp[(3) - (6)].o), (yyvsp[(5) - (6)].o)); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 242 "picy.y"
    { (yyval.o) = makebetween((yyvsp[(1) - (5)].f), (yyvsp[(3) - (5)].o), (yyvsp[(5) - (5)].o)); }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 246 "picy.y"
    { y = getvar((yyvsp[(1) - (1)].p)); (yyval.o) = y.o; }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 247 "picy.y"
    { y = getvar((yyvsp[(1) - (2)].p)); (yyval.o) = getpos(y.o, (yyvsp[(2) - (2)].i)); }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 248 "picy.y"
    { y = getvar((yyvsp[(2) - (2)].p)); (yyval.o) = getpos(y.o, (yyvsp[(1) - (2)].i)); }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 249 "picy.y"
    { (yyval.o) = gethere(); }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 250 "picy.y"
    { (yyval.o) = getlast((yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].i)); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 251 "picy.y"
    { (yyval.o) = getpos(getlast((yyvsp[(1) - (3)].i), (yyvsp[(2) - (3)].i)), (yyvsp[(3) - (3)].i)); }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 252 "picy.y"
    { (yyval.o) = getpos(getlast((yyvsp[(2) - (3)].i), (yyvsp[(3) - (3)].i)), (yyvsp[(1) - (3)].i)); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 253 "picy.y"
    { (yyval.o) = getfirst((yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].i)); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 254 "picy.y"
    { (yyval.o) = getpos(getfirst((yyvsp[(1) - (3)].i), (yyvsp[(2) - (3)].i)), (yyvsp[(3) - (3)].i)); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 255 "picy.y"
    { (yyval.o) = getpos(getfirst((yyvsp[(2) - (3)].i), (yyvsp[(3) - (3)].i)), (yyvsp[(1) - (3)].i)); }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 257 "picy.y"
    { (yyval.o) = getpos((yyvsp[(1) - (2)].o), (yyvsp[(2) - (2)].i)); }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 258 "picy.y"
    { (yyval.o) = getpos((yyvsp[(2) - (2)].o), (yyvsp[(1) - (2)].i)); }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 262 "picy.y"
    { (yyval.o) = getblock(getlast((yyvsp[(1) - (4)].i),(yyvsp[(2) - (4)].i)), (yyvsp[(4) - (4)].p)); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 263 "picy.y"
    { (yyval.o) = getblock(getfirst((yyvsp[(1) - (4)].i),(yyvsp[(2) - (4)].i)), (yyvsp[(4) - (4)].p)); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 264 "picy.y"
    { y = getvar((yyvsp[(1) - (3)].p)); (yyval.o) = getblock(y.o, (yyvsp[(3) - (3)].p)); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 268 "picy.y"
    { (yyval.i) = (yyvsp[(1) - (2)].i) + 1; }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 269 "picy.y"
    { (yyval.i) = (yyvsp[(1) - (2)].i); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 270 "picy.y"
    { (yyval.i) = 1; }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 286 "picy.y"
    { (yyval.f) = getfval((yyvsp[(1) - (1)].p)); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 288 "picy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) + (yyvsp[(3) - (3)].f); }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 289 "picy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) - (yyvsp[(3) - (3)].f); }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 290 "picy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) * (yyvsp[(3) - (3)].f); }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 291 "picy.y"
    { if ((yyvsp[(3) - (3)].f) == 0.0) {
					ERROR "division by 0" WARNING; (yyvsp[(3) - (3)].f) = 1; }
				  (yyval.f) = (yyvsp[(1) - (3)].f) / (yyvsp[(3) - (3)].f); }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 294 "picy.y"
    { if ((long)(yyvsp[(3) - (3)].f) == 0) {
					ERROR "mod division by 0" WARNING; (yyvsp[(3) - (3)].f) = 1; }
				  (yyval.f) = (long)(yyvsp[(1) - (3)].f) % (long)(yyvsp[(3) - (3)].f); }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 297 "picy.y"
    { (yyval.f) = -(yyvsp[(2) - (2)].f); }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 298 "picy.y"
    { (yyval.f) = (yyvsp[(2) - (2)].f); }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 299 "picy.y"
    { (yyval.f) = (yyvsp[(2) - (3)].f); }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 300 "picy.y"
    { (yyval.f) = getcomp((yyvsp[(1) - (2)].o), (yyvsp[(2) - (2)].i)); }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 301 "picy.y"
    { (yyval.f) = getcomp((yyvsp[(1) - (2)].o), (yyvsp[(2) - (2)].i)); }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 302 "picy.y"
    { (yyval.f) = getcomp((yyvsp[(1) - (2)].o), (yyvsp[(2) - (2)].i)); }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 303 "picy.y"
    { (yyval.f) = getcomp((yyvsp[(1) - (2)].o), (yyvsp[(2) - (2)].i)); }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 304 "picy.y"
    { (yyval.f) = getcomp((yyvsp[(1) - (2)].o), (yyvsp[(2) - (2)].i)); }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 305 "picy.y"
    { y = getvar((yyvsp[(1) - (3)].p)); (yyval.f) = getblkvar(y.o, (yyvsp[(3) - (3)].p)); }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 306 "picy.y"
    { (yyval.f) = getblkvar(getlast((yyvsp[(1) - (4)].i),(yyvsp[(2) - (4)].i)), (yyvsp[(4) - (4)].p)); }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 307 "picy.y"
    { (yyval.f) = getblkvar(getfirst((yyvsp[(1) - (4)].i),(yyvsp[(2) - (4)].i)), (yyvsp[(4) - (4)].p)); }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 308 "picy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) > (yyvsp[(3) - (3)].f); }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 309 "picy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) < (yyvsp[(3) - (3)].f); }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 310 "picy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) <= (yyvsp[(3) - (3)].f); }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 311 "picy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) >= (yyvsp[(3) - (3)].f); }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 312 "picy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) == (yyvsp[(3) - (3)].f); }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 313 "picy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) != (yyvsp[(3) - (3)].f); }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 314 "picy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) && (yyvsp[(3) - (3)].f); }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 315 "picy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) || (yyvsp[(3) - (3)].f); }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 316 "picy.y"
    { (yyval.f) = !((yyvsp[(2) - (2)].f)); }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 317 "picy.y"
    { (yyval.f) = Log10((yyvsp[(3) - (4)].f)); }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 318 "picy.y"
    { (yyval.f) = Exp((yyvsp[(3) - (4)].f) * log(10.0)); }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 319 "picy.y"
    { (yyval.f) = pow((yyvsp[(1) - (3)].f), (yyvsp[(3) - (3)].f)); }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 320 "picy.y"
    { (yyval.f) = sin((yyvsp[(3) - (4)].f)); }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 321 "picy.y"
    { (yyval.f) = cos((yyvsp[(3) - (4)].f)); }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 322 "picy.y"
    { (yyval.f) = atan2((yyvsp[(3) - (6)].f), (yyvsp[(5) - (6)].f)); }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 323 "picy.y"
    { (yyval.f) = Sqrt((yyvsp[(3) - (4)].f)); }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 324 "picy.y"
    { (yyval.f) = (float)rand() / 32767.0; /* might be 2^31-1 */ }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 325 "picy.y"
    { (yyval.f) = (yyvsp[(3) - (6)].f) >= (yyvsp[(5) - (6)].f) ? (yyvsp[(3) - (6)].f) : (yyvsp[(5) - (6)].f); }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 326 "picy.y"
    { (yyval.f) = (yyvsp[(3) - (6)].f) <= (yyvsp[(5) - (6)].f) ? (yyvsp[(3) - (6)].f) : (yyvsp[(5) - (6)].f); }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 327 "picy.y"
    { (yyval.f) = (long) (yyvsp[(3) - (4)].f); }
    break;



/* Line 1455 of yacc.c  */
#line 3135 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



