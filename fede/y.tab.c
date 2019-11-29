/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "algo_asi_es_yacc" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdbool.h>
	int yylex();
	void yyerror(char const *s);


	//Todo esto que son vectores se podria hacer con una suerte de lista para no tener quilombos si definen mas de n cosas pero es para que este la idea de lo q se necesita

	char * nummeric_vars_n[10];
	int nummeric_vars_v[10];
	int nummeric_idx;

	char * string_vars_n[10];
	int string_vars_v[10];
	int string_idx;

	char * planet_names[10];
	char * planet_color[10];

	int planet_xvel[10];
	int planet_yvel[10];
	int planet_xpos[10];
	int planet_ypos[10];
	int planet_mass[10];
	int planet_radius[10];

	bool planet_visibility[10];

	int planet_idx;




#line 101 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 36 "algo_asi_es_yacc" /* yacc.c:355  */

 	float number;
 	char * str;
 	bool boolean;

#line 247 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 264 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   176

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    82,    85,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   129,   133,   134,   135,   142,
     146,   147,   148,   152,   153,   154,   158,   159,   160,   164,
     165,   166,   167,   171,   175,   176,   180,   181,   185,   186,
     190,   191,   195,   196,   200,   201,   202,   206,   207,   208,
     212,   213,   214,   215,   216,   217
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "NEWLINE", "IF", "ELSE",
  "DO", "WHILE", "STR_VAR", "INT_VAR", "PLANET_VAR", "STRING_CONTENT",
  "VAR_NAME", "DOT", "OPEN_CURLY", "CLOSE_CURLY", "OPEN_PAR", "CLOSE_PAR",
  "ASSIGN", "QUOTATION", "XVEL", "YVEL", "XPOS", "YPOS", "MASS",
  "VISIBILITY", "RADIUS", "COLOR", "NAME", "PRINT", "ADD_PLANET", "INC_OP",
  "DEC_OP", "ADD_OP", "SUB_OP", "MUL_OP", "DIV_OP", "OR_OP", "AND_OP",
  "NOT_OP", "GT_OP", "GE_OP", "EQ_OP", "LE_OP", "LT_OP", "NE_OP", "TRUE",
  "FALSE", "NUMBER", "DECIMAL", "$accept", "entity", "print", "addplanet",
  "assign_property", "bool_assign", "declaration", "int_assign",
  "expression", "term", "factor", "primary", "string_assign",
  "control_block", "conditional", "while", "bool_expression", "bool_term",
  "bool_factor", "bool", "comparison", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -47

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-47)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      99,    -6,     2,    12,    19,    22,    28,   100,    33,    62,
      80,    78,    85,    86,    89,    91,   -47,   -47,   -10,    99,
     -10,    74,    77,   -47,   131,    -7,    96,   102,   108,   110,
     103,   104,   -47,   111,   114,   116,   117,    99,   -47,   -10,
      -1,    -1,   -10,   -47,   -47,   -47,   -47,   105,   -14,   -47,
     -47,     8,    84,   -47,   -47,   -47,   109,    13,   115,   121,
      -1,   128,    77,    77,    77,    77,    77,   119,    77,    74,
      74,    -1,   122,   -15,   132,   137,   138,   139,   126,   143,
      99,    99,    99,    99,   -47,    41,    59,   -47,   -47,   -47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,   -10,   -10,   155,   149,   161,   162,   -47,   -47,   -47,
     -47,   -47,   -10,   -47,   -47,   -47,   -47,    56,   148,    99,
      99,    99,    99,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -14,   -14,   -15,   -15,   -15,   -15,   -15,   -15,   -47,
     -47,    99,    84,   -47,   150,    99,    99,    99,   133,   -47,
     -47,   -47,   -47,   -47,   153,   -10,   154,   -47,   -47,   166,
      60,   -47,   158,   171,    99,   -47,   159,   -47
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,    45,     0,     2,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     2,    39,     0,
       0,     0,     0,    57,    58,    40,    41,     0,    30,    33,
      36,     0,    50,    52,    56,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,     0,     0,
       2,     2,     2,     2,     6,     0,     0,    38,    37,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    24,    21,    23,    22,     0,     0,     2,
       2,     2,     2,    14,    15,    12,    13,    11,     5,    42,
      54,    31,    32,    60,    61,    62,    63,    64,    65,    34,
      35,     2,    51,    53,     0,     2,     2,     2,    25,    43,
       9,    10,     7,     8,     0,     0,     0,     4,     3,    46,
       0,    48,     0,     0,     2,    49,     0,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -47,   -19,   -47,   -47,   -47,   -47,   -47,    -8,   -24,   -46,
     -32,   -47,   -17,   -47,   -47,   -47,   -18,    75,   -37,   -47,
     -47
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    10,    11,    12,    13,   113,    14,    28,    47,    48,
      49,    50,    29,    15,    16,    17,    51,    52,    53,    54,
      55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      56,    73,    57,    38,    59,    89,    38,    39,    87,    88,
      71,    18,    38,    72,    61,    85,    71,    19,    84,    90,
      91,    86,    98,    99,    40,    41,   100,    40,    41,    20,
      42,   104,    21,    40,    41,    22,    73,    43,    44,    45,
      46,    23,    45,    46,   131,   132,   101,   117,    45,    46,
      30,   101,   115,   116,   107,   108,   109,   110,   111,   129,
     114,   125,   126,   127,   128,   143,   139,   140,   133,   134,
     135,   136,   137,   138,   129,    90,    91,   130,   163,    31,
      32,    33,    92,    93,    94,    95,    96,    97,    34,    35,
      90,    91,    36,    58,   148,    37,    60,   101,   101,    74,
     150,   151,   152,   153,     1,    75,     2,     3,     4,     5,
       6,    76,     7,    77,    24,    80,    78,    79,    81,    25,
      82,    83,   154,   102,   105,   103,   156,   157,   158,     8,
       9,   106,    26,    27,   118,    72,   119,   160,   112,    90,
      91,   120,   121,   122,   123,   166,    92,    93,    94,    95,
      96,    97,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   124,   141,   144,   145,   146,   147,   155,   149,   159,
     161,   101,   162,   164,   165,   167,   142
};

static const yytype_uint8 yycheck[] =
{
      19,    25,    20,    13,    21,    42,    13,    17,    40,    41,
      17,    17,    13,    20,    22,    39,    17,    15,    37,    34,
      35,    39,    36,    37,    34,    35,    18,    34,    35,    17,
      40,    18,    13,    34,    35,    13,    60,    47,    48,    49,
      50,    13,    49,    50,    90,    91,    38,    71,    49,    50,
      17,    38,    69,    70,    62,    63,    64,    65,    66,    18,
      68,    80,    81,    82,    83,   102,    98,    99,    92,    93,
      94,    95,    96,    97,    18,    34,    35,    18,    18,    17,
       0,     3,    41,    42,    43,    44,    45,    46,     3,     3,
      34,    35,     3,    19,   112,     4,    19,    38,    38,     3,
     119,   120,   121,   122,     5,     3,     7,     8,     9,    10,
      11,     3,    13,     3,    14,     4,    13,    13,     4,    19,
       4,     4,   141,    39,     3,    16,   145,   146,   147,    30,
      31,     3,    32,    33,    12,    20,     4,   155,    19,    34,
      35,     4,     4,     4,    18,   164,    41,    42,    43,    44,
      45,    46,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    18,    15,     8,    15,     4,     4,    17,    20,    16,
      16,    38,     6,    15,     3,    16,   101
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     7,     8,     9,    10,    11,    13,    30,    31,
      52,    53,    54,    55,    57,    64,    65,    66,    17,    15,
      17,    13,    13,    13,    14,    19,    32,    33,    58,    63,
      17,    17,     0,     3,     3,     3,     3,     4,    13,    17,
      34,    35,    40,    47,    48,    49,    50,    59,    60,    61,
      62,    67,    68,    69,    70,    71,    52,    67,    19,    63,
      19,    58,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    17,    20,    59,     3,     3,     3,     3,    13,    13,
       4,     4,     4,     4,    52,    59,    67,    61,    61,    69,
      34,    35,    41,    42,    43,    44,    45,    46,    36,    37,
      18,    38,    39,    16,    18,     3,     3,    58,    58,    58,
      58,    58,    19,    56,    58,    63,    63,    59,    12,     4,
       4,     4,     4,    18,    18,    52,    52,    52,    52,    18,
      18,    60,    60,    59,    59,    59,    59,    59,    59,    61,
      61,    15,    68,    69,     8,    15,     4,     4,    67,    20,
      52,    52,    52,    52,    52,    17,    52,    52,    52,    16,
      67,    16,     6,    18,    15,     3,    52,    16
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    57,    57,    57,    58,
      59,    59,    59,    60,    60,    60,    61,    61,    61,    62,
      62,    62,    62,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    68,    68,    69,    69,    69,    70,    70,    70,
      71,    71,    71,    71,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     6,     4,     3,     5,     5,     5,
       5,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     2,     2,     2,     2,     2,
       1,     3,     3,     1,     3,     3,     1,     2,     2,     1,
       1,     1,     3,     4,     1,     1,     7,    11,     7,     9,
       1,     3,     1,     3,     3,     2,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 68 "algo_asi_es_yacc" /* yacc.c:1646  */
    {/*CHECK SI EXISTE INT VAR_NAME, sino declarar y asignar int_assign*/}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 69 "algo_asi_es_yacc" /* yacc.c:1646  */
    {/*CHECK SI EXISTE STR VAR_NAME, sino declarar y asignar string_assign*/}
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 70 "algo_asi_es_yacc" /* yacc.c:1646  */
    {/*SE RESUELVE ADENTRO*/}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 72 "algo_asi_es_yacc" /* yacc.c:1646  */
    {/*CHECK SI EXISTE INT VAR_NAME y asignar int_assign, sino error*/}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "algo_asi_es_yacc" /* yacc.c:1646  */
    {/*CHECK SI EXISTE STR VAR_NAME y asignar str_assign, sino error*/}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 74 "algo_asi_es_yacc" /* yacc.c:1646  */
    {/*CHECK SI EXISTE INT VAR_NAME y aumentar, sino error*/}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 75 "algo_asi_es_yacc" /* yacc.c:1646  */
    {/*CHECK SI EXISTE INT VAR_NAME y decrementar, sino error*/}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 78 "algo_asi_es_yacc" /* yacc.c:1646  */
    {/*GENERAR EL PRINT AL ARCHIVO DE OUTPUT DEL PLANETA CORRESPONDIENTE*/}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 82 "algo_asi_es_yacc" /* yacc.c:1646  */
    {printf("printing: %s",(yyvsp[-1].str));}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 133 "algo_asi_es_yacc" /* yacc.c:1646  */
    {/*CHECK SI EXISTE STR VAR_NAME, sino declarar*/}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 134 "algo_asi_es_yacc" /* yacc.c:1646  */
    {/*CHECK SI EXISTE INT VAR_NAME, sino declarar*/}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 135 "algo_asi_es_yacc" /* yacc.c:1646  */
    {/*CHECK SI EXISTE Planet VAR_NAME, sino declarar*/}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 142 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[0].number);}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 146 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[0].number);}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 147 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number);}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 148 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[-2].number) - (yyvsp[0].number);}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 152 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[0].number);}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 153 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[-2].number) * (yyvsp[0].number);}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 154 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[-2].number) / (yyvsp[0].number);}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 158 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[0].number);}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 159 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = -(yyvsp[0].number);}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 160 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[0].number);}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 164 "algo_asi_es_yacc" /* yacc.c:1646  */
    {/*RECUPERAR VALOR DEL ARRAY*/}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 165 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[0].number);}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 166 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[0].number);}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 167 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[-1].number);}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 171 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[-1].str);}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 190 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[0].boolean);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 191 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[-2].boolean) || (yyvsp[0].boolean);}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 195 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[0].boolean);}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 196 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[-2].boolean) && (yyvsp[0].boolean);}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 200 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[-1].boolean);}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 201 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = !(yyvsp[0].boolean);}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 202 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[0].boolean);}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 206 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = true;}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 207 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = false;}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 208 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[0].boolean);}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 212 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[-2].number) > (yyvsp[0].number);}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 213 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[-2].number)>= (yyvsp[0].number);}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 214 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[-2].number) == (yyvsp[0].number);}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 215 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[-2].number) < (yyvsp[0].number);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 216 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[-2].number) <= (yyvsp[0].number);}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 217 "algo_asi_es_yacc" /* yacc.c:1646  */
    {(yyval.boolean) = (yyvsp[-2].number) != (yyvsp[0].number);}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1709 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 221 "algo_asi_es_yacc" /* yacc.c:1906  */


void yyerror(char const *s)
{
    printf("yyerror  %s\n",s);
    return ;
}

int main()
{
  yyparse();
  return 1;
}
    
