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
#line 26 "player_command_parser.ypp"

#include "pcombuilder.h"
#include "pcomparser.h"


#define    yyparse    RCSS_PCOM_parse

void yyerror( const char* s );
int yyerror( char* s );

#define YYPARSE_PARAM param

namespace
{
  rcss::pcom::Parser::Param&
  getParam( void* param )
  {
    static rcss::pcom::Parser::Param* cached_param
                   = reinterpret_cast< rcss::pcom::Parser::Param* >( param );
    if( cached_param != param ){
      cached_param = reinterpret_cast< rcss::pcom::Parser::Param* >( param );
    }
    return *cached_param;
  }

  inline rcss::pcom::Builder& getBuilder( void* param )
  {
    return getParam( param ).getBuilder();
  }

#define YYSTYPE rcss::pcom::Parser::Lexer::Holder

  inline int yylex( YYSTYPE* holder, rcss::pcom::Parser::Param& param )
  {
    int rval = param.getLexer().lex( *holder );
//    cout << rval << endl;
    return rval;
  }

}

#define YYLEX_PARAM getParam( param )

#define BUILDER getBuilder( param )


/* Line 371 of yacc.c  */
#line 115 "player_command_parser.cpp"

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
     RCSS_PCOM_INT = 258,
     RCSS_PCOM_REAL = 259,
     RCSS_PCOM_STR = 260,
     RCSS_PCOM_LP = 261,
     RCSS_PCOM_RP = 262,
     RCSS_PCOM_DASH = 263,
     RCSS_PCOM_TURN = 264,
     RCSS_PCOM_TURN_NECK = 265,
     RCSS_PCOM_KICK = 266,
     RCSS_PCOM_LONG_KICK = 267,
     RCSS_PCOM_CATCH = 268,
     RCSS_PCOM_SAY = 269,
     RCSS_PCOM_UNQ_SAY = 270,
     RCSS_PCOM_SENSE_BODY = 271,
     RCSS_PCOM_SCORE = 272,
     RCSS_PCOM_MOVE = 273,
     RCSS_PCOM_CHANGE_VIEW = 274,
     RCSS_PCOM_COMPRESSION = 275,
     RCSS_PCOM_BYE = 276,
     RCSS_PCOM_DONE = 277,
     RCSS_PCOM_POINTTO = 278,
     RCSS_PCOM_ATTENTIONTO = 279,
     RCSS_PCOM_TACKLE = 280,
     RCSS_PCOM_CLANG = 281,
     RCSS_PCOM_EAR = 282,
     RCSS_PCOM_SYNCH_SEE = 283,
     RCSS_PCOM_VIEW_WIDTH_NARROW = 284,
     RCSS_PCOM_VIEW_WIDTH_NORMAL = 285,
     RCSS_PCOM_VIEW_WIDTH_WIDE = 286,
     RCSS_PCOM_VIEW_QUALITY_LOW = 287,
     RCSS_PCOM_VIEW_QUALITY_HIGH = 288,
     RCSS_PCOM_ON = 289,
     RCSS_PCOM_OFF = 290,
     RCSS_PCOM_TRUE = 291,
     RCSS_PCOM_FALSE = 292,
     RCSS_PCOM_OUR = 293,
     RCSS_PCOM_OPP = 294,
     RCSS_PCOM_LEFT = 295,
     RCSS_PCOM_RIGHT = 296,
     RCSS_PCOM_EAR_PARTIAL = 297,
     RCSS_PCOM_EAR_COMPLETE = 298,
     RCSS_PCOM_CLANG_VERSION = 299,
     RCSS_PCOM_ERROR = 300
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

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
#line 224 "player_command_parser.cpp"

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
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   126

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
       2,     2,     2,     2,     2,     2,     2,     2,    41,     2,
       2,     2,     2,     2,    43,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    42,    44,    45,    46,
      47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    53,    59,    64,    69,    75,
      81,    86,    88,    93,    97,   101,   107,   113,   118,   120,
     122,   124,   126,   128,   133,   137,   141,   147,   152,   158,
     164,   169,   174,   180,   189,   198,   207,   215,   223,   231,
     238,   242,   244,   246,   248,   250,   252,   254,   256,   258,
     260,   262,   264,   266,   268
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    50,    -1,    49,    50,    -1,    51,    -1,
      52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,
      64,    -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,
      69,    -1,    70,    -1,    71,    -1,    72,    -1,     6,     8,
      77,     7,    -1,     6,     8,    77,    77,     7,    -1,     6,
       9,    77,     7,    -1,     6,    10,    77,     7,    -1,     6,
      11,    77,    77,     7,    -1,     6,    12,    77,    77,     7,
      -1,     6,    13,    77,     7,    -1,    15,    -1,     6,    14,
       5,     7,    -1,     6,    16,     7,    -1,     6,    17,     7,
      -1,     6,    18,    77,    77,     7,    -1,     6,    19,    62,
      63,     7,    -1,     6,    19,    62,     7,    -1,    29,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,     6,    20,
       3,     7,    -1,     6,    21,     7,    -1,     6,    22,     7,
      -1,     6,    23,    77,    77,     7,    -1,     6,    23,    35,
       7,    -1,     6,    24,    75,     3,     7,    -1,     6,    24,
       5,     3,     7,    -1,     6,    24,    35,     7,    -1,     6,
      25,    77,     7,    -1,     6,    25,    77,    74,     7,    -1,
       6,    26,     6,    46,     3,     3,     7,     7,    -1,     6,
      27,     6,    73,    75,    76,     7,     7,    -1,     6,    27,
       6,    73,     5,    76,     7,     7,    -1,     6,    27,     6,
      73,    75,     7,     7,    -1,     6,    27,     6,    73,     5,
       7,     7,    -1,     6,    27,     6,    73,    76,     7,     7,
      -1,     6,    27,     6,    73,     7,     7,    -1,     6,    28,
       7,    -1,    34,    -1,    35,    -1,    34,    -1,    35,    -1,
      36,    -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,
      42,    -1,    44,    -1,    45,    -1,     3,    -1,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   139,   139,   140,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   165,   169,   175,   181,   187,   193,
     199,   205,   209,   215,   221,   227,   233,   237,   243,   247,
     251,   257,   261,   267,   273,   279,   285,   289,   295,   299,
     303,   309,   314,   320,   326,   330,   334,   338,   342,   346,
     352,   358,   362,   368,   372,   376,   380,   386,   390,   394,
     398,   404,   408,   414,   418
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RCSS_PCOM_INT", "RCSS_PCOM_REAL",
  "RCSS_PCOM_STR", "\"(\"", "\")\"", "\"dash\"", "\"turn\"",
  "\"turn_neck\"", "\"kick\"", "\"long_kick\"", "\"catch\"", "\"say\"",
  "\"unquoted say\"", "\"sense_body\"", "\"score\"", "\"move\"",
  "\"change_view\"", "\"compression\"", "\"bye\"", "\"done\"",
  "\"pointto\"", "\"attentionto\"", "\"tackle\"", "\"clang\"", "\"ear\"",
  "\"synch_see\"", "\"narrow\"", "\"normal\"", "\"wide\"", "\"low\"",
  "\"high\"", "\"on\"", "\"off\"", "\"true\"", "\"false\"", "\"our\"",
  "\"opp\"", "RCSS_PCOM_LEFT", "'l'", "RCSS_PCOM_RIGHT", "'r'",
  "\"partial\"", "\"complete\"", "\"ver\"", "RCSS_PCOM_ERROR", "$accept",
  "command_list", "command", "dash_com", "turn_com", "turn_neck_com",
  "kick_com", "long_kick_com", "catch_com", "say_com", "sense_body_com",
  "score_com", "move_com", "change_view_com", "view_width", "view_quality",
  "compression_com", "bye_com", "done_com", "pointto_com",
  "attentionto_com", "tackle_com", "clang_com", "ear_com", "synch_see_com",
  "on_off", "boolean_value", "team_side", "partial_complete",
  "floating_point_number", YY_NULL
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
     295,   108,   296,   114,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    51,    51,    52,    53,    54,    55,
      56,    57,    57,    58,    59,    60,    61,    61,    62,    62,
      62,    63,    63,    64,    65,    66,    67,    67,    68,    68,
      68,    69,    69,    70,    71,    71,    71,    71,    71,    71,
      72,    73,    73,    74,    74,    74,    74,    75,    75,    75,
      75,    76,    76,    77,    77
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     4,     4,     5,     5,
       4,     1,     4,     3,     3,     5,     5,     4,     1,     1,
       1,     1,     1,     4,     3,     3,     5,     4,     5,     5,
       4,     4,     5,     8,     8,     8,     7,     7,     7,     6,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    31,     0,     2,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     3,    73,    74,     0,
       0,     0,     0,     0,     0,     0,    33,    34,     0,    38,
      39,    40,     0,     0,    44,    45,     0,     0,     0,     0,
      67,    68,    69,    70,     0,     0,     0,     0,    60,    24,
       0,    26,    27,     0,     0,    30,    32,     0,    37,    41,
      42,     0,    43,    47,     0,     0,    50,     0,    51,    63,
      64,    65,    66,     0,     0,    61,    62,     0,    25,    28,
      29,    35,    36,    46,    49,    48,    52,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,    57,     0,    56,     0,    58,    53,    55,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    62,    91,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   107,   103,    74,   123,    49
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -109
static const yytype_int8 yypact[] =
{
       6,    56,  -109,    16,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,    25,    25,    25,    25,    25,
      25,    38,    23,    51,    25,   -12,    57,    52,    54,    21,
      15,    25,    65,    81,    83,  -109,  -109,  -109,  -109,    82,
      84,    85,    25,    25,    86,    87,  -109,  -109,    25,  -109,
    -109,  -109,    30,    88,  -109,  -109,    89,    25,    94,    91,
    -109,  -109,  -109,  -109,    96,    -1,    42,    17,  -109,  -109,
      93,  -109,  -109,    95,    97,  -109,  -109,    98,  -109,  -109,
    -109,    99,  -109,  -109,   100,   101,  -109,   102,  -109,  -109,
    -109,  -109,  -109,   103,   108,  -109,  -109,     0,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,   109,     2,   106,
    -109,  -109,     4,   107,   110,   111,   112,  -109,   113,   114,
     115,   116,  -109,   117,  -109,   118,  -109,  -109,  -109,  -109
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -109,  -109,   123,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,    -6,  -108,   -26
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      50,    51,    52,    53,    54,   118,    98,   119,    58,   125,
     126,   128,     1,    67,   129,    75,    45,    59,    60,    61,
      68,     2,     1,    80,    47,    48,    83,    84,    47,    48,
      56,     2,    87,    99,   100,   101,   102,    88,    70,    71,
      72,    94,    73,    55,   120,   121,   120,   121,   120,   121,
      69,   105,   106,    70,    71,    72,    66,    73,    57,    64,
      63,    65,    89,    90,    25,    26,    27,    28,    29,    30,
      31,    76,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    47,    48,    77,   104,    79,
      78,    81,    82,    85,    86,    92,    93,    95,    96,    97,
     108,   122,   109,     0,   110,   111,   112,   113,   114,   115,
     116,   117,   124,   127,   130,     0,     0,   131,   132,   133,
     134,   135,   136,   137,   138,   139,    46
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-109)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      26,    27,    28,    29,    30,     5,     7,     7,    34,     7,
     118,     7,     6,    39,   122,    41,     0,    29,    30,    31,
       5,    15,     6,    49,     3,     4,    52,    53,     3,     4,
       7,    15,    58,    34,    35,    36,    37,     7,    38,    39,
      40,    67,    42,     5,    44,    45,    44,    45,    44,    45,
      35,    34,    35,    38,    39,    40,    35,    42,     7,     7,
       3,     7,    32,    33,     8,     9,    10,    11,    12,    13,
      14,     6,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     3,     4,     6,    46,     7,
       7,     7,     7,     7,     7,     7,     7,     3,     7,     3,
       7,   107,     7,    -1,     7,     7,     7,     7,     7,     7,
       7,     3,     3,     7,     7,    -1,    -1,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     3
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    15,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     8,     9,    10,    11,    12,
      13,    14,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,    50,     3,     4,    77,
      77,    77,    77,    77,    77,     5,     7,     7,    77,    29,
      30,    31,    62,     3,     7,     7,    35,    77,     5,    35,
      38,    39,    40,    42,    75,    77,     6,     6,     7,     7,
      77,     7,     7,    77,    77,     7,     7,    77,     7,    32,
      33,    63,     7,     7,    77,     3,     7,     3,     7,    34,
      35,    36,    37,    74,    46,    34,    35,    73,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     3,     5,     7,
      44,    45,    75,    76,     3,     7,    76,     7,     7,    76,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7
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
        case 24:
/* Line 1787 of yacc.c  */
#line 166 "player_command_parser.ypp"
    {
             BUILDER.dash( (yyvsp[(3) - (4)]. m_double ) );
           }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 170 "player_command_parser.ypp"
    {
	           BUILDER.dash( (yyvsp[(3) - (5)]. m_double ), (yyvsp[(4) - (5)]. m_double ) );
           }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 176 "player_command_parser.ypp"
    {
             BUILDER.turn( (yyvsp[(3) - (4)]. m_double ) );
           }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 182 "player_command_parser.ypp"
    {
                  BUILDER.turn_neck( (yyvsp[(3) - (4)]. m_double ) );
                }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 188 "player_command_parser.ypp"
    {
             BUILDER.kick( (yyvsp[(3) - (5)]. m_double ), (yyvsp[(4) - (5)]. m_double ) );
           }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 194 "player_command_parser.ypp"
    {
             BUILDER.long_kick( (yyvsp[(3) - (5)]. m_double ), (yyvsp[(4) - (5)]. m_double ) );
           }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 200 "player_command_parser.ypp"
    {
              BUILDER.goalieCatch( (yyvsp[(3) - (4)]. m_double ) );
            }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 206 "player_command_parser.ypp"
    {
            BUILDER.say( (yyvsp[(1) - (1)]. m_str ) );
          }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 210 "player_command_parser.ypp"
    {
            BUILDER.say( rcss::stripQuotes( (yyvsp[(3) - (4)]. m_str ) ) );
          }
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 216 "player_command_parser.ypp"
    {
                   BUILDER.sense_body();
                 }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 222 "player_command_parser.ypp"
    {
              BUILDER.score();
            }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 228 "player_command_parser.ypp"
    {
             BUILDER.move( (yyvsp[(3) - (5)]. m_double ), (yyvsp[(4) - (5)]. m_double ) );
           }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 234 "player_command_parser.ypp"
    {
                   BUILDER.change_view( (yyvsp[(3) - (5)]. m_view_w ), (yyvsp[(4) - (5)]. m_view_q ) );
                 }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 238 "player_command_parser.ypp"
    {
                   BUILDER.change_view( (yyvsp[(3) - (4)]. m_view_w ) );
                 }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 244 "player_command_parser.ypp"
    {
               (yyval. m_view_w ) = rcss::pcom::NARROW;
             }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 248 "player_command_parser.ypp"
    {
               (yyval. m_view_w ) = rcss::pcom::NORMAL;
             }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 252 "player_command_parser.ypp"
    {
               (yyval. m_view_w ) = rcss::pcom::WIDE;
             }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 258 "player_command_parser.ypp"
    {
                 (yyval. m_view_q ) = rcss::pcom::LOW;
               }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 262 "player_command_parser.ypp"
    {
                 (yyval. m_view_q ) = rcss::pcom::HIGH;
               }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 268 "player_command_parser.ypp"
    {
                    BUILDER.compression( (yyvsp[(3) - (4)]. m_int ) );
                  }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 274 "player_command_parser.ypp"
    {
            BUILDER.bye();
          }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 280 "player_command_parser.ypp"
    {
             BUILDER.done();
           }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 286 "player_command_parser.ypp"
    {
                BUILDER.pointto( true, (yyvsp[(3) - (5)]. m_double ), (yyvsp[(4) - (5)]. m_double ) );
              }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 290 "player_command_parser.ypp"
    {
                BUILDER.pointto( false, 0.0, 0.0 );
              }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 296 "player_command_parser.ypp"
    {
                    BUILDER.attentionto( true, (yyvsp[(3) - (5)]. m_team ), "", (yyvsp[(4) - (5)]. m_int ) );
                  }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 300 "player_command_parser.ypp"
    {
                    BUILDER.attentionto( true, rcss::pcom::UNKNOWN_TEAM, (yyvsp[(3) - (5)]. m_str ), (yyvsp[(4) - (5)]. m_int ) );
                  }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 304 "player_command_parser.ypp"
    {
                    BUILDER.attentionto( false, rcss::pcom::UNKNOWN_TEAM, "", 0 );
                  }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 310 "player_command_parser.ypp"
    {
               BUILDER.tackle( (yyvsp[(3) - (4)]. m_double ) );
             }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 315 "player_command_parser.ypp"
    {
               BUILDER.tackle( (yyvsp[(3) - (5)]. m_double ), (yyvsp[(4) - (5)]. m_bool ) );
             }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 321 "player_command_parser.ypp"
    {
             BUILDER.clang( (yyvsp[(5) - (8)]. m_int ), (yyvsp[(6) - (8)]. m_int ) );
           }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 327 "player_command_parser.ypp"
    {
            BUILDER.ear( (yyvsp[(4) - (8)]. m_bool ), (yyvsp[(5) - (8)]. m_team ), "", (yyvsp[(6) - (8)]. m_ear ) );
          }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 331 "player_command_parser.ypp"
    {
            BUILDER.ear( (yyvsp[(4) - (8)]. m_bool ), rcss::pcom::UNKNOWN_TEAM, (yyvsp[(5) - (8)]. m_str ), (yyvsp[(6) - (8)]. m_ear ) );
          }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 335 "player_command_parser.ypp"
    {
            BUILDER.ear( (yyvsp[(4) - (7)]. m_bool ), (yyvsp[(5) - (7)]. m_team ), "", rcss::pcom::UNKNOWN_EAR_MODE );
          }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 339 "player_command_parser.ypp"
    {
            BUILDER.ear( (yyvsp[(4) - (7)]. m_bool ), rcss::pcom::UNKNOWN_TEAM, (yyvsp[(5) - (7)]. m_str ), rcss::pcom::UNKNOWN_EAR_MODE );
          }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 343 "player_command_parser.ypp"
    {
            BUILDER.ear( (yyvsp[(4) - (7)]. m_bool ), rcss::pcom::UNKNOWN_TEAM, "", (yyvsp[(5) - (7)]. m_ear ) );
          }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 347 "player_command_parser.ypp"
    {
            BUILDER.ear( (yyvsp[(4) - (6)]. m_bool ), rcss::pcom::UNKNOWN_TEAM, "", rcss::pcom::UNKNOWN_EAR_MODE );
          }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 353 "player_command_parser.ypp"
    {
                   BUILDER.synch_see();
                }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 359 "player_command_parser.ypp"
    {
           (yyval. m_bool ) = true;
         }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 363 "player_command_parser.ypp"
    {
           (yyval. m_bool ) = false;
         }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 369 "player_command_parser.ypp"
    {
                  (yyval. m_bool ) = true;
                }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 373 "player_command_parser.ypp"
    {
                  (yyval. m_bool ) = false;
                }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 377 "player_command_parser.ypp"
    {
                  (yyval. m_bool ) = true;
                }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 381 "player_command_parser.ypp"
    {
                  (yyval. m_bool ) = false;
                }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 387 "player_command_parser.ypp"
    {
              (yyval. m_team ) = rcss::pcom::OUR;
            }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 391 "player_command_parser.ypp"
    {
              (yyval. m_team ) = rcss::pcom::OPP;
            }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 395 "player_command_parser.ypp"
    {
              (yyval. m_team ) = rcss::pcom::LEFT_SIDE;
            }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 399 "player_command_parser.ypp"
    {
              (yyval. m_team ) = rcss::pcom::RIGHT_SIDE;
            }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 405 "player_command_parser.ypp"
    {
                     (yyval. m_ear ) = rcss::pcom::PARTIAL;
                   }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 409 "player_command_parser.ypp"
    {
                     (yyval. m_ear ) = rcss::pcom::COMPLETE;
                   }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 415 "player_command_parser.ypp"
    {
                          (yyval. m_double ) = static_cast< double >( (yyvsp[(1) - (1)]. m_int ) );
                        }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 419 "player_command_parser.ypp"
    {
                          (yyval. m_double ) = (yyvsp[(1) - (1)]. m_double );
                        }
    break;


/* Line 1787 of yacc.c  */
#line 1965 "player_command_parser.cpp"
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
#line 424 "player_command_parser.ypp"



void yyerror (const char* s)
{
  std::cerr << s << std::endl;
  //do nothing
}

int yyerror (char* s)
{
  yyerror ( (const char*)s );
  return 0;
}
