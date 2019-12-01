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
#line 1 "yacc.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdbool.h>
	int yylex();
	void yyerror(char const *s);


#line 74 "y.tab.c" /* yacc.c:339  */

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
    DECIMAL = 305,
    PRINTD = 306,
    PRINTS = 307
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
#define PRINTD 306
#define PRINTS 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "yacc.y" /* yacc.c:355  */

 	float number;
 	char * str;
 	bool boolean;

#line 224 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 241 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   400

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  272

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    55,    58,    61,    65,
      68,    71,    74,    78,    79,    82,    87,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   123,   126,   129,   132,   135,
     138,   141,   144,   147,   150,   155,   159,   160,   161,   165,
     168,   171,   173,   177,   181,   182,   183,   187,   188,   189,
     192,   195,   199,   200,   201,   204,   207,   211,   212,   213,
     214,   215,   221,   222,   226,   229,   230,   234,   235,   236,
     237,   238,   239,   242,   245,   249,   250,   251,   252,   255,
     258,   262,   263,   267,   268,   272,   273,   274,   278,   279,
     280,   283,   286,   290,   294,   295,   296,   297,   298,   299,
     303,   306,   309,   312,   315,   318,   322,   325,   328,   331,
     334,   337,   340,   344,   347,   350
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
  "FALSE", "NUMBER", "DECIMAL", "PRINTD", "PRINTS", "$accept", "entity",
  "newline", "inc_op", "dec_op", "print_digit", "print_string", "printd",
  "prints", "print", "printf", "addplanet", "assign_property",
  "access_property", "dot", "xvel", "yvel", "xpos", "ypos", "mass",
  "radius", "name", "color", "visibility", "bool_assign", "declaration",
  "str_var", "int_var", "planet_var", "var_name", "int_assign",
  "expression", "term", "mul_op", "div_op", "factor", "sub_op", "add_op",
  "primary", "string_assign", "string_content", "control_block",
  "conditional", "if", "else", "loop", "while", "do", "bool_expression",
  "bool_term", "bool_factor", "bool", "true", "false", "comparison",
  "compare_operator", "lt_op", "le_op", "eq_op", "ge_op", "gt_op", "ne_op",
  "open_par", "close_par", "open_curly", "close_curly", "not_op", "and_op",
  "or_op", "semicolon", "assign", "quotation", YY_NULLPTR
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
     305,   306,   307
};
# endif

#define YYPACT_NINF -199

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-199)))

#define YYTABLE_NINF -63

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     301,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,     9,
    -199,  -199,    32,    31,    31,   311,    23,    31,    30,    31,
      31,    31,    23,    23,    23,    84,    39,  -199,    30,  -199,
      30,    25,    40,  -199,  -199,    39,    39,    35,  -199,  -199,
    -199,  -199,  -199,  -199,    45,    27,   -12,  -199,   311,   311,
    -199,   311,    45,    39,    53,    39,    39,    39,    46,    46,
    -199,  -199,  -199,  -199,  -199,    31,    31,   371,    31,    31,
     320,  -199,   301,   224,   224,  -199,   274,    64,   301,   301,
     371,  -199,   311,   311,  -199,  -199,  -199,   311,   311,  -199,
    -199,    27,    55,   301,  -199,    26,   301,   301,   301,    31,
      53,    31,   311,    39,    39,  -199,  -199,  -199,  -199,  -199,
    -199,  -199,  -199,  -199,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    39,    39,    44,    26,  -199,  -199,  -199,
    -199,   345,    10,    47,  -199,  -199,  -199,  -199,  -199,   224,
     224,    10,    74,   301,  -199,  -199,  -199,  -199,  -199,  -199,
    -199,  -199,  -199,  -199,  -199,  -199,   -12,   -12,  -199,  -199,
    -199,    89,  -199,  -199,    53,    53,  -199,  -199,  -199,    39,
      39,   301,   301,  -199,  -199,  -199,  -199,  -199,  -199,  -199,
    -199,  -199,   224,   301,   301,    53,    53,  -199,  -199,  -199,
    -199,  -199,  -199,   311,  -199,  -199,  -199,  -199,  -199,  -199,
    -199,    25,   224,  -199,   224,   332,    10,  -199,    25,  -199,
      94,    74,  -199,    89,    89,   301,   301,  -199,  -199,    70,
    -199,  -199,  -199,  -199,    44,   274,    47,  -199,  -199,   274,
      30,    94,  -199,  -199,  -199,  -199,    74,   301,    74,   301,
     224,    30,   107,    74,  -199,    74,    10,   224,  -199,    25,
     107,  -199,    31,    10,   274,    25,    39,    31,    74,   301,
     274,  -199,    39,  -199,    74,    74,   301,  -199,  -199,  -199,
      74,  -199
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    93,   100,    99,    59,    60,    61,    62,    25,     0,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,    86,
       0,     0,     0,     1,   133,     0,     0,    77,   126,    76,
      75,    78,    79,    81,     0,     0,    64,    67,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,    45,   134,    17,    18,     0,     0,     0,     0,     0,
       0,    16,     2,     0,     0,   128,     2,     0,     2,     2,
       0,   127,     0,     0,    19,    70,    71,     0,     0,    73,
      74,     0,     0,     2,   135,     0,     2,     2,     2,     0,
       0,     0,     0,     0,     0,    46,    47,    48,    49,    50,
      54,    51,    53,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,     6,   130,   111,
     112,     0,     0,   101,   103,   107,   108,   109,   110,     0,
       0,     0,     0,     2,    26,    14,    15,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    66,    65,    68,    69,
      80,     0,    12,    84,     0,     0,    13,    11,     5,     0,
       0,     2,     2,    27,    28,    29,    30,    31,    32,    33,
      34,    35,     0,     2,     2,     0,     0,   124,   123,   122,
     121,   120,   125,     0,   114,   115,   116,   117,   118,   119,
     132,     0,     0,   131,     0,     0,     0,   106,     0,   129,
       0,     0,    20,     0,     0,     2,     2,     9,    10,    55,
       7,     8,    83,    82,   113,     2,   102,   104,   105,     2,
       0,     0,    23,    24,     4,     3,     0,     2,     0,     2,
       0,     0,    88,     0,    96,     0,     0,     0,    94,     0,
      87,    95,     0,     0,     2,     0,     0,     0,     0,     2,
       2,    98,     0,    89,     0,     0,     2,    97,    91,    92,
       0,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -199,   105,    36,  -199,  -199,  -199,  -199,  -199,  -199,  -199,
    -199,  -199,  -199,  -199,   -23,    34,    38,    41,    51,    54,
      58,   -57,    61,    63,  -199,  -199,  -199,  -199,  -199,    -7,
     135,     7,    22,  -199,  -199,   -18,   -31,     5,  -199,   -56,
     -11,  -199,  -199,  -199,  -130,  -199,  -198,  -199,   -28,   -78,
    -121,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,
    -199,  -199,   -17,   -35,  -181,  -101,  -199,  -199,  -199,   -14,
     -21,   -36
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    72,    65,    66,    13,    14,    15,    16,    17,
      18,    19,    20,    43,    67,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   181,    21,    22,    23,    24,    25,
      68,   131,    46,    87,    88,    47,    48,    49,    50,    69,
     165,    26,    27,    28,   249,    29,    30,    31,   132,   133,
     134,   135,   136,   137,   138,   193,   194,   195,   196,   197,
     198,   199,    51,   160,    76,   210,   140,   204,   202,    35,
     102,   126
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    54,    99,    53,    70,    55,    56,    57,    44,    52,
      84,    73,   230,    74,    82,    58,    59,    60,    95,   207,
     225,    80,    45,   153,    85,    86,    32,   229,    81,    92,
      89,    90,    33,   241,    34,   161,     7,   100,   163,     7,
      75,    44,    44,    71,    44,    81,   141,    38,   200,   -62,
      83,   103,   104,    77,   123,   124,   139,   139,    91,    61,
      82,    39,    40,    44,   179,    62,    44,    44,   254,   158,
     159,    78,    79,    94,   260,    44,    44,   125,    39,    40,
      44,    44,   144,   227,   113,   169,   203,   170,   164,    93,
     209,    96,    97,    98,    82,    44,    83,   201,    61,   100,
      82,   182,     3,    62,   156,   157,   208,    81,   200,   125,
     231,   206,   143,   248,   147,   186,    63,    64,   148,   185,
     255,   149,   139,   139,   226,     0,   212,     0,   213,   214,
      83,   150,    44,    44,   151,   242,    83,   244,   152,   171,
     172,   154,   250,   155,   251,     0,   205,     0,     0,   222,
     223,     0,     0,     0,   219,     0,     0,   263,     0,   183,
     184,     0,     0,   268,   269,   139,     0,     0,     0,   271,
       0,   228,     0,     0,    82,    44,     0,   127,   232,   233,
       0,   142,     0,   145,   146,   139,    44,   139,     0,     0,
       0,     0,     0,    82,   101,    44,     0,    44,   162,     0,
     224,   166,   167,   168,     0,   215,   216,     0,     0,     0,
      83,   252,   246,   240,     0,     0,     0,     0,   257,   253,
       0,     0,     0,   139,   247,     0,     0,     0,     0,    83,
     139,     0,     0,    44,     0,     0,     0,    37,   256,     0,
      44,    38,     0,   262,     0,     0,     0,     0,   211,   173,
     174,   175,   176,   177,   178,     0,   180,     0,    39,    40,
       0,   237,     0,     0,   128,   239,     0,     0,     0,     0,
       0,   129,   130,    41,    42,     0,   217,   218,    71,     1,
       0,     2,     3,     4,     5,     6,     0,     7,   220,   221,
     259,     0,   261,     0,     0,     0,   266,     0,   267,     0,
       0,     0,     0,     0,     8,     9,     1,     0,     2,     3,
       4,     5,     6,     0,     7,     0,     0,     0,     0,     0,
     234,   235,     0,     0,    37,    10,    11,     0,    38,     0,
     236,     8,     9,    37,   238,     0,     0,    38,     0,     0,
      94,     0,   243,     0,   245,    39,    40,     0,     0,     0,
      81,     0,    10,    11,    39,    40,     0,     0,     0,   258,
      41,    42,     0,     0,   264,   265,    39,    40,     0,    41,
      42,   270,     0,   187,   188,   189,   190,   191,   192,    39,
      40,     0,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   105,   106,   107,   108,   109,   110,   111,   112,
     113
};

static const yytype_int16 yycheck[] =
{
      14,    18,    58,    17,    25,    19,    20,    21,    15,    16,
      45,    28,   210,    30,    45,    22,    23,    24,    54,   140,
     201,    44,    15,    80,    36,    37,    17,   208,    18,    52,
      48,    49,     0,   231,     3,    92,    13,    58,    12,    13,
      15,    48,    49,     4,    51,    18,    74,    17,    38,    14,
      45,    65,    66,    13,    68,    69,    73,    74,    51,    14,
      91,    34,    35,    70,   120,    19,    73,    74,   249,    87,
      88,    35,    36,    20,   255,    82,    83,    70,    34,    35,
      87,    88,    18,   204,    29,    99,    39,   101,    95,    53,
      16,    55,    56,    57,   125,   102,    91,   132,    14,   120,
     131,   122,     8,    19,    82,    83,   141,    18,    38,   102,
     211,   139,    76,     6,    80,   126,    32,    33,    80,   126,
     250,    80,   139,   140,   202,    -1,   161,    -1,   164,   165,
     125,    80,   139,   140,    80,   236,   131,   238,    80,   103,
     104,    80,   243,    80,   245,    -1,   139,    -1,    -1,   185,
     186,    -1,    -1,    -1,   182,    -1,    -1,   258,    -1,   123,
     124,    -1,    -1,   264,   265,   182,    -1,    -1,    -1,   270,
      -1,   206,    -1,    -1,   205,   182,    -1,    72,   213,   214,
      -1,    76,    -1,    78,    79,   202,   193,   204,    -1,    -1,
      -1,    -1,    -1,   224,    59,   202,    -1,   204,    93,    -1,
     193,    96,    97,    98,    -1,   169,   170,    -1,    -1,    -1,
     205,   246,   240,   230,    -1,    -1,    -1,    -1,   253,   247,
      -1,    -1,    -1,   240,   241,    -1,    -1,    -1,    -1,   224,
     247,    -1,    -1,   240,    -1,    -1,    -1,    13,   252,    -1,
     247,    17,    -1,   257,    -1,    -1,    -1,    -1,   143,   114,
     115,   116,   117,   118,   119,    -1,   121,    -1,    34,    35,
      -1,   225,    -1,    -1,    40,   229,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    -1,   171,   172,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    13,   183,   184,
     254,    -1,   256,    -1,    -1,    -1,   260,    -1,   262,    -1,
      -1,    -1,    -1,    -1,    30,    31,     5,    -1,     7,     8,
       9,    10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,
     215,   216,    -1,    -1,    13,    51,    52,    -1,    17,    -1,
     225,    30,    31,    13,   229,    -1,    -1,    17,    -1,    -1,
      20,    -1,   237,    -1,   239,    34,    35,    -1,    -1,    -1,
      18,    -1,    51,    52,    34,    35,    -1,    -1,    -1,   254,
      49,    50,    -1,    -1,   259,   260,    34,    35,    -1,    49,
      50,   266,    -1,    41,    42,    43,    44,    45,    46,    34,
      35,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    21,    22,    23,    24,    25,    26,    27,    28,
      29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     7,     8,     9,    10,    11,    13,    30,    31,
      51,    52,    54,    58,    59,    60,    61,    62,    63,    64,
      65,    78,    79,    80,    81,    82,    94,    95,    96,    98,
      99,   100,    17,     0,     3,   122,   122,    13,    17,    34,
      35,    49,    50,    66,    82,    84,    85,    88,    89,    90,
      91,   115,    82,   122,   115,   122,   122,   122,    82,    82,
      82,    14,    19,    32,    33,    56,    57,    67,    83,    92,
     123,     4,    55,   115,   115,    15,   117,    13,    55,    55,
      67,    18,    89,    90,   116,    36,    37,    86,    87,    88,
      88,    84,    67,    55,    20,   124,    55,    55,    55,    92,
     123,    83,   123,   122,   122,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    68,    69,    70,    71,    72,    73,
      74,    75,    76,   122,   122,    84,   124,    54,    40,    47,
      48,    84,   101,   102,   103,   104,   105,   106,   107,   115,
     119,   101,    54,    55,    18,    54,    54,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    85,    85,    88,    88,
     116,    74,    54,    12,    82,    93,    54,    54,    54,   122,
     122,    55,    55,    83,    83,    83,    83,    83,    83,    92,
      83,    77,   123,    55,    55,    82,    93,    41,    42,    43,
      44,    45,    46,   108,   109,   110,   111,   112,   113,   114,
      38,   116,   121,    39,   120,    84,   101,   103,   116,    16,
     118,    54,   116,   124,   124,    55,    55,    54,    54,   101,
      54,    54,   124,   124,    84,   117,   102,   103,   116,   117,
      99,   118,   116,   116,    54,    54,    54,    55,    54,    55,
     115,    99,   118,    54,   118,    54,   101,   115,     6,    97,
     118,   118,   116,   101,   117,    97,   122,   116,    54,    55,
     117,    55,   122,   118,    54,    54,    55,    55,   118,   118,
      54,   118
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    62,    63,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    78,    78,    79,
      80,    81,    82,    83,    84,    84,    84,    85,    85,    85,
      86,    87,    88,    88,    88,    89,    90,    91,    91,    91,
      91,    91,    92,    92,    93,    94,    94,    95,    95,    95,
      95,    95,    95,    96,    97,    98,    98,    98,    98,    99,
     100,   101,   101,   102,   102,   103,   103,   103,   104,   104,
     104,   105,   106,   107,   108,   108,   108,   108,   108,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     6,     4,     3,     5,     5,     5,
       5,     4,     4,     4,     4,     4,     1,     1,     1,     3,
       5,     1,     1,     6,     6,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     2,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       3,     1,     4,     4,     1,     1,     1,     8,     7,    11,
      13,    12,    12,     1,     1,     8,     7,    11,    10,     1,
       1,     1,     3,     1,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
        case 16:
#line 55 "yacc.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 58 "yacc.y" /* yacc.c:1646  */
    {printf("++");}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 61 "yacc.y" /* yacc.c:1646  */
    {printf("--");}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 71 "yacc.y" /* yacc.c:1646  */
    {printf("printf(\"%%f\\n\",");}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 74 "yacc.y" /* yacc.c:1646  */
    {printf("printf(\"%%s\\n\",");}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 82 "yacc.y" /* yacc.c:1646  */
    {printf("printf");}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 87 "yacc.y" /* yacc.c:1646  */
    {		
																printf("planet_quantity++;\n");
																printf("fprintf(fp, \"%%lf\\n\",%s.mass);\n",(yyvsp[-1].str));
																printf("fprintf(fp, \"%%lf %%lf\\n\",%s.xvel,%s.yvel);\n",(yyvsp[-1].str),(yyvsp[-1].str));
																printf("fprintf(fp, \"%%lf %%lf\\n\",%s.xpos,%s.ypos);\n",(yyvsp[-1].str),(yyvsp[-1].str));
																printf("fprintf(fp, \"%%lf %%d\\n\",%s.radius,%s.color);\n",(yyvsp[-1].str),(yyvsp[-1].str));
																printf("fprintf(fp, \"%%s\\n\",%s.name);\n",(yyvsp[-1].str));
																printf("fprintf(fp, \"%%d\\n\",%s.visibility)",(yyvsp[-1].str));
														}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 123 "yacc.y" /* yacc.c:1646  */
    {printf(".");}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 126 "yacc.y" /* yacc.c:1646  */
    {printf("xvel");}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 129 "yacc.y" /* yacc.c:1646  */
    {printf("yvel");}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 132 "yacc.y" /* yacc.c:1646  */
    {printf("xpos");}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 135 "yacc.y" /* yacc.c:1646  */
    {printf("ypos");}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 138 "yacc.y" /* yacc.c:1646  */
    {printf("mass");}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 141 "yacc.y" /* yacc.c:1646  */
    {printf("radius");}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 144 "yacc.y" /* yacc.c:1646  */
    {printf("name");}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 147 "yacc.y" /* yacc.c:1646  */
    {printf("color");}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 150 "yacc.y" /* yacc.c:1646  */
    {printf("visibility");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 165 "yacc.y" /* yacc.c:1646  */
    {printf("char * ");}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 168 "yacc.y" /* yacc.c:1646  */
    {printf("float ");}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 171 "yacc.y" /* yacc.c:1646  */
    {printf("struct Planet ");}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 173 "yacc.y" /* yacc.c:1646  */
    {printf("%s",(yyvsp[0].str));}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 192 "yacc.y" /* yacc.c:1646  */
    {printf("*");}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 195 "yacc.y" /* yacc.c:1646  */
    {printf("/");}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 204 "yacc.y" /* yacc.c:1646  */
    {printf("-");}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 207 "yacc.y" /* yacc.c:1646  */
    {printf("+");}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 211 "yacc.y" /* yacc.c:1646  */
    {printf("%s",(yyvsp[0].str));}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 212 "yacc.y" /* yacc.c:1646  */
    {printf("%f",(yyvsp[0].number));}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 213 "yacc.y" /* yacc.c:1646  */
    {printf("%f",(yyvsp[0].number));}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 226 "yacc.y" /* yacc.c:1646  */
    {printf("%s",(yyvsp[0].str));}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 242 "yacc.y" /* yacc.c:1646  */
    {printf("if");}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 245 "yacc.y" /* yacc.c:1646  */
    {printf("else");}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 255 "yacc.y" /* yacc.c:1646  */
    {printf("while");}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 258 "yacc.y" /* yacc.c:1646  */
    {printf("do");}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 283 "yacc.y" /* yacc.c:1646  */
    {printf("1");}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 286 "yacc.y" /* yacc.c:1646  */
    {printf("0");}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 303 "yacc.y" /* yacc.c:1646  */
    {printf("<");}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 306 "yacc.y" /* yacc.c:1646  */
    {printf("<=");}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 309 "yacc.y" /* yacc.c:1646  */
    {printf("==");}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 312 "yacc.y" /* yacc.c:1646  */
    {printf(">=");}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 315 "yacc.y" /* yacc.c:1646  */
    {printf(">");}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 318 "yacc.y" /* yacc.c:1646  */
    {printf("!=");}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 322 "yacc.y" /* yacc.c:1646  */
    {printf("(");}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 325 "yacc.y" /* yacc.c:1646  */
    {printf(")");}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 328 "yacc.y" /* yacc.c:1646  */
    {printf("{");}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 331 "yacc.y" /* yacc.c:1646  */
    {printf("}");}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 334 "yacc.y" /* yacc.c:1646  */
    {printf("!");}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 337 "yacc.y" /* yacc.c:1646  */
    {printf("&&");}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 340 "yacc.y" /* yacc.c:1646  */
    {printf("||");}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 344 "yacc.y" /* yacc.c:1646  */
    {printf(";");}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 347 "yacc.y" /* yacc.c:1646  */
    {printf("=");}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 350 "yacc.y" /* yacc.c:1646  */
    {printf("\"");}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1860 "y.tab.c" /* yacc.c:1646  */
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
#line 353 "yacc.y" /* yacc.c:1906  */


void yyerror(char const *s)
{
    printf("yyerror  %s\n",s);
    return ;
}

int main()
{	
	printf("#include <stdbool.h>\n");
	printf("#include <stdio.h>\n");

	printf("struct Planet{\n double xvel;\n double yvel;\n double xpos;\n double ypos;\n int color;\n double mass;\n double radius;\n bool visibility;\n char * name;\n};\n");
	printf("int main(void){\n");
	printf("int planet_quantity = 0;\n");
	printf("FILE *fp;\n");
	printf("fp = fopen(\"planet_info\",\"w+\");\n");
	printf("fprintf(fp, \"              \");\n");
 	yyparse();
 	printf("fseek(fp,0,SEEK_SET);\n");

 	printf("fprintf(fp, \"0.01 %%d 10000\\n\",planet_quantity);\n");

 	printf("printf( \"planet_info generated succesfully!\\n\");\n");
 	printf("}");
	return 0;

}
