
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


