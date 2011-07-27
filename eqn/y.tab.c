
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
#line 16 "eqn.y"

#include "e.h"

int	yylex(void);


/* Line 189 of yacc.c  */
#line 80 "y.tab.c"

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
     CONTIG = 258,
     QTEXT = 259,
     SPACE = 260,
     THIN = 261,
     TAB = 262,
     MATRIX = 263,
     LCOL = 264,
     CCOL = 265,
     RCOL = 266,
     COL = 267,
     ABOVE = 268,
     MARK = 269,
     LINEUP = 270,
     SUM = 271,
     INT = 272,
     PROD = 273,
     UNION = 274,
     INTER = 275,
     DEFINE = 276,
     TDEFINE = 277,
     NDEFINE = 278,
     DELIM = 279,
     GSIZE = 280,
     GFONT = 281,
     INCLUDE = 282,
     IFDEF = 283,
     DOTEQ = 284,
     DOTEN = 285,
     TO = 286,
     FROM = 287,
     SQRT = 288,
     OVER = 289,
     SUB = 290,
     SUP = 291,
     FAT = 292,
     BOLD = 293,
     ITALIC = 294,
     ROMAN = 295,
     FONT = 296,
     SIZE = 297,
     FWD = 298,
     BACK = 299,
     DOWN = 300,
     UP = 301,
     RIGHT = 302,
     LEFT = 303,
     UTILDE = 304,
     DYAD = 305,
     VEC = 306,
     UNDER = 307,
     HIGHBAR = 308,
     LOWBAR = 309,
     BAR = 310,
     TILDE = 311,
     HAT = 312,
     DOTDOT = 313,
     DOT = 314
   };
#endif
/* Tokens.  */
#define CONTIG 258
#define QTEXT 259
#define SPACE 260
#define THIN 261
#define TAB 262
#define MATRIX 263
#define LCOL 264
#define CCOL 265
#define RCOL 266
#define COL 267
#define ABOVE 268
#define MARK 269
#define LINEUP 270
#define SUM 271
#define INT 272
#define PROD 273
#define UNION 274
#define INTER 275
#define DEFINE 276
#define TDEFINE 277
#define NDEFINE 278
#define DELIM 279
#define GSIZE 280
#define GFONT 281
#define INCLUDE 282
#define IFDEF 283
#define DOTEQ 284
#define DOTEN 285
#define TO 286
#define FROM 287
#define SQRT 288
#define OVER 289
#define SUB 290
#define SUP 291
#define FAT 292
#define BOLD 293
#define ITALIC 294
#define ROMAN 295
#define FONT 296
#define SIZE 297
#define FWD 298
#define BACK 299
#define DOWN 300
#define UP 301
#define RIGHT 302
#define LEFT 303
#define UTILDE 304
#define DYAD 305
#define VEC 306
#define UNDER 307
#define HIGHBAR 308
#define LOWBAR 309
#define BAR 310
#define TILDE 311
#define HAT 312
#define DOTDOT 313
#define DOT 314




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 240 "y.tab.c"

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
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   478

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNRULES -- Number of states.  */
#define YYNSTATES  132

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,    60,     2,    61,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     8,    10,    13,    16,    18,
      21,    24,    25,    28,    29,    33,    35,    37,    39,    41,
      43,    45,    47,    49,    51,    55,    58,    61,    64,    67,
      70,    71,    77,    78,    83,    84,    90,    91,    96,    98,
      99,   105,   106,   111,   115,   118,   121,   124,   127,   130,
     133,   135,   136,   142,   144,   147,   150,   153,   156,   158,
     160,   162,   164,   166,   168,   170,   172,   174,   176,   178,
     181,   184,   187,   190,   192,   195,   200,   201,   208,   210,
     212,   214,   216,   218,   222,   225,   227,   229,   231,   234,
     236
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    64,    -1,     1,    -1,    -1,    68,    -1,
      64,    68,    -1,    64,    65,    -1,    15,    -1,    15,    68,
      -1,    36,    68,    -1,    -1,    31,    68,    -1,    -1,    60,
      64,    61,    -1,     4,    -1,     3,    -1,     5,    -1,     6,
      -1,     7,    -1,    16,    -1,    18,    -1,    19,    -1,    20,
      -1,    68,    34,    68,    -1,    14,    68,    -1,    89,    68,
      -1,    90,    68,    -1,    37,    68,    -1,    33,    68,    -1,
      -1,    68,    35,    69,    68,    66,    -1,    -1,    68,    36,
      70,    68,    -1,    -1,    76,    35,    71,    68,    66,    -1,
      -1,    76,    36,    72,    68,    -1,    76,    -1,    -1,    68,
      32,    73,    68,    67,    -1,    -1,    68,    31,    74,    68,
      -1,    82,    64,    83,    -1,    82,    64,    -1,    68,    81,
      -1,    77,    68,    -1,    78,    68,    -1,    79,    68,    -1,
      80,    68,    -1,    85,    -1,    -1,     8,    75,    60,    84,
      61,    -1,    17,    -1,    43,    91,    -1,    46,    91,    -1,
      44,    91,    -1,    45,    91,    -1,    57,    -1,    51,    -1,
      50,    -1,    55,    -1,    54,    -1,    53,    -1,    52,    -1,
      59,    -1,    56,    -1,    49,    -1,    58,    -1,    48,    91,
      -1,    48,    60,    -1,    47,    91,    -1,    47,    61,    -1,
      85,    -1,    84,    85,    -1,    87,    60,    88,    61,    -1,
      -1,    87,    91,    86,    60,    88,    61,    -1,     9,    -1,
      10,    -1,    11,    -1,    12,    -1,    64,    -1,    88,    13,
      64,    -1,    42,    91,    -1,    40,    -1,    39,    -1,    38,
      -1,    41,    91,    -1,     3,    -1,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    24,    24,    25,    26,    29,    30,    31,    32,    35,
      38,    39,    42,    43,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    67,
      67,    68,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    77,    80,    83,    84,    85,    86,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   101,
     102,   105,   106,   109,   110,   113,   114,   114,   117,   118,
     119,   120,   123,   124,   127,   130,   131,   132,   133,   136,
     137
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONTIG", "QTEXT", "SPACE", "THIN",
  "TAB", "MATRIX", "LCOL", "CCOL", "RCOL", "COL", "ABOVE", "MARK",
  "LINEUP", "SUM", "INT", "PROD", "UNION", "INTER", "DEFINE", "TDEFINE",
  "NDEFINE", "DELIM", "GSIZE", "GFONT", "INCLUDE", "IFDEF", "DOTEQ",
  "DOTEN", "TO", "FROM", "SQRT", "OVER", "SUB", "SUP", "FAT", "BOLD",
  "ITALIC", "ROMAN", "FONT", "SIZE", "FWD", "BACK", "DOWN", "UP", "RIGHT",
  "LEFT", "UTILDE", "DYAD", "VEC", "UNDER", "HIGHBAR", "LOWBAR", "BAR",
  "TILDE", "HAT", "DOTDOT", "DOT", "'{'", "'}'", "$accept", "stuff", "eqn",
  "lineupbox", "sbox", "tbox", "box", "$@1", "$@2", "$@3", "$@4", "$@5",
  "$@6", "@7", "int", "fwd", "up", "back", "down", "diacrit", "left",
  "right", "collist", "column", "@8", "col", "list", "size", "font",
  "text", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    64,    64,    65,
      66,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      69,    68,    70,    68,    71,    68,    72,    68,    68,    73,
      68,    74,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    75,    68,    76,    77,    78,    79,    80,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      82,    83,    83,    84,    84,    85,    86,    85,    87,    87,
      87,    87,    88,    88,    89,    90,    90,    90,    90,    91,
      91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     1,     2,     2,     1,     2,
       2,     0,     2,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     2,     2,     2,
       0,     5,     0,     4,     0,     5,     0,     4,     1,     0,
       5,     0,     4,     3,     2,     2,     2,     2,     2,     2,
       1,     0,     5,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     2,     4,     0,     6,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     1,     2,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,    16,    15,    17,    18,    19,    51,    78,    79,
      80,    81,     0,     8,    20,    53,    21,    22,    23,     0,
       0,    87,    86,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     5,    38,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,    25,    29,    28,    89,
      90,    88,    84,    54,    56,    57,    55,    70,    69,     0,
       1,     0,     7,     6,    41,    39,     0,    30,    32,    67,
      60,    59,    64,    63,    62,    61,    66,    58,    68,    65,
      45,    34,    36,    46,    47,    48,    49,    44,     0,    76,
      26,    27,     0,    14,     9,     0,     0,    24,     0,     0,
       0,     0,     0,    43,    82,     0,     0,     0,    73,    42,
      13,    11,    33,    11,    37,    72,    71,     0,    75,     0,
      52,    74,     0,    40,     0,    31,    35,    83,     0,    12,
      10,    77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    32,   104,    62,   125,   123,    34,    98,    99,   100,
     101,    96,    95,    45,    35,    36,    37,    38,    39,    80,
      40,   103,   107,    41,   106,    42,   105,    43,    44,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -74
static const yytype_int16 yypact[] =
{
     118,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   365,   -74,   -74,   -74,   -74,   -74,   -74,   365,
     365,   -74,   -74,   -74,    17,    17,    17,    17,    17,    17,
       9,   271,    18,   318,    46,    -6,   365,   365,   365,   365,
     271,   -74,    11,   365,   365,   -36,    46,   394,    90,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   165,
     -74,   365,   -74,    46,   -74,   -74,   365,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,    90,    90,    90,    90,   224,   271,   -74,
      90,    90,    32,   -74,    46,   365,   365,   394,   365,   365,
     365,   365,     7,   -74,   318,     3,   -21,    25,   -74,    46,
     383,   419,   394,   419,   394,   -74,   -74,   271,   -74,   271,
     -74,   -74,   365,   -74,   365,   -74,   -74,   318,     4,    46,
     394,   -74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,     0,   -74,   -68,   -74,   -11,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -69,   -74,   -74,   -73,   -74,   -74,   -23
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -5
static const yytype_int16 yytable[] =
{
      33,    46,    52,    53,    54,    55,    56,    58,    47,    48,
      49,    50,    49,    50,    49,    50,   117,   117,    60,    89,
      49,    50,    63,   108,    92,    83,    84,    85,    86,    81,
      82,    59,    90,    91,     8,     9,    10,    11,   121,   119,
      87,     8,     9,    10,    11,   126,   128,     0,    63,     0,
      94,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   118,   131,     0,     0,   115,    57,
       0,    88,     0,     0,     0,     0,    63,    64,    65,   116,
      66,    67,    68,     0,   109,   110,   120,   111,   112,   113,
     114,     0,     0,    63,     0,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,   129,     0,   130,     0,     0,    63,   127,    -4,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    19,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    31,    12,
      61,    14,    15,    16,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    93,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,    12,    61,
      14,    15,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,   102,    30,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    31,    12,    13,    14,    15,    16,
      17,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,    30,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    31,    12,    61,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    31,    12,
       0,    14,    15,    16,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,    30,   122,    65,     0,    66,    67,    68,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    67,
      68,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    67,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79
};

static const yytype_int8 yycheck[] =
{
       0,    12,    25,    26,    27,    28,    29,    30,    19,    20,
       3,     4,     3,     4,     3,     4,    13,    13,     0,    42,
       3,     4,    33,    92,    60,    36,    37,    38,    39,    35,
      36,    31,    43,    44,     9,    10,    11,    12,   107,    60,
      40,     9,    10,    11,    12,   113,   119,    -1,    59,    -1,
      61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    61,    -1,    -1,    61,    60,
      -1,    60,    -1,    -1,    -1,    -1,    87,    31,    32,   102,
      34,    35,    36,    -1,    95,    96,    61,    98,    99,   100,
     101,    -1,    -1,   104,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,   122,    -1,   124,    -1,    -1,   127,   117,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    33,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    60,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    60,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    60,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    60,    14,
      -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    31,    32,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    35,
      36,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    14,    15,    16,    17,    18,    19,    20,    33,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      48,    60,    63,    64,    68,    76,    77,    78,    79,    80,
      82,    85,    87,    89,    90,    75,    68,    68,    68,     3,
       4,    91,    91,    91,    91,    91,    91,    60,    91,    64,
       0,    15,    65,    68,    31,    32,    34,    35,    36,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      81,    35,    36,    68,    68,    68,    68,    64,    60,    91,
      68,    68,    60,    61,    68,    74,    73,    68,    69,    70,
      71,    72,    47,    83,    64,    88,    86,    84,    85,    68,
      68,    68,    68,    68,    68,    61,    91,    13,    61,    60,
      61,    85,    31,    67,    36,    66,    66,    64,    88,    68,
      68,    61
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
        case 2:

/* Line 1455 of yacc.c  */
#line 24 "eqn.y"
    { putout((yyvsp[(1) - (1)])); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 25 "eqn.y"
    { ERROR "syntax error" WARNING; }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 26 "eqn.y"
    { eqnreg = 0; }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 30 "eqn.y"
    { eqnbox((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), 0); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 31 "eqn.y"
    { eqnbox((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), 1); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 32 "eqn.y"
    { lineup(0); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 35 "eqn.y"
    { (yyval) = (yyvsp[(2) - (2)]); lineup(1); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 38 "eqn.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 39 "eqn.y"
    { (yyval) = 0; }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 42 "eqn.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 43 "eqn.y"
    { (yyval) = 0; }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 46 "eqn.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 47 "eqn.y"
    { text(QTEXT, (char *) (yyvsp[(1) - (1)])); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 48 "eqn.y"
    { text(CONTIG, (char *) (yyvsp[(1) - (1)])); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 49 "eqn.y"
    { text(SPACE, (char *) 0); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 50 "eqn.y"
    { text(THIN, (char *) 0); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 51 "eqn.y"
    { text(TAB, (char *) 0); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 52 "eqn.y"
    { funny(SUM); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 53 "eqn.y"
    { funny(PROD); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 54 "eqn.y"
    { funny(UNION); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 55 "eqn.y"
    { funny(INTER); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 56 "eqn.y"
    { boverb((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 57 "eqn.y"
    { mark((yyvsp[(2) - (2)])); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 58 "eqn.y"
    { size((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 59 "eqn.y"
    { font((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 60 "eqn.y"
    { fatbox((yyvsp[(2) - (2)])); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 61 "eqn.y"
    { sqrt((yyvsp[(2) - (2)])); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 62 "eqn.y"
    {ps -= deltaps;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 62 "eqn.y"
    { subsup((yyvsp[(1) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)])); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 63 "eqn.y"
    {ps -= deltaps;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 63 "eqn.y"
    { subsup((yyvsp[(1) - (4)]), 0, (yyvsp[(4) - (4)])); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 64 "eqn.y"
    {ps -= deltaps;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 64 "eqn.y"
    { integral((yyvsp[(1) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)])); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 65 "eqn.y"
    {ps -= deltaps;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 65 "eqn.y"
    { integral((yyvsp[(1) - (4)]), 0, (yyvsp[(4) - (4)])); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 66 "eqn.y"
    { integral((yyvsp[(1) - (1)]), 0, 0); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 67 "eqn.y"
    {ps -= deltaps;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 67 "eqn.y"
    { fromto((yyvsp[(1) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)])); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 68 "eqn.y"
    {ps -= deltaps;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 68 "eqn.y"
    { fromto((yyvsp[(1) - (4)]), 0, (yyvsp[(4) - (4)])); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 69 "eqn.y"
    { paren((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 70 "eqn.y"
    { paren((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), 0); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 71 "eqn.y"
    { diacrit((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 72 "eqn.y"
    { move(FWD, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 73 "eqn.y"
    { move(UP, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 74 "eqn.y"
    { move(BACK, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 75 "eqn.y"
    { move(DOWN, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 76 "eqn.y"
    { pile((yyvsp[(1) - (1)])); ct = (yyvsp[(1) - (1)]); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 77 "eqn.y"
    {(yyval)=ct;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 77 "eqn.y"
    { matrix((yyvsp[(2) - (5)])); ct = (yyvsp[(2) - (5)]); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 80 "eqn.y"
    { setintegral(); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 83 "eqn.y"
    { (yyval) = atoi((char *) (yyvsp[(1) - (2)])); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 84 "eqn.y"
    { (yyval) = atoi((char *) (yyvsp[(1) - (2)])); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 85 "eqn.y"
    { (yyval) = atoi((char *) (yyvsp[(1) - (2)])); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 86 "eqn.y"
    { (yyval) = atoi((char *) (yyvsp[(1) - (2)])); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 88 "eqn.y"
    { (yyval) = HAT; }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 89 "eqn.y"
    { (yyval) = VEC; }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 90 "eqn.y"
    { (yyval) = DYAD; }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 91 "eqn.y"
    { (yyval) = BAR; }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 92 "eqn.y"
    { (yyval) = LOWBAR; }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 93 "eqn.y"
    { (yyval) = HIGHBAR; }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 94 "eqn.y"
    { (yyval) = UNDER; }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 95 "eqn.y"
    { (yyval) = DOT; }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 96 "eqn.y"
    { (yyval) = TILDE; }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 97 "eqn.y"
    { (yyval) = UTILDE; }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 98 "eqn.y"
    { (yyval) = DOTDOT; }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 101 "eqn.y"
    { (yyval) = ((char *)(yyvsp[(2) - (2)]))[0]; }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 102 "eqn.y"
    { (yyval) = '{'; }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 105 "eqn.y"
    { (yyval) = ((char *)(yyvsp[(2) - (2)]))[0]; }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 106 "eqn.y"
    { (yyval) = '}'; }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 113 "eqn.y"
    { column((yyvsp[(1) - (4)]), DEFGAP); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 114 "eqn.y"
    {(yyval)=atoi((char*)(yyvsp[(2) - (2)]));}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 114 "eqn.y"
    { column((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)])); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 117 "eqn.y"
    { (yyval) = startcol(LCOL); }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 118 "eqn.y"
    { (yyval) = startcol(CCOL); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 119 "eqn.y"
    { (yyval) = startcol(RCOL); }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 120 "eqn.y"
    { (yyval) = startcol(COL); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 123 "eqn.y"
    { lp[ct++] = (yyvsp[(1) - (1)]); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 124 "eqn.y"
    { lp[ct++] = (yyvsp[(3) - (3)]); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 127 "eqn.y"
    { (yyval) = ps; setsize((char *) (yyvsp[(2) - (2)])); }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 130 "eqn.y"
    { static char R[]="R"; setfont(R); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 131 "eqn.y"
    { static char I[]="I"; setfont(I); }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 132 "eqn.y"
    { static char B[]="B"; setfont(B); }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 133 "eqn.y"
    { setfont((char *)(yyvsp[(2) - (2)])); }
    break;



/* Line 1455 of yacc.c  */
#line 2223 "y.tab.c"
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



/* Line 1675 of yacc.c  */
#line 140 "eqn.y"


