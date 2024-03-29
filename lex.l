
%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdbool.h>
	#include "y.tab.h" 
%}


%%

if			return IF;
else			return ELSE;
while			return WHILE;
do 			return DO;
Planet			return PLANET_VAR;
int			return INT_VAR;
string 		return STR_VAR;
addplanet		return ADD_PLANET;
print_digit[(]       return PRINTD;
print_string[(]      return PRINTS;
(".")			return DOT;
("{")			return OPEN_CURLY;
("}")			return CLOSE_CURLY;
("(")			return OPEN_PAR;
(")")			return CLOSE_PAR;
("=")			return ASSIGN;
xvel			return XVEL;
yvel			return YVEL;
xpos			return XPOS;
ypos			return YPOS;
mass			return MASS;
color			return COLOR;
name			return NAME;
radius			return RADIUS;
visibility		return VISIBILITY;
(";")			return SEMICOLON;
print			return PRINT;
("++")			return INC_OP;
("--")			return DEC_OP;
("+")			return ADD_OP;
("-")			return SUB_OP;
("*")			return MUL_OP;
("/")			return DIV_OP;
("||")			return OR_OP;
("&&")			return AND_OP;
("!")			return NOT_OP;
(">")			return GT_OP;
(">=")			return GE_OP;
("==")			return EQ_OP;
("<=")			return LE_OP;
("<")			return LT_OP;
("!=")			return NE_OP;
true			return TRUE;
false			return FALSE;
("\n")			return NEWLINE;
["]                  return QUOTATION;

[a-zA-Z]+		{
				char * ptr_String = (char *)calloc(strlen(yytext)+1, sizeof(char));
              		strcpy(ptr_String, yytext);
              		yylval.str = ptr_String;
              		return VAR_NAME;
              	}

[0-9]+			{	
				yylval.number = atoi(yytext);
                            return NUMBER;
                     }

[0-9]+[.][0-9]+	{ 	
                            yylval.number = atof(yytext);
              		return DECIMAL;
			}

[a-zA-Z0-9:_!]+         {
                            char * ptr_String = (char *)calloc(strlen(yytext)+1, sizeof(char));
              		strcpy(ptr_String, yytext);
              		yylval.str = ptr_String;
              		return STRING_CONTENT;
              	}

.				;


%%

int yywrap()
{
	return 1;
}