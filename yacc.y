%{
	#include <stdio.h>
	#include <stdbool.h>
	int yylex();
	void yyerror(char const *s);

%}

%union {
 	float number;
 	char * str;
 	bool boolean;
}

%token SEMICOLON NEWLINE
%token IF ELSE
%token DO WHILE
%token STR_VAR INT_VAR PLANET_VAR
%token STRING_CONTENT VAR_NAME
%token DOT OPEN_CURLY CLOSE_CURLY OPEN_PAR CLOSE_PAR
%token ASSIGN QUOTATION
%token XVEL YVEL XPOS YPOS MASS VISIBILITY RADIUS COLOR NAME
%token PRINT ADD_PLANET
%token INC_OP DEC_OP ADD_OP SUB_OP MUL_OP DIV_OP
%token OR_OP AND_OP NOT_OP 
%token GT_OP GE_OP EQ_OP LE_OP LT_OP NE_OP
%token TRUE FALSE
%token NUMBER DECIMAL PRINTD PRINTS

%type <number>	NUMBER DECIMAL
%type <str> 	VAR_NAME STRING_CONTENT 

%start entity

%%


entity	: 
		| int_var var_name int_assign semicolon newline entity 			
		| str_var var_name string_assign semicolon newline entity		
		| declaration semicolon newline entity							
		| control_block newline entity
		| var_name int_assign semicolon newline entity									
		| var_name string_assign semicolon newline entity				
		| var_name inc_op semicolon newline entity						
		| var_name dec_op semicolon newline entity						
		| assign_property semicolon newline entity						
		| print semicolon newline entity 								
		| addplanet semicolon newline entity
		| print_digit semicolon newline entity	
		| print_string semicolon newline entity						
		;


newline 	: NEWLINE {printf("\n");}
			;

inc_op 	: INC_OP  {printf("++");}
		;

dec_op 	: DEC_OP  {printf("--");}
		;


print_digit 	: printd expression close_par
				;

print_string	: prints var_name dot name close_par
				;

printd 			: PRINTD 		{printf("printf(\"%%f\\n\",");}
				;

prints 			: PRINTS 		{printf("printf(\"%%s\\n\",");}
				;


print 	: printf open_par quotation var_name quotation close_par  
		| printf open_par quotation string_content quotation close_par
		;

printf	: PRINT 	{printf("printf");}
		;



addplanet	: ADD_PLANET OPEN_PAR VAR_NAME CLOSE_PAR  	{		
																printf("planet_quantity++;\n");
																printf("fprintf(fp, \"%%lf\\n\",%s.mass);\n",$3);
																printf("fprintf(fp, \"%%lf %%lf\\n\",%s.xpos,%s.ypos);\n",$3,$3);
																printf("fprintf(fp, \"%%lf %%lf\\n\",%s.xvel,%s.yvel);\n",$3,$3);
																printf("fprintf(fp, \"%%lf %%d\\n\",%s.radius,%s.color);\n",$3,$3);
																printf("fprintf(fp, \"%%s\\n\",%s.name);\n",$3);
																printf("fprintf(fp, \"%%d\\n\",%s.visibility)",$3);
														}
			;


assign_property 	: var_name dot xvel int_assign	
					| var_name dot yvel int_assign	
					| var_name dot xpos int_assign
					| var_name dot ypos int_assign
					| var_name dot mass int_assign
					| var_name dot radius int_assign
					| var_name dot name string_assign
					| var_name dot color int_assign
					| var_name dot visibility int_assign
					;


access_property 	: var_name dot xvel
					| var_name dot yvel
					| var_name dot xpos
					| var_name dot ypos 
					| var_name dot mass
					| var_name dot radius
					| var_name dot name 
					| var_name dot color 
					| var_name dot visibility 
					;


dot 	: DOT  {printf(".");}
		;

xvel 	: XVEL 	{printf("xvel");}
		;

yvel 	: YVEL 	{printf("yvel");}
		;

xpos 	: XPOS 	{printf("xpos");}
		;

ypos 	: YPOS 	{printf("ypos");}
		;

mass 	: MASS {printf("mass");}
		;

radius 	: RADIUS {printf("radius");}
		;

name 	: NAME {printf("name");}
		;

color 	: COLOR {printf("color");}
		;

visibility 	: VISIBILITY {printf("visibility");}
			;


/*
bool_assign		: assign bool_expression
				;
*/

declaration 	: str_var var_name			
				| int_var var_name			
				| planet_var var_name		
				;


str_var 	: STR_VAR 		{printf("char * ");}
			;

int_var 	: INT_VAR 		{printf("float ");}
			;

planet_var 	: PLANET_VAR 	{printf("struct Planet ");}

var_name 	: VAR_NAME 		{printf("%s",$1);}
			;


int_assign	: assign expression  			
			;


expression 	: term 					
			| expression add_op term 	
    		| expression sub_op term 	
    		;


term 	: factor 				
    	| term mul_op factor 	
    	| term div_op factor 	
    	;

mul_op 	: MUL_OP  	{printf("*");}
		;

div_op 	: DIV_OP 	{printf("/");}
		;


factor 	: primary 			
    	| sub_op factor 			
    	| add_op factor 	
    	;

sub_op 	: SUB_OP  	{printf("-");}
		;

add_op 	: ADD_OP 	{printf("+");}
		;


primary		: VAR_NAME							{printf("%s",$1);}
			| NUMBER 							{printf("%f",$1);}
			| DECIMAL							{printf("%f",$1);}						
    		| open_par expression close_par
    		| access_property 	
    		;




string_assign	: assign quotation string_content quotation		
				| assign quotation var_name quotation		
				;


string_content 	: STRING_CONTENT 	{printf("%s",$1);}
				;

control_block 	: conditional
				| loop
				;


conditional 	: if open_par bool_expression close_par open_curly newline entity close_curly
				| if open_par bool_expression close_par open_curly entity close_curly
				| if open_par bool_expression close_par open_curly entity close_curly else open_curly entity close_curly
				| if open_par bool_expression close_par open_curly newline entity close_curly else open_curly newline entity close_curly
				| if open_par bool_expression close_par open_curly entity close_curly else open_curly newline entity close_curly
				| if open_par bool_expression close_par open_curly newline entity close_curly else open_curly entity close_curly
				;

if 	: IF 	{printf("if");}
	;

else 	: ELSE {printf("else");}
		;


loop 	: while open_par bool_expression close_par open_curly newline entity close_curly 
		| while open_par bool_expression close_par open_curly entity close_curly 
		| do open_curly newline entity close_curly while open_par bool_expression close_par semicolon newline
		| do open_curly entity close_curly while open_par bool_expression close_par semicolon newline
		;

while 	: WHILE {printf("while");}
		;

do 	: DO 	{printf("do");}
	;


bool_expression 	: bool_term								
					| bool_expression or_op bool_term		
					;


bool_term	: bool_factor									
			| bool_term and_op bool_factor					
			;


bool_factor		: open_par bool_expression close_par 	
				| not_op bool_factor 					
				| bool 										
				;


bool 	: true 													
		| false 										
		| comparison										
		;

true 	: TRUE 		{printf("1");}
		;

false 	: FALSE 	{printf("0");}
		;


comparison 		: expression compare_operator expression 	
				;


compare_operator	: lt_op 
					| le_op 
					| eq_op 
					| ge_op
					| gt_op
					| ne_op
					;


lt_op 	: LT_OP {printf("<");}
		;

le_op 	: LE_OP {printf("<=");}
		;

eq_op 	: EQ_OP {printf("==");}
		;

ge_op 	: GE_OP {printf(">=");}
		;

gt_op 	: GT_OP {printf(">");}
		;

ne_op 	: NE_OP {printf("!=");}
		;


open_par 	: OPEN_PAR 		{printf("(");}
			;

close_par 	: CLOSE_PAR 	{printf(")");}
			;

open_curly 		: OPEN_CURLY		{printf("{");}
				;

close_curly 	: CLOSE_CURLY 	{printf("}");}
				;

not_op 	: NOT_OP 	{printf("!");}
		;

and_op 	: AND_OP 	{printf("&&");}
		;

or_op 	: OR_OP 	{printf("||");}
		;


semicolon 	: SEMICOLON {printf(";");}
			;

assign 	: ASSIGN 	{printf("=");}
		;

quotation 	: QUOTATION 	{printf("\"");}
			;

%%

void yyerror(char const *s)
{
    printf("yyerror  %s\n",s);
    return ;
}

int main()
{	
	printf("#include <stdbool.h>\n");
	printf("#include <stdio.h>\n");

	printf("struct Planet{\n double xvel;\n double yvel;\n double xpos;\n double ypos;\n int color;\n double mass;\n double radius;\n int visibility;\n char * name;\n};\n");
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
