/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         Cminus_parse
#define yylex           Cminus_lex
#define yyerror         Cminus_error
#define yylval          Cminus_lval
#define yychar          Cminus_char
#define yydebug         Cminus_debug
#define yynerrs         Cminus_nerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 7 "CminusParser.y"

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <util/general.h>
#include <util/symtab.h>
#include <util/symtab_stack.h>
#include <util/dlink.h>
#include <util/string_utils.h>

#define SYMTABLE_SIZE 100
#define SYMTAB_VALUE_FIELD     "value"

/*********************EXTERNAL DECLARATIONS***********************/

EXTERN(void,Cminus_error,(const char*));

EXTERN(int,Cminus_lex,(void));

char *fileName;

// start of linked list
DLinkNode * final; // store the final version for print 
DLinkNode * temp; // temp to load into final 
DLinkNode * finalPrint; // print to load into final 


// data declaration struc
DLinkNode * dataDec; 
DLinkNode * dataTemp;
DLinkNode * print;
DLinkNode * StringNode;

// Just a note but most of the Buffor names are nonsense 

//counts for loops
int dataPrints = 0; 
int finalPrints = 0; 

// list of variables for .comm
int varCount = 0;
int strings = 0; 
int i = 0;

// data structure for registers
char regs[14][6];
int aval[14];






SymTable symtab;

extern int Cminus_lineno;

extern FILE *Cminus_in;

/* Line 371 of yacc.c  */
#line 136 "CminusParser.c"

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
   by #include "CminusParser.h".  */
#ifndef YY_CMINUS_CMINUSPARSER_H_INCLUDED
# define YY_CMINUS_CMINUSPARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int Cminus_debug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AND = 258,
     ELSE = 259,
     EXIT = 260,
     FOR = 261,
     IF = 262,
     INTEGER = 263,
     NOT = 264,
     OR = 265,
     READ = 266,
     WHILE = 267,
     WRITE = 268,
     LBRACE = 269,
     RBRACE = 270,
     LE = 271,
     LT = 272,
     GE = 273,
     GT = 274,
     EQ = 275,
     NE = 276,
     ASSIGN = 277,
     COMMA = 278,
     SEMICOLON = 279,
     LBRACKET = 280,
     RBRACKET = 281,
     LPAREN = 282,
     RPAREN = 283,
     PLUS = 284,
     TIMES = 285,
     IDENTIFIER = 286,
     DIVIDE = 287,
     RETURN = 288,
     STRING = 289,
     INTCON = 290,
     MINUS = 291,
     DIVDE = 292
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE Cminus_lval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int Cminus_parse (void *YYPARSE_PARAM);
#else
int Cminus_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int Cminus_parse (void);
#else
int Cminus_parse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_CMINUS_CMINUSPARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 239 "CminusParser.c"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   146

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  130

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

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
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    12,    15,    18,    20,
      26,    29,    33,    38,    40,    44,    46,    51,    53,    55,
      57,    59,    61,    63,    65,    67,    72,    77,    80,    83,
      87,    91,    95,    97,   103,   109,   115,   119,   122,   126,
     128,   131,   133,   137,   141,   144,   146,   150,   154,   158,
     162,   166,   170,   172,   176,   180,   182,   186,   190,   192,
     194,   198,   202,   204,   209,   211
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    40,    -1,    45,    40,    -1,    41,    40,
      -1,    -1,    42,    44,    -1,    43,    45,    -1,    43,    -1,
      48,    31,    27,    28,    14,    -1,    61,    15,    -1,    48,
      46,    24,    -1,    45,    48,    46,    24,    -1,    47,    -1,
      46,    23,    47,    -1,    31,    -1,    31,    25,    35,    26,
      -1,     8,    -1,    50,    -1,    51,    -1,    54,    -1,    57,
      -1,    58,    -1,    59,    -1,    60,    -1,    67,    22,    62,
      24,    -1,     7,    52,     4,    60,    -1,     7,    52,    -1,
      53,    60,    -1,    27,    62,    28,    -1,    56,    55,    49,
      -1,    27,    62,    28,    -1,    12,    -1,    11,    27,    67,
      28,    24,    -1,    13,    27,    62,    28,    24,    -1,    13,
      27,    68,    28,    24,    -1,    33,    62,    24,    -1,     5,
      24,    -1,    14,    61,    15,    -1,    49,    -1,    61,    49,
      -1,    63,    -1,    62,    10,    63,    -1,    62,     3,    63,
      -1,     9,    63,    -1,    64,    -1,    63,    20,    64,    -1,
      63,    21,    64,    -1,    63,    16,    64,    -1,    63,    17,
      64,    -1,    63,    18,    64,    -1,    63,    19,    64,    -1,
      65,    -1,    64,    29,    65,    -1,    64,    36,    65,    -1,
      66,    -1,    65,    30,    66,    -1,    65,    32,    66,    -1,
      67,    -1,    69,    -1,    31,    27,    28,    -1,    27,    62,
      28,    -1,    31,    -1,    31,    25,    62,    26,    -1,    34,
      -1,    35,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   126,   132,   137,   142,   148,   152,   158,
     164,   171,   183,   190,   195,   201,   230,   237,   243,   247,
     251,   255,   259,   263,   267,   273,   305,   309,   316,   322,
     329,   335,   341,   348,   399,   443,   502,   508,   514,   520,
     524,   530,   535,   550,   565,   610,   615,   644,   673,   702,
     731,   760,   792,   797,   813,   833,   838,   859,   895,   923,
     938,   942,   949,   954,   960,   971
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ELSE", "EXIT", "FOR", "IF",
  "INTEGER", "NOT", "OR", "READ", "WHILE", "WRITE", "LBRACE", "RBRACE",
  "LE", "LT", "GE", "GT", "EQ", "NE", "ASSIGN", "COMMA", "SEMICOLON",
  "LBRACKET", "RBRACKET", "LPAREN", "RPAREN", "PLUS", "TIMES",
  "IDENTIFIER", "DIVIDE", "RETURN", "STRING", "INTCON", "MINUS", "DIVDE",
  "$accept", "Program", "Procedures", "ProcedureDecl", "ProcedureHead",
  "FunctionDecl", "ProcedureBody", "DeclList", "IdentifierList", "VarDecl",
  "Type", "Statement", "Assignment", "IfStatement", "TestAndThen", "Test",
  "WhileStatement", "WhileExpr", "WhileToken", "IOStatement",
  "ReturnStatement", "ExitStatement", "CompoundStatement", "StatementList",
  "Expr", "SimpleExpr", "AddExpr", "MulExpr", "Factor", "Variable",
  "StringConstant", "Constant", YY_NULL
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
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    39,    40,    40,    41,    42,    42,    43,
      44,    45,    45,    46,    46,    47,    47,    48,    49,    49,
      49,    49,    49,    49,    49,    50,    51,    51,    52,    53,
      54,    55,    56,    57,    57,    57,    58,    59,    60,    61,
      61,    62,    62,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    64,    64,    64,    65,    65,    65,    66,    66,
      66,    66,    67,    67,    68,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     2,     2,     1,     5,
       2,     3,     4,     1,     3,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     2,     2,     3,
       3,     3,     1,     5,     5,     5,     3,     2,     3,     1,
       2,     1,     3,     3,     2,     1,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     1,
       3,     3,     1,     4,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,    17,     0,     2,     5,     0,     8,     5,     0,     1,
       4,     0,     0,     0,     0,    32,     0,     0,    62,     0,
       6,    39,    18,    19,    20,     0,    21,    22,    23,    24,
       0,     0,     7,     0,     3,     0,    15,     0,    13,     0,
      37,     0,    27,     0,     0,     0,     0,     0,     0,     0,
      62,    65,     0,    41,    45,    52,    55,    58,    59,     0,
       0,    10,    40,     0,     0,    15,     0,     0,     0,     0,
      11,     0,     0,    28,     0,    64,     0,     0,    38,     0,
      44,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,    12,
       0,     0,    14,    29,    26,     0,     0,     0,    63,    61,
      60,    43,    42,    48,    49,    50,    51,    46,    47,    53,
      54,    56,    57,    31,    25,    16,     9,    33,    34,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,    20,     7,    37,    38,
       8,    21,    22,    23,    42,    43,    24,    60,    25,    26,
      27,    28,    29,    30,    52,    53,    54,    55,    56,    57,
      77,    58
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -65
static const yytype_int8 yypact[] =
{
      30,   -65,    11,   -65,    30,    49,    30,    30,   -14,   -65,
     -65,    36,   -21,    20,    60,   -65,    64,    49,   100,    37,
     -65,   -65,   -65,   -65,   -65,    72,   -65,   -65,   -65,   -65,
       9,   104,    30,    76,   -65,   -14,    32,    52,   -65,   101,
     -65,    37,   123,   115,    99,    39,    38,    37,    66,    37,
      54,   -65,    85,    95,   -23,    68,   -65,   -65,   -65,    37,
      49,   -65,   -65,    37,    76,   106,    82,    97,   105,    76,
     -65,    16,   115,   -65,   107,   -65,    55,   108,   -65,     5,
      95,    74,   109,    66,    66,   -65,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    75,   -65,    86,   -65,
     112,   120,   -65,   -65,   -65,   116,   117,   118,   -65,   -65,
     -65,    95,    95,   -23,   -23,   -23,   -23,   -23,   -23,    68,
      68,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,    23,   -65,   -65,   -65,   -65,   133,   -31,    77,
       3,   -28,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -38,   126,    45,   -47,    31,   -64,    29,    -5,
     -65,   -65
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      31,    80,    62,    40,    66,    73,    92,    11,    83,    33,
      35,     9,    31,    93,    12,    84,    13,    36,    62,    83,
      14,    15,    16,    17,    61,    31,    84,    10,   119,   120,
      34,   108,    97,    66,   104,    64,   111,   112,     1,    74,
      18,    31,    19,    12,   103,    13,    48,    41,    48,    14,
      15,    16,    17,    78,    12,    31,    13,    67,    83,    68,
      14,    15,    16,    17,    49,    84,    49,    39,    50,    18,
      50,    19,    51,    75,    51,    69,    70,    83,    83,    47,
      18,    82,    19,   106,    84,    84,    71,    44,    83,    83,
      76,    45,    79,    49,    81,    84,    84,    50,    94,    59,
      95,    51,   109,   123,    96,    69,    99,    65,    98,    85,
     124,    86,    87,    88,    89,    90,    91,   113,   114,   115,
     116,   117,   118,   121,   122,    47,    63,    72,    68,    17,
      18,    67,   100,   101,   126,   105,   107,   110,   125,    32,
     127,   128,   129,    46,     0,     0,   102
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-65)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       5,    48,    30,    24,    35,    43,    29,     4,     3,     6,
       7,     0,    17,    36,     5,    10,     7,    31,    46,     3,
      11,    12,    13,    14,    15,    30,    10,     4,    92,    93,
       7,    26,    60,    64,    72,    32,    83,    84,     8,    44,
      31,    46,    33,     5,    28,     7,     9,    27,     9,    11,
      12,    13,    14,    15,     5,    60,     7,    25,     3,    27,
      11,    12,    13,    14,    27,    10,    27,    31,    31,    31,
      31,    33,    35,    34,    35,    23,    24,     3,     3,    25,
      31,    27,    33,    28,    10,    10,    41,    27,     3,     3,
      45,    27,    47,    27,    49,    10,    10,    31,    30,    27,
      32,    35,    28,    28,    59,    23,    24,    31,    63,    24,
      24,    16,    17,    18,    19,    20,    21,    86,    87,    88,
      89,    90,    91,    94,    95,    25,    22,     4,    27,    14,
      31,    25,    35,    28,    14,    28,    28,    28,    26,     6,
      24,    24,    24,    17,    -1,    -1,    69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    39,    40,    41,    42,    43,    45,    48,     0,
      40,    48,     5,     7,    11,    12,    13,    14,    31,    33,
      44,    49,    50,    51,    54,    56,    57,    58,    59,    60,
      61,    67,    45,    48,    40,    48,    31,    46,    47,    31,
      24,    27,    52,    53,    27,    27,    61,    25,     9,    27,
      31,    35,    62,    63,    64,    65,    66,    67,    69,    27,
      55,    15,    49,    22,    48,    31,    46,    25,    27,    23,
      24,    62,     4,    60,    67,    34,    62,    68,    15,    62,
      63,    62,    27,     3,    10,    24,    16,    17,    18,    19,
      20,    21,    29,    36,    30,    32,    62,    49,    62,    24,
      35,    28,    47,    28,    60,    28,    28,    28,    26,    28,
      28,    63,    63,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    28,    24,    26,    14,    24,    24,    24
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

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


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
        case 2:
/* Line 1792 of yacc.c  */
#line 122 "CminusParser.y"
    {
			
			//printf("<Program> -> <Procedures>\n");
		}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 127 "CminusParser.y"
    {
			//printf("<Program> -> <DeclList> <Procedures>\n");
		}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 133 "CminusParser.y"
    {
			//printf("<Procedures> -> <ProcedureDecl> <Procedures>\n");
		}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 137 "CminusParser.y"
    {
			//printf("<Procedures> -> epsilon\n");
		}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 143 "CminusParser.y"
    {
			//printf("<ProcedureDecl> -> <ProcedureHead> <ProcedureBody>\n");
		}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 149 "CminusParser.y"
    {
			//printf("<ProcedureHead> -> <FunctionDecl> <DeclList>\n");
		}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 153 "CminusParser.y"
    {
			//printf("<ProcedureHead> -> <FunctionDecl>\n");
		}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 159 "CminusParser.y"
    {
			//printf("<FunctionDecl> ->  <Type> <IDENTIFIER> <LP> <RP> <LBR>\n"); 
		}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 165 "CminusParser.y"
    {
			//printf("<ProcedureBody> -> <StatementList> <RBR>\n");
		}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 172 "CminusParser.y"
    {	
			// insert dec buf
			char * dec = (char*)malloc(200);
			sprintf(dec, "        .comm _gp, %d, 4", varCount*8 );
			dataTemp = dlinkNodeAlloc(dec);
			dlinkAppend(dataDec , dataTemp );
			dataPrints = dataPrints + 1;
			

			//printf("<DeclList> -> <Type> <IdentifierList> <SC>\n");
		}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 184 "CminusParser.y"
    {
			//printf("<DeclList> -> <DeclList> <Type> <IdentifierList> <SC>\n");
	 	}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 191 "CminusParser.y"
    {
			//printf("<IdentifierList> -> <VarDecl>\n");
		}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 196 "CminusParser.y"
    {
			//printf("<IdentifierList> -> <IdentifierList> <CM> <VarDecl>\n");
		}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 202 "CminusParser.y"
    { 
			/*
			//printf("%d", varCount);
			char * vary = (char*)malloc(200);
			char * par = (char*)malloc(200);char * fu = (char*)malloc(4);
			strcpy(fu, "%%");
			char * nl = (char*)malloc(4);
			sprintf(nl, "\n");

			int one = allocateReg();

			temp = dlinkNodeAlloc("        movq $_gp, %%rbx"); 
			dlinkAppend(final , temp);
			sprintf(vary,"        addq $%d, %%rbx", varCount*4);
			temp = dlinkNodeAlloc(vary); 
			dlinkAppend(final , temp);
			sprintf(par,"        movl (%%rbx), %s%s", fu, regs[one]);
			temp = dlinkNodeAlloc(par); 
			dlinkAppend(final , temp);
		
			finalPrints = finalPrints + 3;
			*/
			varCount++; 

			
			//freeReg(one);
			//printf("<VarDecl> -> <IDENTIFIER\n");
		}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 231 "CminusParser.y"
    {
        	//varCount++;
			//printf("<VarDecl> -> <IDENTIFIER> <LBK> <INTCON> <RBK>\n");
		}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 238 "CminusParser.y"
    { 
			//printf("<Type> -> <INTEGER>\n");
		}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 244 "CminusParser.y"
    { 
			//printf("<Statement> -> <Assignment>\n");
		}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 248 "CminusParser.y"
    { 
			//printf("<Statement> -> <IfStatement>\n");
		}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 252 "CminusParser.y"
    { 
			//printf("<Statement> -> <WhileStatement>\n");
		}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 256 "CminusParser.y"
    { 
			//printf("<Statement> -> <IOStatement>\n");
		}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 260 "CminusParser.y"
    { 
			//printf("<Statement> -> <ReturnStatement>\n");
		}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 264 "CminusParser.y"
    { 
			//printf("<Statement> -> <ExitStatement>\n");
		}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 268 "CminusParser.y"
    { 
			//printf("<Statement> -> <CompoundStatement>\n");
		}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 274 "CminusParser.y"
    {
			char * vary = (char*)malloc(100);
			char * par = (char*)malloc(100);
			char * con = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");
			char * nl = (char*)malloc(4);
			sprintf(nl, "\n");

			
			int one = allocateReg();
			sprintf(par,"        movq $_gp, %s%s", fu, regs[one]);
			sprintf(vary,"        addq $%d, %s%s", SymIndex(symtab, (char*)SymGetFieldByIndex(symtab, (yyvsp[(1) - (4)]), SYM_NAME_FIELD))*8, fu, regs[one] );
			sprintf(con,"        movq %s%s, (%s%s)", fu, regs[(yyvsp[(3) - (4)])], fu, regs[one]);

			temp = dlinkNodeAlloc(par); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(vary); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(con); 
			dlinkAppend(final , temp);
		
			finalPrints = finalPrints + 3;
			freeReg((yyvsp[(3) - (4)]));
			freeReg(one);
			setValue((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
			
			//printf("<Assignment> -> <Variable> <ASSIGN> <Expr> <SC>\n");
		}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 306 "CminusParser.y"
    {
			//printf("<IfStatement> -> <IF> <TestAndThen> <ELSE> <CompoundStatement>\n");
		}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 310 "CminusParser.y"
    {
			//printf("<IfStatement> -> <IF> <TestAndThen>\n");
		}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 317 "CminusParser.y"
    {
			//printf("<TestAndThen> -> <Test> <CompoundStatement>\n");
		}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 323 "CminusParser.y"
    {
			//printf("<Test> -> <LP> <Expr> <RP>\n");
		}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 330 "CminusParser.y"
    {
			//printf("<WhileStatement> -> <WhileToken> <WhileExpr> <Statement>\n");
		}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 336 "CminusParser.y"
    {
			//printf("<WhileExpr> -> <LP> <Expr> <RP>\n");
		}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 342 "CminusParser.y"
    {
			//printf("<WhileToken> -> <WHILE>\n");
		}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 349 "CminusParser.y"
    {
		    int t;
		    scanf("%d", &t);
            setValue((yyvsp[(3) - (5)]), t); 

            //int one = allocateReg();
            //int two = allocateReg();


            char * va = (char*)malloc(100);
			char * sy = (char*)malloc(100);
			char * in = (char*)malloc(100);
			char * mov = (char*)malloc(100);
			char * zero = (char*)malloc(100);
			char * scan = (char*)malloc(100);
			char * ftwo = (char*)malloc(4);
			strcpy(ftwo, "%%");
			char * nl = (char*)malloc(4);

			int one = allocateReg();
			int two = allocateReg();

			sprintf(va, "        movq $_gp, %s%s", ftwo, regs[one]);
			sprintf(sy, "        addq $%d, %s%s", SymIndex(symtab, (char*)SymGetFieldByIndex(symtab, (yyvsp[(3) - (5)]), SYM_NAME_FIELD))*8 , ftwo, regs[one]);
			sprintf(in, "        movq $.int_rformat, %srdi", ftwo);
			sprintf(mov, "        movq %s%s, %srsi", ftwo, regs[one], ftwo);
			sprintf(zero, "        movq $0, %s%s", ftwo, regs[two]);
			sprintf(scan, "        call scanf");
			sprintf(nl, "\n");

			temp = dlinkNodeAlloc(va); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(sy); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(in); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(mov); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(zero); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(scan); 
			dlinkAppend(final , temp);

			freeReg(one);
			freeReg(two);
			
			finalPrints = finalPrints + 6;

		     //printf("<IOStatement> -> <READ> <LP> <Variable> <RP> <SC>\n");
		}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 400 "CminusParser.y"
    {
			//printf("%d\n", $3);

			char * move = (char*)malloc(100);
			char * str = (char*)malloc(100);
			char * fin = (char*)malloc(100);
			char * mov = (char*)malloc(100);
			char * in = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");
			char * nl = (char*)malloc(4);

			int two = allocateReg();

			//sprintf(move, "        movl $%d, %s%s", $3, fu, regs[one]);
			sprintf(str, "        movq %s%s, %srsi", fu, regs[(yyvsp[(3) - (5)])], fu);
			sprintf(fin, "        movq $0, %s%s", fu, regs[two]);
			sprintf(mov, "        movq $.int_wformat, %srdi", fu);
			sprintf(in, "        call printf");
			sprintf(nl, "\n");

			//printf("%d", $3);
			
			
			//temp = dlinkNodeAlloc(move); 
			//dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(str); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(fin); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(mov); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(in); 
			dlinkAppend(final , temp);
			

			finalPrints = finalPrints + 4;
			freeReg((yyvsp[(3) - (5)]));
			freeReg(two);

			//printf("<IOStatement> -> <WRITE> <LP> <Expr> <RP> <SC>\n");
			
		}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 444 "CminusParser.y"
    {	

			char * format = (char*)malloc(100);
			char * str = (char*)malloc(100);
			char * fin = (char*)malloc(100);
			char * mov = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");
			char * nl = (char*)malloc(4);


			int one = allocateReg();
			int two = allocateReg();
			int three = allocateReg();
			//printf("%d\n" , one);
			//printf("%d\n" , two);



			// loads string into header data structure 
			sprintf(format, "	.string_const%d: .string \"%s\"", strings, (char*)SymGetFieldByIndex(symtab, (yyvsp[(3) - (5)]), SYM_NAME_FIELD));
			dataTemp = dlinkNodeAlloc(format);
			dlinkAppend(dataDec , dataTemp);
			dataPrints = dataPrints + 1;

			// loads string into final data structure
			sprintf(str, "        movq $.string_const%d, %s%s", strings, fu, regs[one]); 
			sprintf(fin, "        movq %s%s, %s%s", fu, regs[one], fu, regs[4]);
			sprintf(mov,"        movq $0, %s%s", fu, regs[three]);
			sprintf(nl, "\n");

			
			temp = dlinkNodeAlloc(str); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(fin); 
			dlinkAppend(final , temp);

			//sprintf(mov,"        movl $0, %s%s", fu, regs[allocateReg()]);
			temp = dlinkNodeAlloc(mov); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc("        movq $.str_wformat, %%rdi"); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc("        call printf"); 
			dlinkAppend(final , temp);
		

			finalPrints = finalPrints + 5;
			strings++;

			freeReg(one);
			freeReg(two); 
			freeReg(three); 

		   
			//printf("<IOStatement> -> <WRITE> <LP> <StringConstant> <RP> <SC>\n");
		}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 503 "CminusParser.y"
    {
			//printf("<ReturnStatement> -> <RETURN> <Expr> <SC>\n");
		}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 509 "CminusParser.y"
    {
			//printf("<ExitStatement> -> <EXIT> <SC>\n");
		}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 515 "CminusParser.y"
    {
			//printf("<CompoundStatement> -> <LBR> <StatementList> <RBR>\n");
		}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 521 "CminusParser.y"
    {		
			//printf("<StatementList> -> <Statement>\n");
		}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 525 "CminusParser.y"
    {		
			//printf("<StatementList> -> <StatementList> <Statement>\n");
		}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 531 "CminusParser.y"
    {
			(yyval) = (yyvsp[(1) - (1)]);
			//printf("<Expr> -> <SimpleExpr>\n");
		}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 536 "CminusParser.y"
    {
				char * or = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");
				sprintf(or, "        orq %s%s, %s%s", fu, regs[(yyvsp[(1) - (3)])], fu, regs[(yyvsp[(3) - (3)])] ); 
				
				temp = dlinkNodeAlloc(or); 
				dlinkAppend(final , temp);
				finalPrints = finalPrints + 1;
				freeReg((yyvsp[(1) - (3)]));
				(yyval) = (yyvsp[(3) - (3)]);
		        //$$ = $1 | $3;
				//printf("<Expr> -> <Expr> <OR> <SimpleExpr> \n");
		}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 551 "CminusParser.y"
    {
				char * and = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");
				sprintf(and, "        andq %s%s, %s%s", fu, regs[(yyvsp[(1) - (3)])], fu, regs[(yyvsp[(3) - (3)])] ); 
				
				temp = dlinkNodeAlloc(and); 
				dlinkAppend(final , temp);
				finalPrints = finalPrints + 1;
				freeReg((yyvsp[(1) - (3)]));
				(yyval) = (yyvsp[(3) - (3)]);
				//$$ = $1 & $3;
				//printf("<Expr> -> <Expr> <AND> <SimpleExpr> \n");
		}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 566 "CminusParser.y"
    {
				char * not = (char*)malloc(100);
				char * mov = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * on = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * n = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				int one = allocateReg();

				// really janky solution I dont know why it returns -1 and -2 just using not 
				// tried also using neg and pandn
				sprintf(not, "        notq %s%s", fu, regs[(yyvsp[(2) - (2)])]); // -2 already in result reg
				//sprintf(not, "        pandnq %s%s, %s%s", fu, regs[$2], fu, regs[one]);
				sprintf(mov, "        movq $%d, %s%s", -1, fu, regs[one]); // moves -1 into reg 
				// compare to set equal to zero or one instead
				sprintf(zero, "        cmpq %s%s, %s%s", fu, regs[one], fu, regs[(yyvsp[(2) - (2)])]);
				sprintf(on, "        movq $%d, %s%s", 0, fu, regs[(yyvsp[(2) - (2)])]);
				sprintf(vg, "        movq $%d, %s%s", 1,  fu, regs[one]);
				sprintf(n, "        cmove %s%s, %s%s", fu, regs[one], fu, regs[(yyvsp[(2) - (2)])]); 

				temp = dlinkNodeAlloc(not); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(mov); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(on); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(n); 
				dlinkAppend(final , temp);

				finalPrints = finalPrints + 6;
				freeReg(one);
				(yyval) = (yyvsp[(2) - (2)]);
				//$$ = $2 ^ 1;
				//printf("<Expr> -> <NOT> <SimpleExpr> \n");
		}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 611 "CminusParser.y"
    {
			(yyval) = (yyvsp[(1) - (1)]);
			//printf("<SimpleExpr> -> <AddExpr>\n");
		}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 616 "CminusParser.y"
    {
				char * cmp = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * one = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				sprintf(cmp, "        cmpq %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); 
				sprintf(zero, "        movq $0, %s%s", fu, regs[(yyvsp[(1) - (3)])] ); 
				sprintf(one, "        movq $1, %s%s", fu, regs[(yyvsp[(3) - (3)])] ); 
				sprintf(vg, "        cmove %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); 

				temp = dlinkNodeAlloc(cmp); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(one); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);

				freeReg((yyvsp[(3) - (3)]));
				finalPrints = finalPrints + 4;
				(yyval) = (yyvsp[(1) - (3)]);
		        //$$ = ($1 == $3);
			//printf("<SimpleExpr> -> <SimpleExpr> <EQ> <AddExpr> \n");
		}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 645 "CminusParser.y"
    {
				char * cmp = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * one = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				sprintf(cmp, "        cmpq %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); 
				sprintf(zero, "        movq $0, %s%s", fu, regs[(yyvsp[(1) - (3)])] ); 
				sprintf(one, "        movq $1, %s%s", fu, regs[(yyvsp[(3) - (3)])] ); 
				sprintf(vg, "        cmovne %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); 

				temp = dlinkNodeAlloc(cmp); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(one); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);

				freeReg((yyvsp[(3) - (3)]));
				finalPrints = finalPrints + 4;
				(yyval) = (yyvsp[(1) - (3)]);
		        //$$ = ($1 != $3);
			//printf("<SimpleExpr> -> <SimpleExpr> <NE> <AddExpr> \n");
		}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 674 "CminusParser.y"
    {
				char * cmp = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * one = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				sprintf(cmp, "        cmpq %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); 
				sprintf(zero, "        movq $0, %s%s", fu, regs[(yyvsp[(1) - (3)])] ); 
				sprintf(one, "        movq $1, %s%s", fu, regs[(yyvsp[(3) - (3)])] ); 
				sprintf(vg, "        cmovle %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); 

				temp = dlinkNodeAlloc(cmp); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(one); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);

				freeReg((yyvsp[(3) - (3)]));
				finalPrints = finalPrints + 4;
				(yyval) = (yyvsp[(1) - (3)]);
		        //$$ = ($1 <= $3);
			//printf("<SimpleExpr> -> <SimpleExpr> <LE> <AddExpr> \n");
		}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 703 "CminusParser.y"
    {
				char * cmp = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * one = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				sprintf(cmp, "        cmpq %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); 
				sprintf(zero, "        movq $0, %s%s", fu, regs[(yyvsp[(1) - (3)])] ); 
				sprintf(one, "        movq $1, %s%s", fu, regs[(yyvsp[(3) - (3)])] ); 
				sprintf(vg, "        cmovl %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); 

				temp = dlinkNodeAlloc(cmp); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(one); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);

				freeReg((yyvsp[(3) - (3)]));
				finalPrints = finalPrints + 4;
				(yyval) = (yyvsp[(1) - (3)]);
		        //$$ = ($1 < $3);
			//printf("<SimpleExpr> -> <SimpleExpr> <LT> <AddExpr> \n");
		}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 732 "CminusParser.y"
    {
				char * cmp = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * one = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				sprintf(cmp, "        cmpq %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); 
				sprintf(zero, "        movq $0, %s%s", fu, regs[(yyvsp[(1) - (3)])] ); 
				sprintf(one, "        movq $1, %s%s", fu, regs[(yyvsp[(3) - (3)])] ); 
				sprintf(vg, "        cmovge %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); 

				temp = dlinkNodeAlloc(cmp); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(one); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);

				freeReg((yyvsp[(3) - (3)]));
				finalPrints = finalPrints + 4;
				(yyval) = (yyvsp[(1) - (3)]);
		        //$$ = ($1 >= $3);
			//printf("<SimpleExpr> -> <SimpleExpr> <GE> <AddExpr> \n");
		}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 761 "CminusParser.y"
    {
				char * cmp = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * one = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				sprintf(cmp, "        cmpq %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); 
				sprintf(zero, "        movq $0, %s%s", fu, regs[(yyvsp[(1) - (3)])] ); 
				sprintf(one, "        movq $1, %s%s", fu, regs[(yyvsp[(3) - (3)])] ); 
				sprintf(vg, "        cmovg %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); 

				temp = dlinkNodeAlloc(cmp); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(one); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);

				freeReg((yyvsp[(3) - (3)]));
				finalPrints = finalPrints + 4;
				(yyval) = (yyvsp[(1) - (3)]);
			//printf("<SimpleExpr> -> <SimpleExpr> <GT> <AddExpr> \n");
		        //$$ = ($1 > $3);
		        
		}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 793 "CminusParser.y"
    {
			(yyval) = (yyvsp[(1) - (1)]);
			//printf("<AddExpr> -> <MulExpr>\n");
		}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 798 "CminusParser.y"
    {
			char * add = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");

			sprintf(add, "        addq %s%s, %s%s", fu, regs[(yyvsp[(1) - (3)])], fu, regs[(yyvsp[(3) - (3)])] ); 
			temp = dlinkNodeAlloc(add); 
			dlinkAppend(final , temp);
			
			finalPrints = finalPrints + 1;
			freeReg((yyvsp[(1) - (3)]));
			(yyval) = (yyvsp[(3) - (3)]);
			//$$ = $1 + $3;
			//printf("<AddExpr> -> <AddExpr> <PLUS> <MulExpr> \n");
		}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 814 "CminusParser.y"
    {
			// doesnt print the correct numbers
			char * add = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");

			sprintf(add, "        subq %s%s, %s%s", fu, regs[(yyvsp[(3) - (3)])], fu, regs[(yyvsp[(1) - (3)])] ); // switching works 
			temp = dlinkNodeAlloc(add); 
			dlinkAppend(final , temp);
			//printf("..%d", $1);
			//printf("..%d", $3);
			finalPrints = finalPrints + 1;
			freeReg((yyvsp[(3) - (3)]));
			(yyval) = (yyvsp[(1) - (3)]);
			//$$ = $1 - $3;
			//printf("<AddExpr> -> <AddExpr> <MINUS> <MulExpr> \n");
		}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 834 "CminusParser.y"
    {
			(yyval) = (yyvsp[(1) - (1)]);
			//printf("<MulExpr> -> <Factor>\n");
		}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 839 "CminusParser.y"
    {
			// needs eax so need global variables to not be declared at the top
			char * add = (char*)malloc(100);
			char * mov = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");

			sprintf(add, "        imulq %s%s, %s%s", fu, regs[(yyvsp[(1) - (3)])], fu, regs[(yyvsp[(3) - (3)])] );
			//sprintf(mov, "        movl %s%s, %s%s", fu, regs[$1] ); 

			temp = dlinkNodeAlloc(add); 
			dlinkAppend(final , temp);
			//printf("..%d", $1);
			//printf("..%d", $3);
			finalPrints = finalPrints + 1;
			freeReg((yyvsp[(1) - (3)]));
			(yyval) = (yyvsp[(3) - (3)]);
			//$$ = $1 * $3;
			//printf("<MulExpr> -> <MulExpr> <TIMES> <Factor> \n");
		}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 860 "CminusParser.y"
    {
			char * add = (char*)malloc(100);
			char * mov = (char*)malloc(100);
			char * cqo = (char*)malloc(100);
			char * div = (char*)malloc(100);
			char * movq = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");

			sprintf(add, "        movq %s%s, %srcx", fu, regs[(yyvsp[(3) - (3)])], fu ); // next two are to make sure div has 
			sprintf(mov, "        movq %s%s, %srax", fu, regs[(yyvsp[(1) - (3)])], fu ); // proper regs
			sprintf(cqo, "        cqo");
			sprintf(div, "        idivq %srcx", fu );
			sprintf(movq, "        movq %srax, %s%s", fu, fu, regs[(yyvsp[(1) - (3)])] );

			temp = dlinkNodeAlloc(add); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(mov); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(cqo); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(div); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(movq); 
			dlinkAppend(final , temp);

			finalPrints = finalPrints + 5;

			freeReg((yyvsp[(3) - (3)]));
			(yyval) = (yyvsp[(1) - (3)]);
			//$$ = $1 / $3;
			//printf("<MulExpr> -> <MulExpr> <DIVIDE> <Factor> \n");
		}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 896 "CminusParser.y"
    { 
			int one = allocateReg();
			int two = allocateReg();

			char * mov = (char*)malloc(100);
			char * ad = (char*)malloc(100);
			char * var = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");

			sprintf(mov,"        movq $_gp, %s%s",fu, regs[one]); // might need to be dynamically allocated
			sprintf(ad,"        addq $%d, %s%s",(yyvsp[(1) - (1)])*8, fu, regs[one]);
			sprintf(var,"        movq (%s%s), %s%s", fu, regs[one], fu, regs[two]);

			temp = dlinkNodeAlloc(mov); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(ad); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(var); 
			dlinkAppend(final , temp);
			freeReg(one);
			finalPrints = finalPrints + 3;

			(yyval) = two
			//$$ = getValue($1);
			//printf("<Factor> -> <Variable>\n");
		;}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 924 "CminusParser.y"
    { 
			//$$ = $1; 
			char * mov = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");
			int re = allocateReg(); // index of reg constant 

			sprintf(mov,"        movq $%d, %s%s",(yyvsp[(1) - (1)]), fu, regs[re]);
			temp = dlinkNodeAlloc(mov); 
			dlinkAppend(final , temp);
			finalPrints = finalPrints + 1;
			(yyval) = re;
			//printf("<Factor> -> <Constant>\n");
		}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 939 "CminusParser.y"
    {	
			//printf("<Factor> -> <IDENTIFIER> <LP> <RP>\n");
		}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 943 "CminusParser.y"
    {
			(yyval) = (yyvsp[(2) - (3)]);
			//printf("<Factor> -> <LP> <Expr> <RP>\n");
		}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 950 "CminusParser.y"
    {
			(yyval) = (yyvsp[(1) - (1)]);
			//printf("<Variable> -> <IDENTIFIER>\n");
		}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 955 "CminusParser.y"
    {
			//printf("<Variable> -> <IDENTIFIER> <LBK> <Expr> <RBK>\n");
               	}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 961 "CminusParser.y"
    { 
			
			(yyval) = (yyvsp[(1) - (1)]);

			

			//printf("<StringConstant> -> <STRING>\n");
		}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 972 "CminusParser.y"
    { 
			(yyval) = (yyvsp[(1) - (1)]);
			//printf("<Constant> -> <INTCON>\n");

		}
    break;


/* Line 1792 of yacc.c  */
#line 2592 "CminusParser.c"
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


/* Line 2055 of yacc.c  */
#line 981 "CminusParser.y"



/********************C ROUTINES *********************************/

void Cminus_error(const char *s)
{
  fprintf(stderr,"%s: line %d: %s\n",fileName,Cminus_lineno,s);
}

int Cminus_wrap() {
	return 1;
}

static void initialize(char* inputFileName) {

	Cminus_in = fopen(inputFileName,"r");
        if (Cminus_in == NULL) {
          fprintf(stderr,"Error: Could not open file %s\n",inputFileName);
          exit(-1);
        }

	char* dotChar = rindex(inputFileName,'.');
	int endIndex = strlen(inputFileName) - strlen(dotChar);
	char *outputFileName = nssave(2,substr(inputFileName,0,endIndex),".s");
	stdout = freopen(outputFileName,"w",stdout);
        if (stdout == NULL) {
          fprintf(stderr,"Error: Could not open file %s\n",outputFileName);
          exit(-1);
        }

	 symtab = SymInit(SYMTABLE_SIZE);
	 SymInitField(symtab,SYMTAB_VALUE_FIELD,(Generic)-1,NULL);
}

static void finalize() {

	temp = dlinkNodeAlloc("        leave");
	dlinkAppend(final , temp);
	temp = dlinkNodeAlloc("        ret");
	dlinkAppend(final , temp);
	finalPrints = finalPrints+2;

	//printf("%s", bigBuf);

	print = dataDec;
	for(i = 0; i < dataPrints; i++){
		//print = dataDec;
		printf(print->atom);
		printf("\n");
		print = dlinkNext(print);
		//dataDec = dlinkNext(dataDec);
	}

	finalPrint = final;
	for(i = 0; i < finalPrints; i++){
		//print = dataDec;
		printf(finalPrint->atom);
		printf("\n");
		finalPrint = dlinkNext(finalPrint);
		//dataDec = dlinkNext(dataDec);
	}
    SymKillField(symtab,SYMTAB_VALUE_FIELD);
    SymKill(symtab);
    fclose(Cminus_in);
    fclose(stdout);

}


int main(int argc, char** argv)

{	

	
	dataTemp = dlinkNodeAlloc("");
	dataDec = dlinkNodeAlloc("");
	finalPrint = dlinkNodeAlloc("");
	temp = dlinkNodeAlloc("");

	// speical ones used for prints div ect
	sprintf(regs[0], "rax");
	sprintf(regs[2], "rcx");
	sprintf(regs[3], "rdx");
	sprintf(regs[4], "rsi");  
	sprintf(regs[5], "rdi"); 

	// non special ones 
	sprintf(regs[1], "rbx");
	sprintf(regs[6], "r8");
	sprintf(regs[7], "r9");
	sprintf(regs[8], "r10");
	sprintf(regs[9], "r11");
	sprintf(regs[10], "r12");
	sprintf(regs[11], "r13");
	sprintf(regs[12], "r14");
	sprintf(regs[13], "r15");

	aval[0] = 1; //
	aval[1] = 0;
	aval[2] = 1; //
	aval[3] = 1; //
	aval[4] = 1; //
	aval[5] = 1; //
	aval[6] = 0;
	aval[7] = 0;
	aval[8] = 0;
	aval[9] = 0;
	aval[10] = 0;
	aval[11] = 0;
	aval[12] = 0;
	aval[13] = 0;



	// Header lines
	//sprintf(bigBuf,"        .section        .rodata\n");
	//sprintf(bigBuf + strlen(bigBuf), "        .int_wformat: .string \"%%d\\n\"\n" );
	
	dataDec = dlinkNodeAlloc("        .section        .rodata");
	dataTemp = dlinkNodeAlloc("        .int_wformat: .string \"%%d\\n\"");
	dlinkAppend(dataDec , dataTemp);
	dataTemp = dlinkNodeAlloc("        .str_wformat: .string \"%%s\\n\"");
	dlinkAppend(dataDec , dataTemp);
	dataTemp = dlinkNodeAlloc("        .int_rformat: .string \"\%%d\"");
	dlinkAppend(dataDec , dataTemp);
	dataPrints = dataPrints + 4;

	
	final = dlinkNodeAlloc("        .text");
	temp = dlinkNodeAlloc("        .globl main");
	dlinkAppend(final , temp);
	temp = dlinkNodeAlloc("        .type main,@function");
	dlinkAppend(final , temp);
	
	temp = dlinkNodeAlloc("main:	nop");
	dlinkAppend(final , temp);
	temp = dlinkNodeAlloc("        pushq %rbp");
	dlinkAppend(final , temp);
	temp = dlinkNodeAlloc("        movq %rsp, %rbp");
	dlinkAppend(final , temp);
	finalPrints = finalPrints + 6;
	
	
	//printf("	.section	.rodata\n");
	//printf(".int_wformat: .string \"%%d\\n\"\n");
	//printf(".str_wformat: .string \"%%s\\n\"\n");
	//printf(".int_rformat: .string \"%%d\"\n");
	


	fileName = argv[1];
	initialize(fileName);

	
        Cminus_parse();
  
  	finalize();
  
  	return 0;
}

// allocates reg by looking at availability array and returning index of first free reg
int allocateReg(){
	for(i = 0; i < 14; i++){
		if(aval[i] != 1){
		aval[i] = 1;
		return i;
		}
	}
}

// frees the registers
void freeReg(int index){
	aval[index] = 0; 
}


int getValue(int index)
{
  return (int)SymGetFieldByIndex(symtab, index, SYMTAB_VALUE_FIELD); 
}

int setValue(int index, int value)
{
  SymPutFieldByIndex(symtab, index, SYMTAB_VALUE_FIELD, (Generic)value); 
}
/******************END OF C ROUTINES**********************/
