/*******************************************************/
/*                     Cminus Parser                   */
/*                                                     */
/*******************************************************/

/*********************DEFINITIONS***********************/
%{
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
%}

%name-prefix="Cminus_"
%defines

%start Program

%token AND
%token ELSE
%token EXIT
%token FOR
%token IF 		
%token INTEGER 
%token NOT 		
%token OR 		
%token READ
%token WHILE
%token WRITE
%token LBRACE
%token RBRACE
%token LE
%token LT
%token GE
%token GT
%token EQ
%token NE
%token ASSIGN
%token COMMA
%token SEMICOLON
%token LBRACKET
%token RBRACKET
%token LPAREN
%token RPAREN
%token PLUS
%token TIMES
%token IDENTIFIER
%token DIVIDE
%token RETURN
%token STRING	
%token INTCON
%token MINUS

%left OR
%left AND
%left NOT
%left LT LE GT GE NE EQ
%left PLUS MINUS
%left TIMES DIVDE

/***********************PRODUCTIONS****************************/
%%




   Program		: Procedures 
		{
			
			//printf("<Program> -> <Procedures>\n");
		}
	  	| DeclList Procedures
		{
			//printf("<Program> -> <DeclList> <Procedures>\n");
		}
          ;

Procedures 	: ProcedureDecl Procedures
		{
			//printf("<Procedures> -> <ProcedureDecl> <Procedures>\n");
		}
	   	|
		{
			//printf("<Procedures> -> epsilon\n");
		}
	   	;

ProcedureDecl : ProcedureHead ProcedureBody
		{
			//printf("<ProcedureDecl> -> <ProcedureHead> <ProcedureBody>\n");
		}
              ;

ProcedureHead : FunctionDecl DeclList 
		{
			//printf("<ProcedureHead> -> <FunctionDecl> <DeclList>\n");
		}
	      | FunctionDecl
		{
			//printf("<ProcedureHead> -> <FunctionDecl>\n");
		}
              ;

FunctionDecl :  Type IDENTIFIER LPAREN RPAREN LBRACE 
		{
			//printf("<FunctionDecl> ->  <Type> <IDENTIFIER> <LP> <RP> <LBR>\n"); 
		}
	      	;

ProcedureBody : StatementList RBRACE
		{
			//printf("<ProcedureBody> -> <StatementList> <RBR>\n");
		}
	      ;


DeclList 	: Type IdentifierList  SEMICOLON 
		{	
			// insert dec buf
			char * dec = (char*)malloc(200);
			sprintf(dec, "        .comm _gp, %d, 4", varCount*8 );
			dataTemp = dlinkNodeAlloc(dec);
			dlinkAppend(dataDec , dataTemp );
			dataPrints = dataPrints + 1;
			

			//printf("<DeclList> -> <Type> <IdentifierList> <SC>\n");
		}		
	   	| DeclList Type IdentifierList SEMICOLON
	 	{
			//printf("<DeclList> -> <DeclList> <Type> <IdentifierList> <SC>\n");
	 	}
          	;


IdentifierList 	: VarDecl  
		{
			//printf("<IdentifierList> -> <VarDecl>\n");
		}
						
                | IdentifierList COMMA VarDecl
		{
			//printf("<IdentifierList> -> <IdentifierList> <CM> <VarDecl>\n");
		}
                ;

VarDecl 	: IDENTIFIER
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
		| IDENTIFIER LBRACKET INTCON RBRACKET
        {
        	//varCount++;
			//printf("<VarDecl> -> <IDENTIFIER> <LBK> <INTCON> <RBK>\n");
		}
		;

Type     	: INTEGER 
		{ 
			//printf("<Type> -> <INTEGER>\n");
		}
                ;

Statement 	: Assignment
		{ 
			//printf("<Statement> -> <Assignment>\n");
		}
                | IfStatement
		{ 
			//printf("<Statement> -> <IfStatement>\n");
		}
		| WhileStatement
		{ 
			//printf("<Statement> -> <WhileStatement>\n");
		}
                | IOStatement 
		{ 
			//printf("<Statement> -> <IOStatement>\n");
		}
		| ReturnStatement
		{ 
			//printf("<Statement> -> <ReturnStatement>\n");
		}
		| ExitStatement	
		{ 
			//printf("<Statement> -> <ExitStatement>\n");
		}
		| CompoundStatement
		{ 
			//printf("<Statement> -> <CompoundStatement>\n");
		}
                ;

Assignment      : Variable ASSIGN Expr SEMICOLON
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
			sprintf(vary,"        addq $%d, %s%s", SymIndex(symtab, (char*)SymGetFieldByIndex(symtab, $1, SYM_NAME_FIELD))*8, fu, regs[one] );
			sprintf(con,"        movq %s%s, (%s%s)", fu, regs[$3], fu, regs[one]);

			temp = dlinkNodeAlloc(par); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(vary); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(con); 
			dlinkAppend(final , temp);
		
			finalPrints = finalPrints + 3;
			freeReg($3);
			freeReg(one);
			setValue($1, $3);
			
			//printf("<Assignment> -> <Variable> <ASSIGN> <Expr> <SC>\n");
		}
                ;
				
IfStatement	: IF TestAndThen ELSE CompoundStatement
		{
			//printf("<IfStatement> -> <IF> <TestAndThen> <ELSE> <CompoundStatement>\n");
		}
		| IF TestAndThen
		{
			//printf("<IfStatement> -> <IF> <TestAndThen>\n");
		}
		;
		
				
TestAndThen	: Test CompoundStatement
		{
			//printf("<TestAndThen> -> <Test> <CompoundStatement>\n");
		}
		;
				
Test		: LPAREN Expr RPAREN
		{
			//printf("<Test> -> <LP> <Expr> <RP>\n");
		}
		;
	

WhileStatement  : WhileToken WhileExpr Statement
		{
			//printf("<WhileStatement> -> <WhileToken> <WhileExpr> <Statement>\n");
		}
                ;
                
WhileExpr	: LPAREN Expr RPAREN
		{
			//printf("<WhileExpr> -> <LP> <Expr> <RP>\n");
		}
		;
				
WhileToken	: WHILE
		{
			//printf("<WhileToken> -> <WHILE>\n");
		}
		;


IOStatement     : READ LPAREN Variable RPAREN SEMICOLON
		{
		    int t;
		    scanf("%d", &t);
            setValue($3, t); 

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
			sprintf(sy, "        addq $%d, %s%s", SymIndex(symtab, (char*)SymGetFieldByIndex(symtab, $3, SYM_NAME_FIELD))*8 , ftwo, regs[one]);
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
                | WRITE LPAREN Expr RPAREN SEMICOLON
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
			sprintf(str, "        movq %s%s, %srsi", fu, regs[$3], fu);
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
			freeReg($3);
			freeReg(two);

			//printf("<IOStatement> -> <WRITE> <LP> <Expr> <RP> <SC>\n");
			
		}
                | WRITE LPAREN StringConstant RPAREN SEMICOLON         
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
			sprintf(format, "	.string_const%d: .string \"%s\"", strings, (char*)SymGetFieldByIndex(symtab, $3, SYM_NAME_FIELD));
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
                ;

ReturnStatement : RETURN Expr SEMICOLON
		{
			//printf("<ReturnStatement> -> <RETURN> <Expr> <SC>\n");
		}
                ;

ExitStatement 	: EXIT SEMICOLON
		{
			//printf("<ExitStatement> -> <EXIT> <SC>\n");
		}
		;

CompoundStatement : LBRACE StatementList RBRACE
		{
			//printf("<CompoundStatement> -> <LBR> <StatementList> <RBR>\n");
		}
                ;

StatementList   : Statement
		{		
			//printf("<StatementList> -> <Statement>\n");
		}
                | StatementList Statement
		{		
			//printf("<StatementList> -> <StatementList> <Statement>\n");
		}
                ;

Expr            : SimpleExpr
		{
			$$ = $1;
			//printf("<Expr> -> <SimpleExpr>\n");
		}
                | Expr OR SimpleExpr 
		{
				char * or = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");
				sprintf(or, "        orq %s%s, %s%s", fu, regs[$1], fu, regs[$3] ); 
				
				temp = dlinkNodeAlloc(or); 
				dlinkAppend(final , temp);
				finalPrints = finalPrints + 1;
				freeReg($1);
				$$ = $3;
		        //$$ = $1 | $3;
				//printf("<Expr> -> <Expr> <OR> <SimpleExpr> \n");
		}
                | Expr AND SimpleExpr 
		{
				char * and = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");
				sprintf(and, "        andq %s%s, %s%s", fu, regs[$1], fu, regs[$3] ); 
				
				temp = dlinkNodeAlloc(and); 
				dlinkAppend(final , temp);
				finalPrints = finalPrints + 1;
				freeReg($1);
				$$ = $3;
				//$$ = $1 & $3;
				//printf("<Expr> -> <Expr> <AND> <SimpleExpr> \n");
		}
                | NOT SimpleExpr 
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
				sprintf(not, "        notq %s%s", fu, regs[$2]); // -2 already in result reg
				//sprintf(not, "        pandnq %s%s, %s%s", fu, regs[$2], fu, regs[one]);
				sprintf(mov, "        movq $%d, %s%s", -1, fu, regs[one]); // moves -1 into reg 
				// compare to set equal to zero or one instead
				sprintf(zero, "        cmpq %s%s, %s%s", fu, regs[one], fu, regs[$2]);
				sprintf(on, "        movq $%d, %s%s", 0, fu, regs[$2]);
				sprintf(vg, "        movq $%d, %s%s", 1,  fu, regs[one]);
				sprintf(n, "        cmove %s%s, %s%s", fu, regs[one], fu, regs[$2]); 

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
				$$ = $2;
				//$$ = $2 ^ 1;
				//printf("<Expr> -> <NOT> <SimpleExpr> \n");
		}
                ;

SimpleExpr	: AddExpr
		{
			$$ = $1;
			//printf("<SimpleExpr> -> <AddExpr>\n");
		}
                | SimpleExpr EQ AddExpr
		{
				char * cmp = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * one = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				sprintf(cmp, "        cmpq %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); 
				sprintf(zero, "        movq $0, %s%s", fu, regs[$1] ); 
				sprintf(one, "        movq $1, %s%s", fu, regs[$3] ); 
				sprintf(vg, "        cmove %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); 

				temp = dlinkNodeAlloc(cmp); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(one); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);

				freeReg($3);
				finalPrints = finalPrints + 4;
				$$ = $1;
		        //$$ = ($1 == $3);
			//printf("<SimpleExpr> -> <SimpleExpr> <EQ> <AddExpr> \n");
		}
                | SimpleExpr NE AddExpr
		{
				char * cmp = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * one = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				sprintf(cmp, "        cmpq %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); 
				sprintf(zero, "        movq $0, %s%s", fu, regs[$1] ); 
				sprintf(one, "        movq $1, %s%s", fu, regs[$3] ); 
				sprintf(vg, "        cmovne %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); 

				temp = dlinkNodeAlloc(cmp); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(one); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);

				freeReg($3);
				finalPrints = finalPrints + 4;
				$$ = $1;
		        //$$ = ($1 != $3);
			//printf("<SimpleExpr> -> <SimpleExpr> <NE> <AddExpr> \n");
		}
                | SimpleExpr LE AddExpr
		{
				char * cmp = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * one = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				sprintf(cmp, "        cmpq %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); 
				sprintf(zero, "        movq $0, %s%s", fu, regs[$1] ); 
				sprintf(one, "        movq $1, %s%s", fu, regs[$3] ); 
				sprintf(vg, "        cmovle %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); 

				temp = dlinkNodeAlloc(cmp); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(one); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);

				freeReg($3);
				finalPrints = finalPrints + 4;
				$$ = $1;
		        //$$ = ($1 <= $3);
			//printf("<SimpleExpr> -> <SimpleExpr> <LE> <AddExpr> \n");
		}
                | SimpleExpr LT AddExpr
		{
				char * cmp = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * one = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				sprintf(cmp, "        cmpq %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); 
				sprintf(zero, "        movq $0, %s%s", fu, regs[$1] ); 
				sprintf(one, "        movq $1, %s%s", fu, regs[$3] ); 
				sprintf(vg, "        cmovl %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); 

				temp = dlinkNodeAlloc(cmp); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(one); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);

				freeReg($3);
				finalPrints = finalPrints + 4;
				$$ = $1;
		        //$$ = ($1 < $3);
			//printf("<SimpleExpr> -> <SimpleExpr> <LT> <AddExpr> \n");
		}
                | SimpleExpr GE AddExpr
		{
				char * cmp = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * one = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				sprintf(cmp, "        cmpq %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); 
				sprintf(zero, "        movq $0, %s%s", fu, regs[$1] ); 
				sprintf(one, "        movq $1, %s%s", fu, regs[$3] ); 
				sprintf(vg, "        cmovge %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); 

				temp = dlinkNodeAlloc(cmp); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(one); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);

				freeReg($3);
				finalPrints = finalPrints + 4;
				$$ = $1;
		        //$$ = ($1 >= $3);
			//printf("<SimpleExpr> -> <SimpleExpr> <GE> <AddExpr> \n");
		}
                | SimpleExpr GT AddExpr
		{
				char * cmp = (char*)malloc(100);
				char * zero = (char*)malloc(100);
				char * one = (char*)malloc(100);
				char * vg = (char*)malloc(100);
				char * fu = (char*)malloc(4);
				strcpy(fu, "%%");

				sprintf(cmp, "        cmpq %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); 
				sprintf(zero, "        movq $0, %s%s", fu, regs[$1] ); 
				sprintf(one, "        movq $1, %s%s", fu, regs[$3] ); 
				sprintf(vg, "        cmovg %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); 

				temp = dlinkNodeAlloc(cmp); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(zero); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(one); 
				dlinkAppend(final , temp);
				temp = dlinkNodeAlloc(vg); 
				dlinkAppend(final , temp);

				freeReg($3);
				finalPrints = finalPrints + 4;
				$$ = $1;
			//printf("<SimpleExpr> -> <SimpleExpr> <GT> <AddExpr> \n");
		        //$$ = ($1 > $3);
		        
		}
                ;

AddExpr		:  MulExpr            
		{
			$$ = $1;
			//printf("<AddExpr> -> <MulExpr>\n");
		}
                |  AddExpr PLUS MulExpr
		{
			char * add = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");

			sprintf(add, "        addq %s%s, %s%s", fu, regs[$1], fu, regs[$3] ); 
			temp = dlinkNodeAlloc(add); 
			dlinkAppend(final , temp);
			
			finalPrints = finalPrints + 1;
			freeReg($1);
			$$ = $3;
			//$$ = $1 + $3;
			//printf("<AddExpr> -> <AddExpr> <PLUS> <MulExpr> \n");
		}
                |  AddExpr MINUS MulExpr
		{
			// doesnt print the correct numbers
			char * add = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");

			sprintf(add, "        subq %s%s, %s%s", fu, regs[$3], fu, regs[$1] ); // switching works 
			temp = dlinkNodeAlloc(add); 
			dlinkAppend(final , temp);
			//printf("..%d", $1);
			//printf("..%d", $3);
			finalPrints = finalPrints + 1;
			freeReg($3);
			$$ = $1;
			//$$ = $1 - $3;
			//printf("<AddExpr> -> <AddExpr> <MINUS> <MulExpr> \n");
		}
                ;

MulExpr		:  Factor
		{
			$$ = $1;
			//printf("<MulExpr> -> <Factor>\n");
		}
                |  MulExpr TIMES Factor
		{
			// needs eax so need global variables to not be declared at the top
			char * add = (char*)malloc(100);
			char * mov = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");

			sprintf(add, "        imulq %s%s, %s%s", fu, regs[$1], fu, regs[$3] );
			//sprintf(mov, "        movl %s%s, %s%s", fu, regs[$1] ); 

			temp = dlinkNodeAlloc(add); 
			dlinkAppend(final , temp);
			//printf("..%d", $1);
			//printf("..%d", $3);
			finalPrints = finalPrints + 1;
			freeReg($1);
			$$ = $3;
			//$$ = $1 * $3;
			//printf("<MulExpr> -> <MulExpr> <TIMES> <Factor> \n");
		}
                |  MulExpr DIVIDE Factor
		{
			char * add = (char*)malloc(100);
			char * mov = (char*)malloc(100);
			char * cqo = (char*)malloc(100);
			char * div = (char*)malloc(100);
			char * movq = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");

			sprintf(add, "        movq %s%s, %srcx", fu, regs[$3], fu ); // next two are to make sure div has 
			sprintf(mov, "        movq %s%s, %srax", fu, regs[$1], fu ); // proper regs
			sprintf(cqo, "        cqo");
			sprintf(div, "        idivq %srcx", fu );
			sprintf(movq, "        movq %srax, %s%s", fu, fu, regs[$1] );

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

			freeReg($3);
			$$ = $1;
			//$$ = $1 / $3;
			//printf("<MulExpr> -> <MulExpr> <DIVIDE> <Factor> \n");
		}		
                ;
				
Factor          : Variable
		{ 
			int one = allocateReg();
			int two = allocateReg();

			char * mov = (char*)malloc(100);
			char * ad = (char*)malloc(100);
			char * var = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");

			sprintf(mov,"        movq $_gp, %s%s",fu, regs[one]); // might need to be dynamically allocated
			sprintf(ad,"        addq $%d, %s%s",$1*8, fu, regs[one]);
			sprintf(var,"        movq (%s%s), %s%s", fu, regs[one], fu, regs[two]);

			temp = dlinkNodeAlloc(mov); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(ad); 
			dlinkAppend(final , temp);
			temp = dlinkNodeAlloc(var); 
			dlinkAppend(final , temp);
			freeReg(one);
			finalPrints = finalPrints + 3;

			$$ = two
			//$$ = getValue($1);
			//printf("<Factor> -> <Variable>\n");
		}
                | Constant
		{ 
			//$$ = $1; 
			char * mov = (char*)malloc(100);
			char * fu = (char*)malloc(4);
			strcpy(fu, "%%");
			int re = allocateReg(); // index of reg constant 

			sprintf(mov,"        movq $%d, %s%s",$1, fu, regs[re]);
			temp = dlinkNodeAlloc(mov); 
			dlinkAppend(final , temp);
			finalPrints = finalPrints + 1;
			$$ = re;
			//printf("<Factor> -> <Constant>\n");
		}
                | IDENTIFIER LPAREN RPAREN
       		{	
			//printf("<Factor> -> <IDENTIFIER> <LP> <RP>\n");
		}
         	| LPAREN Expr RPAREN
		{
			$$ = $2;
			//printf("<Factor> -> <LP> <Expr> <RP>\n");
		}
                ;  

Variable        : IDENTIFIER
		{
			$$ = $1;
			//printf("<Variable> -> <IDENTIFIER>\n");
		}
                | IDENTIFIER LBRACKET Expr RBRACKET    
               	{
			//printf("<Variable> -> <IDENTIFIER> <LBK> <Expr> <RBK>\n");
               	}
                ;			       

StringConstant 	: STRING
		{ 
			
			$$ = $1;

			

			//printf("<StringConstant> -> <STRING>\n");
		}
                ;

Constant        : INTCON
		{ 
			$$ = $1;
			//printf("<Constant> -> <INTCON>\n");

		}
                ;



%%


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
