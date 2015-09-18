/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 26 "coach_lang_parser.ypp"

#include "clangbuilder.h"
#include "clangparser.h"
/*#include "serverparam.h"*/

#define    yymaxdepth RCSS_CLANG_maxdepth
#define    yyparse    RCSS_CLANG_parse
#define    yylex      RCSS_CLANG_lex
#define    yyerror    RCSS_CLANG_error
#define    yylval     RCSS_CLANG_lval
#define    yychar     RCSS_CLANG_char
#define    yydebug    RCSS_CLANG_debug
#define    yypact     RCSS_CLANG_pact
#define    yyr1       RCSS_CLANG_r1
#define    yyr2       RCSS_CLANG_r2
#define    yydef      RCSS_CLANG_def
#define    yychk      RCSS_CLANG_chk
#define    yypgo      RCSS_CLANG_pgo
#define    yyact      RCSS_CLANG_act
#define    yyexca     RCSS_CLANG_exca
#define    yyerrflag  RCSS_CLANG_errflag
#define    yynerrs    RCSS_CLANG_nerrs
#define    yyps       RCSS_CLANG_ps
#define    yypv       RCSS_CLANG_pv
#define    yys        RCSS_CLANG_s
#define    yy_yys     RCSS_CLANG_yys
#define    yystate    RCSS_CLANG_state
#define    yytmp      RCSS_CLANG_tmp
#define    yyv        RCSS_CLANG_v
#define    yy_yyv     RCSS_CLANG_yyv
#define    yyval      RCSS_CLANG_val
#define    yylloc     RCSS_CLANG_lloc
#define    yyreds     RCSS_CLANG_reds
#define    yytoks     RCSS_CLANG_toks
#define    yylhs      RCSS_CLANG_yylhs
#define    yylen      RCSS_CLANG_yylen
#define    yydefred   RCSS_CLANG_yydefred
#define    yydgoto    RCSS_CLANG_yydgoto
#define    yysindex   RCSS_CLANG_yysindex
#define    yyrindex   RCSS_CLANG_yyrindex
#define    yygindex   RCSS_CLANG_yygindex
#define    yytable    RCSS_CLANG_yytable
#define    yycheck    RCSS_CLANG_yycheck
#define    yyname     RCSS_CLANG_yyname
#define    yyrule     RCSS_CLANG_yyrule

#define YYERROR_VERBOSE

void yyerror (const char* s);
int yyerror (char* s);

#define YYPARSE_PARAM param

namespace
{
  rcss::clang::Parser::Param&
  getParam( void* param )
  {
    static rcss::clang::Parser::Param* cached_param
                   = reinterpret_cast< rcss::clang::Parser::Param* >( param );
    if( cached_param != param )
      cached_param = reinterpret_cast< rcss::clang::Parser::Param* >( param );
    return *cached_param;
  }

  inline
  rcss::clang::Builder&
  getBuilder( void* param )
  { return getParam( param ).getBuilder(); }

#define YYSTYPE rcss::clang::Parser::Lexer::Holder

  inline
  int
  yylex( YYSTYPE* holder, rcss::clang::Parser::Param& param )
  {
    int rval =  param.getLexer().lex( *holder );
//    cout << rval << endl;
    return rval;
  }

}

#define YYLEX_PARAM getParam( param )

#define BUILDER getBuilder( param )


/* Line 371 of yacc.c  */
#line 157 "coach_lang_parser.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     RCSS_CLANG_INT = 258,
     RCSS_CLANG_REAL = 259,
     RCSS_CLANG_STR = 260,
     RCSS_CLANG_VAR = 261,
     RCSS_CLANG_LP = 262,
     RCSS_CLANG_RP = 263,
     RCSS_CLANG_LB = 264,
     RCSS_CLANG_RB = 265,
     RCSS_CLANG_SAY = 266,
     RCSS_CLANG_HEAR = 267,
     RCSS_CLANG_COACH_SIDE = 268,
     RCSS_CLANG_META = 269,
     RCSS_CLANG_FREEFORM = 270,
     RCSS_CLANG_UNSUPP = 271,
     RCSS_CLANG_INFO = 272,
     RCSS_CLANG_ADVICE = 273,
     RCSS_CLANG_DEFINE = 274,
     RCSS_CLANG_DEFINEC = 275,
     RCSS_CLANG_DEFINED = 276,
     RCSS_CLANG_DEFINER = 277,
     RCSS_CLANG_DEFINEA = 278,
     RCSS_CLANG_VER = 279,
     RCSS_CLANG_NULL_REGION = 280,
     RCSS_CLANG_QUAD = 281,
     RCSS_CLANG_ARC = 282,
     RCSS_CLANG_PT = 283,
     RCSS_CLANG_REG = 284,
     RCSS_CLANG_TRI = 285,
     RCSS_CLANG_REC = 286,
     RCSS_CLANG_BALL = 287,
     RCSS_CLANG_POS = 288,
     RCSS_CLANG_HOME = 289,
     RCSS_CLANG_BALLTO = 290,
     RCSS_CLANG_MARK = 291,
     RCSS_CLANG_MARK_LINE = 292,
     RCSS_CLANG_OFFLINE = 293,
     RCSS_CLANG_HTYPE = 294,
     RCSS_CLANG_BMOVE_TOKEN = 295,
     RCSS_CLANG_DO_DONT = 296,
     RCSS_CLANG_TEAM = 297,
     RCSS_CLANG_TRUE_KW = 298,
     RCSS_CLANG_FALSE_KW = 299,
     RCSS_CLANG_PPOS = 300,
     RCSS_CLANG_BPOS = 301,
     RCSS_CLANG_BOWNER = 302,
     RCSS_CLANG_AND = 303,
     RCSS_CLANG_OR = 304,
     RCSS_CLANG_NOT = 305,
     RCSS_CLANG_PLAY_MODE_KW = 306,
     RCSS_CLANG_PLAY_MODE = 307,
     RCSS_CLANG_CLEAR = 308,
     RCSS_CLANG_L = 309,
     RCSS_CLANG_G = 310,
     RCSS_CLANG_E = 311,
     RCSS_CLANG_NE = 312,
     RCSS_CLANG_LE = 313,
     RCSS_CLANG_GE = 314,
     RCSS_CLANG_PLUS = 315,
     RCSS_CLANG_MINUS = 316,
     RCSS_CLANG_MULT = 317,
     RCSS_CLANG_DIV = 318,
     RCSS_CLANG_TIME = 319,
     RCSS_CLANG_OPP_GOAL = 320,
     RCSS_CLANG_OUR_GOAL = 321,
     RCSS_CLANG_GOAL_DIFF = 322,
     RCSS_CLANG_UNUM = 323,
     RCSS_CLANG_PASS = 324,
     RCSS_CLANG_DRIBBLE = 325,
     RCSS_CLANG_SHOOT = 326,
     RCSS_CLANG_HOLD = 327,
     RCSS_CLANG_INTERCEPT = 328,
     RCSS_CLANG_TACKLE = 329,
     RCSS_CLANG_RULE = 330,
     RCSS_CLANG_ON_OFF = 331,
     RCSS_CLANG_ALL = 332,
     RCSS_CLANG_DEL = 333,
     RCSS_CLANG_DEFRULE = 334,
     RCSS_CLANG_MODEL = 335,
     RCSS_CLANG_DIREC = 336,
     RCSS_CLANG_ERROR = 337
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 304 "coach_lang_parser.cpp"

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNRULES -- Number of states.  */
#define YYNSTATES  315

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   337

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    10,    18,    20,    22,    24,    26,
      28,    30,    32,    34,    39,    42,    44,    49,    51,    55,
      57,    60,    62,    67,    72,    75,    77,    82,    87,    90,
      92,    98,   104,   110,   116,   121,   125,   129,   134,   139,
     141,   144,   146,   151,   155,   160,   165,   171,   175,   178,
     180,   185,   190,   196,   201,   206,   211,   216,   221,   226,
     228,   233,   238,   243,   248,   252,   256,   260,   265,   272,
     274,   277,   279,   282,   284,   288,   292,   301,   306,   312,
     317,   322,   327,   332,   334,   338,   344,   350,   352,   354,
     356,   358,   362,   366,   370,   374,   378,   382,   386,   390,
     392,   394,   396,   398,   400,   402,   405,   407,   411,   419,
     428,   433,   435,   437,   444,   450,   453,   455,   461,   468,
     473,   479,   485,   491,   495,   499,   503,   507,   511,   513,
     515,   517,   521,   523,   526,   528,   530,   532,   536,   539
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      84,     0,    -1,     7,    11,    85,     8,    -1,    85,    -1,
       7,    12,     3,    13,     3,    85,     8,    -1,    92,    -1,
     101,    -1,   103,    -1,   104,    -1,    95,    -1,   102,    -1,
      86,    -1,    91,    -1,     7,    75,    87,     8,    -1,    87,
      88,    -1,    88,    -1,     7,    76,    89,     8,    -1,     6,
      -1,     7,    90,     8,    -1,    77,    -1,    90,     6,    -1,
       6,    -1,     7,    78,    89,     8,    -1,     7,    14,    93,
       8,    -1,    93,    94,    -1,    94,    -1,     7,    24,   123,
       8,    -1,     7,    19,    96,     8,    -1,    96,    97,    -1,
      97,    -1,     7,    20,     5,   111,     8,    -1,     7,    21,
       5,   108,     8,    -1,     7,    22,     5,   119,     8,    -1,
       7,    23,     5,   107,     8,    -1,     7,    79,    98,     8,
      -1,     6,    80,    99,    -1,     6,    81,    99,    -1,     7,
     111,   110,     8,    -1,     7,   111,   100,     8,    -1,    89,
      -1,   100,    99,    -1,    99,    -1,     7,    15,     5,     8,
      -1,     7,    16,     8,    -1,     7,    17,   106,     8,    -1,
       7,    18,   106,     8,    -1,     7,     3,   111,   110,     8,
      -1,     7,    53,     8,    -1,   106,   105,    -1,   105,    -1,
       7,    33,   119,     8,    -1,     7,    34,   119,     8,    -1,
       7,    35,   119,   127,     8,    -1,     7,    35,   124,     8,
      -1,     7,    36,   124,     8,    -1,     7,    37,   124,     8,
      -1,     7,    37,   119,     8,    -1,     7,    38,   119,     8,
      -1,     7,    39,     3,     8,    -1,     5,    -1,     7,    69,
     119,     8,    -1,     7,    69,   124,     8,    -1,     7,    70,
     119,     8,    -1,     7,    53,   119,     8,    -1,     7,    71,
       8,    -1,     7,    72,     8,    -1,     7,    73,     8,    -1,
       7,    74,   124,     8,    -1,     7,    41,    42,   124,   109,
       8,    -1,     5,    -1,   109,   107,    -1,   107,    -1,   110,
     108,    -1,   108,    -1,     7,    43,     8,    -1,     7,    44,
       8,    -1,     7,    45,    42,   124,     3,     3,   119,     8,
      -1,     7,    46,   119,     8,    -1,     7,    47,    42,   124,
       8,    -1,     7,    51,    52,     8,    -1,     7,    48,   118,
       8,    -1,     7,    49,   118,     8,    -1,     7,    50,   111,
       8,    -1,     5,    -1,     7,   112,     8,    -1,     7,    68,
       6,   124,     8,    -1,     7,    68,     5,   124,     8,    -1,
     113,    -1,   114,    -1,   115,    -1,   116,    -1,    64,   117,
       3,    -1,     3,   117,    64,    -1,    65,   117,     3,    -1,
       3,   117,    65,    -1,    66,   117,     3,    -1,     3,   117,
      66,    -1,    67,   117,     3,    -1,     3,   117,    67,    -1,
      54,    -1,    58,    -1,    59,    -1,    55,    -1,    56,    -1,
      57,    -1,   118,   111,    -1,   111,    -1,     7,    25,     8,
      -1,     7,    26,   121,   121,   121,   121,     8,    -1,     7,
      27,   121,   123,   123,   123,   123,     8,    -1,     7,    29,
     120,     8,    -1,     5,    -1,   121,    -1,     7,    30,   121,
     121,   121,     8,    -1,     7,    31,   121,   121,     8,    -1,
     120,   119,    -1,   119,    -1,     7,    28,   123,   123,     8,
      -1,     7,    28,   123,   123,   121,     8,    -1,     7,    28,
      32,     8,    -1,     7,    28,    42,     3,     8,    -1,     7,
      28,    42,     6,     8,    -1,     7,    28,    42,     5,     8,
      -1,     7,   122,     8,    -1,   122,    60,   122,    -1,   122,
      61,   122,    -1,   122,    62,   122,    -1,   122,    63,   122,
      -1,   121,    -1,     3,    -1,     4,    -1,     9,   125,    10,
      -1,   126,    -1,   125,   126,    -1,     3,    -1,     6,    -1,
       5,    -1,     9,   128,    10,    -1,   128,    40,    -1,    40,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   235,   235,   236,   237,   247,   248,   249,   250,   251,
     252,   253,   254,   258,   265,   266,   270,   277,   290,   294,
     301,   313,   328,   337,   344,   345,   349,   357,   364,   365,
     369,   381,   393,   405,   417,   424,   436,   451,   455,   459,
     465,   466,   471,   488,   496,   504,   512,   516,   522,   523,
     527,   531,   535,   539,   543,   547,   551,   555,   559,   563,
     575,   580,   585,   590,   595,   600,   605,   610,   618,   622,
     637,   638,   641,   642,   646,   650,   654,   659,   663,   667,
     671,   675,   679,   683,   691,   695,   706,   719,   720,   721,
     722,   726,   730,   737,   741,   748,   752,   759,   763,   769,
     769,   769,   769,   770,   770,   774,   778,   785,   789,   794,
     801,   805,   817,   821,   826,   834,   835,   839,   843,   847,
     851,   856,   868,   881,   888,   893,   898,   903,   908,   915,
     919,   926,   932,   933,   937,   941,   954,   969,   973,   977
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RCSS_CLANG_INT", "RCSS_CLANG_REAL",
  "RCSS_CLANG_STR", "RCSS_CLANG_VAR", "\"(\"", "\")\"", "\"{\"", "\"}\"",
  "\"say\"", "\"hear\"", "RCSS_CLANG_COACH_SIDE", "\"meta\"",
  "\"freeform\"", "\"unsupported_clang\"", "\"info\"", "\"advice\"",
  "\"define\"", "\"definec\"", "\"defined\"", "\"definer\"", "\"definea\"",
  "\"ver\"", "\"null\"", "\"quad\"", "\"arc\"", "\"pt\"", "\"reg\"",
  "\"tri\"", "\"rec\"", "\"ball\"", "\"pos\"", "\"home\"", "\"bto\"",
  "\"mark\"", "\"markl\"", "\"oline\"", "\"htype\"",
  "RCSS_CLANG_BMOVE_TOKEN", "RCSS_CLANG_DO_DONT", "RCSS_CLANG_TEAM",
  "\"true\"", "\"false\"", "\"ppos\"", "\"bpos\"", "\"bowner\"", "\"and\"",
  "\"or\"", "\"not\"", "\"playm\"", "RCSS_CLANG_PLAY_MODE", "\"clear\"",
  "\"<\"", "\">\"", "\"==\"", "\"!=\"", "\"<=\"", "\">=\"", "\"+\"",
  "\"-\"", "\"*\"", "\"/\"", "\"time\"", "\"opp_goals\"", "\"own_goals\"",
  "\"goal_diff\"", "\"unum\"", "\"pass\"", "\"dribble\"", "\"shoot\"",
  "\"hold\"", "\"intercept\"", "\"tackle\"", "\"rule\"", "\"on|off\"",
  "\"all\"", "\"delete\"", "\"definerule\"", "\"model\"", "\"direc\"",
  "RCSS_CLANG_ERROR", "$accept", "command", "message", "rule_mess",
  "activation_list", "activation_element", "id_list", "id_list2",
  "del_mess", "meta_mess", "meta_token_list", "meta_token", "define_mess",
  "define_token_list", "define_token", "define_rule", "rule", "rule_list",
  "freeform_mess", "unsupp_mess", "info_mess", "advice_mess", "token",
  "token_list", "action", "directive", "action_list", "directive_list",
  "condition", "cond_comp", "time_comp", "opp_goal_comp", "our_goal_comp",
  "goal_diff_comp", "comp", "condition_list", "region", "region_list",
  "point", "point_list", "num", "unum_set", "unum_list", "unum",
  "bmove_token_set", "bmove_token_list", YY_NULL
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    87,    87,    88,    89,    89,    89,
      90,    90,    91,    92,    93,    93,    94,    95,    96,    96,
      97,    97,    97,    97,    97,    98,    98,    99,    99,    99,
     100,   100,   101,   102,   103,   104,   105,   105,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   112,   112,   112,
     112,   113,   113,   114,   114,   115,   115,   116,   116,   117,
     117,   117,   117,   117,   117,   118,   118,   119,   119,   119,
     119,   119,   119,   119,   119,   120,   120,   121,   121,   121,
     121,   121,   121,   121,   122,   122,   122,   122,   122,   123,
     123,   124,   125,   125,   126,   126,   126,   127,   128,   128
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     7,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     1,     4,     1,     3,     1,
       2,     1,     4,     4,     2,     1,     4,     4,     2,     1,
       5,     5,     5,     5,     4,     3,     3,     4,     4,     1,
       2,     1,     4,     3,     4,     4,     5,     3,     2,     1,
       4,     4,     5,     4,     4,     4,     4,     4,     4,     1,
       4,     4,     4,     4,     3,     3,     3,     4,     6,     1,
       2,     1,     2,     1,     3,     3,     8,     4,     5,     4,
       4,     4,     4,     1,     3,     5,     5,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     7,     8,
       4,     1,     1,     6,     5,     2,     1,     5,     6,     4,
       5,     5,     5,     3,     3,     3,     3,     3,     1,     1,
       1,     3,     1,     2,     1,     1,     1,     3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,    11,    12,     5,     9,     6,    10,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,    25,     0,
      43,     0,    49,     0,     0,     0,     0,    29,     0,     0,
      15,    17,     0,    19,     0,     2,     0,     0,    23,    24,
      42,     0,     0,    44,    48,    45,     0,     0,     0,     0,
       0,    27,    28,     0,    13,    14,    21,     0,    22,     0,
     129,   130,     0,    83,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,    20,    18,     0,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    69,     0,
      73,     0,     0,     0,   111,     0,     0,   112,    59,     0,
       0,     0,     0,    34,    16,     4,    99,   102,   103,   104,
     100,   101,     0,    74,    75,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,    46,    72,    30,    31,     0,     0,     0,     0,     0,
       0,     0,     0,   128,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,    39,    35,    36,    92,    94,    96,    98,     0,
       0,    77,     0,    80,   105,    81,    82,    79,    91,    93,
      95,    97,     0,     0,     0,   107,     0,     0,     0,     0,
       0,   116,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,    66,     0,     0,   134,   136,
     135,     0,   132,     0,    78,    86,    85,     0,     0,     0,
     119,     0,     0,     0,     0,   110,   115,     0,     0,   124,
     125,   126,   127,    50,    51,     0,     0,    53,    54,    56,
      55,    57,    58,    63,    60,    61,    62,    67,     0,    41,
       0,     0,   131,   133,     0,    71,     0,     0,     0,   120,
     122,   121,   117,     0,     0,   114,   139,     0,    52,    38,
      40,    37,     0,    68,    70,     0,     0,   118,   113,   137,
     138,    76,   108,     0,   109
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    39,    40,   182,    67,     5,     6,
      27,    28,     7,    36,    37,    82,   183,   280,     8,     9,
      10,    11,    32,    33,   120,   110,   286,   111,   138,   103,
     104,   105,   106,   107,   132,   139,   116,   212,   117,   164,
      72,   190,   241,   242,   266,   297
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -234
static const yytype_int16 yypact[] =
{
      10,    48,    42,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,    54,    88,    87,    99,    90,   102,   102,   108,
     118,     9,  -234,    22,   125,   116,   117,    25,  -234,   139,
    -234,    18,  -234,    41,    61,     8,   112,  -234,    80,   204,
    -234,  -234,   154,  -234,   155,  -234,   192,    52,  -234,  -234,
    -234,    20,   218,  -234,  -234,  -234,   232,   236,   240,   244,
     259,  -234,  -234,     9,  -234,  -234,  -234,    93,  -234,    54,
    -234,  -234,   245,  -234,   121,   109,  -234,    20,   109,   168,
     251,   -57,   249,   258,  -234,  -234,   260,  -234,   151,   261,
     262,   225,   168,   229,    20,    20,    20,   220,   151,   151,
     151,   151,   146,   265,  -234,  -234,  -234,  -234,  -234,   234,
    -234,   137,   266,   268,  -234,   194,   269,  -234,  -234,   144,
     270,    13,    13,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,   126,  -234,  -234,   271,   273,   271,  -234,   191,
     195,   274,   275,   276,   281,   282,   283,   271,   271,  -234,
     246,  -234,  -234,  -234,  -234,    15,   279,   284,   284,    89,
     168,   284,   284,  -234,    50,  -234,   168,   168,   127,   271,
     127,   168,   286,   168,   127,   168,   285,   287,   288,   271,
    -234,    67,  -234,  -234,  -234,  -234,  -234,  -234,  -234,   233,
     289,  -234,   290,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,   291,   292,   271,  -234,   284,    52,   293,   237,
      52,  -234,   239,   284,   284,  -234,   284,   284,   284,   284,
     294,   295,   296,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,  -234,  -234,  -234,   308,     2,  -234,  -234,
    -234,   152,  -234,   314,  -234,  -234,  -234,   251,   284,    52,
    -234,   310,   311,   312,   252,  -234,  -234,   284,   313,   199,
     199,  -234,  -234,  -234,  -234,   250,   315,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,   133,  -234,
       5,   243,  -234,  -234,   168,  -234,   247,   284,    52,  -234,
    -234,  -234,  -234,   316,   317,  -234,  -234,    -5,  -234,  -234,
    -234,  -234,   318,  -234,  -234,   319,    52,  -234,  -234,  -234,
    -234,  -234,  -234,   320,  -234
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -234,  -234,     6,  -234,  -234,   255,   -11,  -234,  -234,  -234,
    -234,   277,  -234,  -234,   297,  -234,  -119,  -234,  -234,  -234,
    -234,  -234,   230,   321,  -233,   -77,  -234,    60,   -51,  -234,
    -234,  -234,  -234,  -234,   130,   227,   -90,  -234,  -111,    16,
    -153,   -20,  -234,    91,  -234,  -234
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      75,   113,   136,   184,   163,   309,   210,   108,    41,   278,
      44,    41,   181,   299,   285,    41,    42,     1,    24,    41,
     181,    51,   155,   121,   122,    73,   112,    74,    56,    57,
      58,    59,    26,    48,   152,   310,    14,    15,    16,    17,
      18,    19,    22,   159,   163,   141,   206,   207,    31,    53,
     213,   214,    83,   304,   249,    70,    71,   254,   215,    12,
      13,    23,    14,    15,    16,    17,    18,    19,    31,    55,
     211,    52,    73,    66,    74,    86,   220,   221,   222,    43,
     225,   227,    43,   229,   230,   232,    43,    60,   194,   194,
      43,    25,    70,    71,    26,   248,   288,    20,    30,    84,
      21,    85,   257,   258,    29,   163,   163,   163,   163,    31,
     216,   217,   218,   219,   108,    35,   109,   192,   279,    35,
      61,   208,   256,    20,    88,    38,    21,   202,   203,    46,
     237,   209,   114,    45,   115,   306,   189,   287,    73,    66,
      74,    47,   108,   293,   109,   151,   294,    50,   223,   224,
     226,   147,   148,   313,   231,   238,    63,   239,   240,   236,
      66,   300,   282,    68,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   114,   150,   115,   305,   166,   167,   168,
     169,   170,   171,   172,   247,    98,    99,   100,   101,   102,
     185,   186,   187,   188,   302,    69,    73,   173,    74,   193,
      73,   155,    74,   195,   152,   126,   127,   128,   129,   130,
     131,    38,    64,   174,   175,   176,   177,   178,   179,   156,
     157,   158,   159,   160,   161,   162,    76,   237,   143,   144,
     145,   146,   259,   260,   261,   262,   238,    77,   239,   240,
     251,    78,   252,   253,   114,    79,   115,   255,   108,    80,
     109,   301,   118,    87,   119,   303,   118,   123,   119,   155,
     292,   218,   219,    54,    54,    81,   124,   135,   125,   133,
     134,   137,   142,   149,   153,   150,   154,   165,   180,   198,
     189,   191,   196,   197,   199,   200,   201,   205,   204,   228,
     296,   155,   243,   233,    65,   234,   235,   281,   244,   245,
     246,   250,   263,   264,    49,   265,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   284,   289,   290,
     291,   295,   140,   298,   307,   308,   311,   312,   314,     0,
       0,     0,   283,    62,     0,     0,     0,     0,     0,    34
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-234)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      51,    78,    92,   122,   115,    10,   159,     5,     6,     7,
      21,     6,     7,     8,   247,     6,     7,     7,    12,     6,
       7,     3,     7,    80,    81,     5,    77,     7,    20,    21,
      22,    23,     7,     8,   111,    40,    14,    15,    16,    17,
      18,    19,     0,    28,   155,    96,   157,   158,     7,     8,
     161,   162,    63,   286,   207,     3,     4,   210,     8,    11,
      12,     7,    14,    15,    16,    17,    18,    19,     7,     8,
     160,    53,     5,     6,     7,    69,   166,   167,   168,    77,
     170,   171,    77,   173,   174,   175,    77,    79,   139,   140,
      77,     3,     3,     4,     7,   206,   249,    75,     8,     6,
      78,     8,   213,   214,     5,   216,   217,   218,   219,     7,
      60,    61,    62,    63,     5,     7,     7,   137,   237,     7,
       8,    32,   212,    75,     3,     7,    78,   147,   148,    13,
     181,    42,     5,     8,     7,   288,     9,   248,     5,     6,
       7,    24,     5,   254,     7,     8,   257,     8,   168,   169,
     170,     5,     6,   306,   174,     3,    76,     5,     6,   179,
       6,   280,    10,     8,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     5,    41,     7,   287,    33,    34,    35,
      36,    37,    38,    39,   204,    64,    65,    66,    67,    68,
      64,    65,    66,    67,   284,     3,     5,    53,     7,     8,
       5,     7,     7,     8,   281,    54,    55,    56,    57,    58,
      59,     7,     8,    69,    70,    71,    72,    73,    74,    25,
      26,    27,    28,    29,    30,    31,     8,   278,    98,    99,
     100,   101,   216,   217,   218,   219,     3,     5,     5,     6,
       3,     5,     5,     6,     5,     5,     7,     8,     5,     5,
       7,     8,     5,     8,     7,     8,     5,     8,     7,     7,
       8,    62,    63,    33,    34,     6,     8,    42,     8,     8,
       8,    42,    52,     8,     8,    41,     8,     8,     8,     3,
       9,     8,     8,     8,     3,     3,     3,     8,    42,     3,
      40,     7,     3,     8,    39,     8,     8,   237,     8,     8,
       8,     8,     8,     8,    27,     9,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     3,     8,     8,
       8,     8,    95,     8,     8,     8,     8,     8,     8,    -1,
      -1,    -1,   241,    36,    -1,    -1,    -1,    -1,    -1,    18
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    84,    85,    86,    91,    92,    95,   101,   102,
     103,   104,    11,    12,    14,    15,    16,    17,    18,    19,
      75,    78,     0,     7,    85,     3,     7,    93,    94,     5,
       8,     7,   105,   106,   106,     7,    96,    97,     7,    87,
      88,     6,     7,    77,    89,     8,    13,    24,     8,    94,
       8,     3,    53,     8,   105,     8,    20,    21,    22,    23,
      79,     8,    97,    76,     8,    88,     6,    90,     8,     3,
       3,     4,   123,     5,     7,   111,     8,     5,     5,     5,
       5,     6,    98,    89,     6,     8,    85,     8,     3,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    64,    65,
      66,    67,    68,   112,   113,   114,   115,   116,     5,     7,
     108,   110,   111,   108,     5,     7,   119,   121,     5,     7,
     107,    80,    81,     8,     8,     8,    54,    55,    56,    57,
      58,    59,   117,     8,     8,    42,   119,    42,   111,   118,
     118,   111,    52,   117,   117,   117,   117,     5,     6,     8,
      41,     8,   108,     8,     8,     7,    25,    26,    27,    28,
      29,    30,    31,   121,   122,     8,    33,    34,    35,    36,
      37,    38,    39,    53,    69,    70,    71,    72,    73,    74,
       8,     7,    89,    99,    99,    64,    65,    66,    67,     9,
     124,     8,   124,     8,   111,     8,     8,     8,     3,     3,
       3,     3,   124,   124,    42,     8,   121,   121,    32,    42,
     123,   119,   120,   121,   121,     8,    60,    61,    62,    63,
     119,   119,   119,   124,   124,   119,   124,   119,     3,   119,
     119,   124,   119,     8,     8,     8,   124,   111,     3,     5,
       6,   125,   126,     3,     8,     8,     8,   124,   121,   123,
       8,     3,     5,     6,   123,     8,   119,   121,   121,   122,
     122,   122,   122,     8,     8,     9,   127,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     7,    99,
     100,   110,    10,   126,     3,   107,   109,   121,   123,     8,
       8,     8,     8,   121,   121,     8,    40,   128,     8,     8,
      99,     8,   119,     8,   107,   121,   123,     8,     8,    10,
      40,     8,     8,   123,     8
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

  YYUSE (yytype);
}




/*----------.
| yyparse.  |
`----------*/

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
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
/* Line 1787 of yacc.c  */
#line 239 "coach_lang_parser.ypp"
    {
        (yyval) = (yyvsp[(5) - (7)]);
        BUILDER.setTime( (yyvsp[(3) - (7)]).getInt() );
        BUILDER.setSide( (yyvsp[(4) - (7)]).getInt() );
        BUILDER.setTimeRecv( (yyvsp[(5) - (7)]).getInt() );
    }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 259 "coach_lang_parser.ypp"
    {
        BUILDER.buildRuleMsg();
        BUILDER.setVer( 8 );
    }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 271 "coach_lang_parser.ypp"
    {
        BUILDER.buildActivateRules( (yyvsp[(2) - (4)]).getBool() );
    }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 278 "coach_lang_parser.ypp"
    {
        std::string var = (yyvsp[(1) - (1)]).getStr();
        if ( var.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildRuleID( var );
            BUILDER.buildRuleIDList();
        }
    }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 291 "coach_lang_parser.ypp"
    {
        BUILDER.buildRuleIDList();
    }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 295 "coach_lang_parser.ypp"
    {
        BUILDER.buildRuleIDListALL();
    }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 302 "coach_lang_parser.ypp"
    {
        std::string var = (yyvsp[(2) - (2)]).getStr();
        if ( var.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildRuleID( var );
        }
    }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 314 "coach_lang_parser.ypp"
    {
        std::string var = (yyvsp[(1) - (1)]).getStr();
        if ( var.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildRuleID( var );
        }
    }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 329 "coach_lang_parser.ypp"
    {
        BUILDER.buildDelMsg();
        BUILDER.setVer( 8 );
    }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 338 "coach_lang_parser.ypp"
    {
        BUILDER.buildMetaMsg();
        BUILDER.setVer( 7 );
    }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 350 "coach_lang_parser.ypp"
    {
       BUILDER.buildMetaTokenVer( (yyvsp[(3) - (4)]).getDoub() );
    }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 358 "coach_lang_parser.ypp"
    {
        BUILDER.buildDefineMsg();
        BUILDER.setVer( 8, 7 );
    }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 370 "coach_lang_parser.ypp"
    {
        std::string str = rcss::stripQuotes( (yyvsp[(3) - (5)]).getStr() );
        if ( str.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildDefineCond( str );
        }
    }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 382 "coach_lang_parser.ypp"
    {
        std::string str = rcss::stripQuotes( (yyvsp[(3) - (5)]).getStr() );
        if ( str.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildDefineDir( str );
        }
    }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 394 "coach_lang_parser.ypp"
    {
        std::string str = rcss::stripQuotes( (yyvsp[(3) - (5)]).getStr() );
        if ( str.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildDefineReg( str );
        }
    }
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 406 "coach_lang_parser.ypp"
    {
        std::string str = rcss::stripQuotes( (yyvsp[(3) - (5)]).getStr() );
        if ( str.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildDefineAct( str );
        }
    }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 418 "coach_lang_parser.ypp"
    {
        BUILDER.setVer( 8 );
    }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 425 "coach_lang_parser.ypp"
    {
        std::string var = (yyvsp[(1) - (3)]).getStr();
        if ( var.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildDefineModelRule( var );
        }
    }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 437 "coach_lang_parser.ypp"
    {
        std::string var = (yyvsp[(1) - (3)]).getStr();
        if ( var.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildDefineDirectiveRule( var );
        }
    }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 452 "coach_lang_parser.ypp"
    {
        BUILDER.buildSimpleRule();
    }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 456 "coach_lang_parser.ypp"
    {
        BUILDER.buildNestedRule();
    }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 460 "coach_lang_parser.ypp"
    {
        BUILDER.buildIDRule();
    }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 472 "coach_lang_parser.ypp"
    {
        std::string str = rcss::stripQuotes( (yyvsp[(3) - (4)]).getStr() );
        if( str.length() > BUILDER.freeformMsgSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildFreeformMsg( str );
            BUILDER.setVer( 8, 7 );
        }
    }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 489 "coach_lang_parser.ypp"
    {
        BUILDER.buildUnsuppMsg();
        BUILDER.setVer( 8, 7 );
    }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 497 "coach_lang_parser.ypp"
    {
        BUILDER.buildInfoMsg();
        BUILDER.setVer( 7 );
    }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 505 "coach_lang_parser.ypp"
    {
        BUILDER.buildAdviceMsg();
        BUILDER.setVer( 7 );
    }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 513 "coach_lang_parser.ypp"
    {
        BUILDER.buildTokenRule( (yyvsp[(2) - (5)]).getInt() );
    }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 517 "coach_lang_parser.ypp"
    {
        BUILDER.buildTokenClear();
    }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 528 "coach_lang_parser.ypp"
    {
        BUILDER.buildActPos();
    }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 532 "coach_lang_parser.ypp"
    {
        BUILDER.buildActHome();
    }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 536 "coach_lang_parser.ypp"
    {
        BUILDER.buildActBallToReg();
    }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 540 "coach_lang_parser.ypp"
    {
        BUILDER.buildActBallToPlayer();
    }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 544 "coach_lang_parser.ypp"
    {
        BUILDER.buildActMark();
    }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 548 "coach_lang_parser.ypp"
    {
        BUILDER.buildActMarkLinePlayer();
    }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 552 "coach_lang_parser.ypp"
    {
        BUILDER.buildActMarkLineReg();
    }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 556 "coach_lang_parser.ypp"
    {
        BUILDER.buildActOffsideLine();
    }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 560 "coach_lang_parser.ypp"
    {
        BUILDER.buildActHetType( (yyvsp[(3) - (4)]).getInt() );
    }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 564 "coach_lang_parser.ypp"
    {
        std::string str = rcss::stripQuotes( (yyvsp[(1) - (1)]).getStr() );
        if ( str.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildActNamed( str );
        }
    }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 576 "coach_lang_parser.ypp"
    {
        BUILDER.buildActPassReg();
        BUILDER.setVer( 8 );
    }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 581 "coach_lang_parser.ypp"
    {
        BUILDER.buildActPassUNum();
        BUILDER.setVer( 8 );
    }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 586 "coach_lang_parser.ypp"
    {
        BUILDER.buildActDribble();
        BUILDER.setVer( 8 );
    }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 591 "coach_lang_parser.ypp"
    {
        BUILDER.buildActClear();
        BUILDER.setVer( 8 );
    }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 596 "coach_lang_parser.ypp"
    {
        BUILDER.buildActShoot();
        BUILDER.setVer( 8 );
    }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 601 "coach_lang_parser.ypp"
    {
        BUILDER.buildActHold();
        BUILDER.setVer( 8 );
    }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 606 "coach_lang_parser.ypp"
    {
        BUILDER.buildActIntercept();
        BUILDER.setVer( 8 );
    }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 611 "coach_lang_parser.ypp"
    {
        BUILDER.buildActTackle();
        BUILDER.setVer( 8 );
    }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 619 "coach_lang_parser.ypp"
    {
        BUILDER.buildDirComm( (yyvsp[(2) - (6)]).getBool(), (yyvsp[(3) - (6)]).getBool() );
    }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 623 "coach_lang_parser.ypp"
    {
        std::string str = rcss::stripQuotes( (yyvsp[(1) - (1)]).getStr() );
        if ( str.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildDirNamed( str );
        }
    }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 637 "coach_lang_parser.ypp"
    {}
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 638 "coach_lang_parser.ypp"
    {}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 647 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondTrue();
    }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 651 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondFalse();
    }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 656 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondPlayerPos( (yyvsp[(3) - (8)]).getBool(), (yyvsp[(5) - (8)]).getInt(), (yyvsp[(6) - (8)]).getInt() );
    }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 660 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondBallPos();
    }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 664 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondBallOwner( (yyvsp[(3) - (5)]).getBool() );
    }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 668 "coach_lang_parser.ypp"
    {
         BUILDER.buildCondPlayMode( (yyvsp[(3) - (4)]).getPM() );
    }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 672 "coach_lang_parser.ypp"
    {
         BUILDER.buildCondAnd();
    }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 676 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondOr();
    }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 680 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondNot();
    }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 684 "coach_lang_parser.ypp"
    {
        std::string str = (yyvsp[(1) - (1)]).getStr();
        if ( str.length() > BUILDER.strVarSize() )
            YYERROR;
        else
            BUILDER.buildCondNamed( str );
    }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 692 "coach_lang_parser.ypp"
    {
        BUILDER.setVer( 8 );
    }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 696 "coach_lang_parser.ypp"
    {
        std::string var = (yyvsp[(3) - (5)]).getStr();
        if ( var.length() > BUILDER.strVarSize() )
            YYERROR;
        else
        {
            BUILDER.buildCondUNum( rcss::clang::UNum( (yyvsp[(3) - (5)]).getStr() ) );
            BUILDER.setVer( 8 );
        }
    }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 707 "coach_lang_parser.ypp"
    {
        std::string str = (yyvsp[(3) - (5)]).getStr();
        if ( str.length() > BUILDER.strVarSize() )
            YYERROR;
        else
        {
            BUILDER.buildCondUNum( str );
            BUILDER.setVer( 8 );
        }
    }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 727 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondTime( (yyvsp[(3) - (3)]).getInt(), (yyvsp[(2) - (3)]).getCompOp() );
    }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 731 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondTime( (yyvsp[(1) - (3)]).getInt(), (yyvsp[(2) - (3)]).getCompOp().swap() );
    }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 738 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondOppGoal( (yyvsp[(3) - (3)]).getInt(), (yyvsp[(2) - (3)]).getCompOp() );
    }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 742 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondOppGoal( (yyvsp[(1) - (3)]).getInt(), (yyvsp[(2) - (3)]).getCompOp().swap() );
    }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 749 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondOurGoal( (yyvsp[(3) - (3)]).getInt(), (yyvsp[(2) - (3)]).getCompOp() );
    }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 753 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondOurGoal( (yyvsp[(1) - (3)]).getInt(), (yyvsp[(2) - (3)]).getCompOp().swap() );
    }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 760 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondGoalDiff( (yyvsp[(3) - (3)]).getInt(), (yyvsp[(2) - (3)]).getCompOp() );
    }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 764 "coach_lang_parser.ypp"
    {
        BUILDER.buildCondGoalDiff( (yyvsp[(1) - (3)]).getInt(), (yyvsp[(2) - (3)]).getCompOp().swap() );
    }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 775 "coach_lang_parser.ypp"
    {
       BUILDER.buildAddToCondList();
    }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 779 "coach_lang_parser.ypp"
    {
        BUILDER.buildCreateCondList();
    }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 786 "coach_lang_parser.ypp"
    {
        BUILDER.buildRegNull();
    }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 790 "coach_lang_parser.ypp"
    {
        BUILDER.buildRegQuad();
        BUILDER.setVer( 7 );
    }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 795 "coach_lang_parser.ypp"
    {
        BUILDER.buildRegArc( (yyvsp[(4) - (8)]).getDoub(),
                             (yyvsp[(5) - (8)]).getDoub(),
                             (yyvsp[(6) - (8)]).getDoub(),
                             (yyvsp[(7) - (8)]).getDoub() );
    }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 802 "coach_lang_parser.ypp"
    {
        BUILDER.buildRegUnion();
    }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 806 "coach_lang_parser.ypp"
    {
        std::string str = rcss::stripQuotes( (yyvsp[(1) - (1)]).getStr() );
        if ( str.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildRegNamed( str );
        }
    }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 818 "coach_lang_parser.ypp"
    {
        BUILDER.buildRegPoint();
    }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 822 "coach_lang_parser.ypp"
    {
        BUILDER.buildRegTri();
        BUILDER.setVer( 8 );
    }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 827 "coach_lang_parser.ypp"
    {
        BUILDER.buildRegRec();
        BUILDER.setVer( 8 );
    }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 840 "coach_lang_parser.ypp"
    {
        BUILDER.buildPointSimple( (yyvsp[(3) - (5)]).getDoub(), (yyvsp[(4) - (5)]).getDoub() );
    }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 844 "coach_lang_parser.ypp"
    {
        BUILDER.buildPointRel( (yyvsp[(3) - (6)]).getDoub(), (yyvsp[(4) - (6)]).getDoub() );
    }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 848 "coach_lang_parser.ypp"
    {
        BUILDER.buildPointBall();
    }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 852 "coach_lang_parser.ypp"
    {
        BUILDER.buildPointPlayer( (yyvsp[(3) - (5)]).getBool(),
                                  rcss::clang::UNum( ( rcss::clang::UNum::unum_t )(yyvsp[(4) - (5)]).getInt() ) );
    }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 857 "coach_lang_parser.ypp"
    {
        std::string var = (yyvsp[(4) - (5)]).getStr();
        if ( var.length() > BUILDER.strVarSize() )
            YYERROR;
        else
        {
            BUILDER.buildPointPlayer( (yyvsp[(3) - (5)]).getBool(),
                                      rcss::clang::UNum( (yyvsp[(4) - (5)]).getStr() ) );
            BUILDER.setVer( 8 );
        }
    }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 869 "coach_lang_parser.ypp"
    {
        std::string str = (yyvsp[(4) - (5)]).getStr();
        if ( str.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildPointPlayer( (yyvsp[(3) - (5)]).getBool(), str );
            BUILDER.setVer( 8 );
        }
    }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 882 "coach_lang_parser.ypp"
    {

    }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 889 "coach_lang_parser.ypp"
    {
        BUILDER.buildPointArith( (yyvsp[(2) - (3)]).getArithOp() );
        BUILDER.setVer( 8 );
    }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 894 "coach_lang_parser.ypp"
    {
        BUILDER.buildPointArith( (yyvsp[(2) - (3)]).getArithOp() );
        BUILDER.setVer( 8 );
    }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 899 "coach_lang_parser.ypp"
    {
        BUILDER.buildPointArith( (yyvsp[(2) - (3)]).getArithOp() );
        BUILDER.setVer( 8 );
    }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 904 "coach_lang_parser.ypp"
    {
        BUILDER.buildPointArith( (yyvsp[(2) - (3)]).getArithOp() );
        BUILDER.setVer( 8 );
    }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 909 "coach_lang_parser.ypp"
    {

    }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 916 "coach_lang_parser.ypp"
    {
        (yyval) = (double)(yyvsp[(1) - (1)]).getInt();
    }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 920 "coach_lang_parser.ypp"
    {
        (yyval) = (yyvsp[(1) - (1)]);
    }
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 927 "coach_lang_parser.ypp"
    {
        BUILDER.buildUNumSet();
    }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 938 "coach_lang_parser.ypp"
    {
        BUILDER.buildUNum( rcss::clang::UNum( ( rcss::clang::UNum::unum_t )(yyvsp[(1) - (1)]).getInt() ) );
    }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 942 "coach_lang_parser.ypp"
    {
        std::string var = (yyvsp[(1) - (1)]).getStr();
        if ( var.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildUNum( rcss::clang::UNum( var ) );
            BUILDER.setVer( 8 );
        }
    }
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 955 "coach_lang_parser.ypp"
    {
        std::string str = rcss::stripQuotes( (yyvsp[(1) - (1)]).getStr() );
        if ( str.length() > BUILDER.strVarSize() )
        {
            YYERROR;
        }
        else
        {
            BUILDER.buildUNum( rcss::clang::UNum( str ) );
            BUILDER.setVer( 8 );
        }
    }
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 974 "coach_lang_parser.ypp"
    {
        BUILDER.buildBallMoveToken( (yyvsp[(2) - (2)]).getBMT() );
    }
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 978 "coach_lang_parser.ypp"
    {
        BUILDER.buildBallMoveToken( (yyvsp[(1) - (1)]).getBMT() );
    }
    break;


/* Line 1787 of yacc.c  */
#line 2797 "coach_lang_parser.cpp"
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


/* Line 2050 of yacc.c  */
#line 983 "coach_lang_parser.ypp"



extern "C" void parse()
{
  // dumby function use to make the library easy to find with autoconf
}

void yyerror (const char*)
{
/*   std::cerr << s << std::endl;*/
  //do nothing
}

int yyerror (char* s)
{
	yyerror ( (const char*)s );
	return 0;
}
