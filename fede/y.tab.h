/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    NEWLINE = 259,
    IF = 260,
    ELSE = 261,
    DO = 262,
    WHILE = 263,
    STR_VAR = 264,
    INT_VAR = 265,
    PLANET_VAR = 266,
    STRING_CONTENT = 267,
    VAR_NAME = 268,
    DOT = 269,
    OPEN_CURLY = 270,
    CLOSE_CURLY = 271,
    OPEN_PAR = 272,
    CLOSE_PAR = 273,
    ASSIGN = 274,
    QUOTATION = 275,
    XVEL = 276,
    YVEL = 277,
    XPOS = 278,
    YPOS = 279,
    MASS = 280,
    VISIBILITY = 281,
    RADIUS = 282,
    COLOR = 283,
    NAME = 284,
    PRINT = 285,
    ADD_PLANET = 286,
    INC_OP = 287,
    DEC_OP = 288,
    ADD_OP = 289,
    SUB_OP = 290,
    MUL_OP = 291,
    DIV_OP = 292,
    OR_OP = 293,
    AND_OP = 294,
    NOT_OP = 295,
    GT_OP = 296,
    GE_OP = 297,
    EQ_OP = 298,
    LE_OP = 299,
    LT_OP = 300,
    NE_OP = 301,
    TRUE = 302,
    FALSE = 303,
    NUMBER = 304,
    DECIMAL = 305
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define NEWLINE 259
#define IF 260
#define ELSE 261
#define DO 262
#define WHILE 263
#define STR_VAR 264
#define INT_VAR 265
#define PLANET_VAR 266
#define STRING_CONTENT 267
#define VAR_NAME 268
#define DOT 269
#define OPEN_CURLY 270
#define CLOSE_CURLY 271
#define OPEN_PAR 272
#define CLOSE_PAR 273
#define ASSIGN 274
#define QUOTATION 275
#define XVEL 276
#define YVEL 277
#define XPOS 278
#define YPOS 279
#define MASS 280
#define VISIBILITY 281
#define RADIUS 282
#define COLOR 283
#define NAME 284
#define PRINT 285
#define ADD_PLANET 286
#define INC_OP 287
#define DEC_OP 288
#define ADD_OP 289
#define SUB_OP 290
#define MUL_OP 291
#define DIV_OP 292
#define OR_OP 293
#define AND_OP 294
#define NOT_OP 295
#define GT_OP 296
#define GE_OP 297
#define EQ_OP 298
#define LE_OP 299
#define LT_OP 300
#define NE_OP 301
#define TRUE 302
#define FALSE 303
#define NUMBER 304
#define DECIMAL 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "algo_asi_es_yacc" /* yacc.c:1909  */

 	float number;
 	char * str;
 	bool boolean;

#line 160 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
