/* Flex lexical analyzer for arithmetic expressions - recognizes numbers, operators, parentheses */

%{
#include "task2.tab.h"
%}

%%
[0-9]+ {yylval=atoi(yytext); return NUMBER;}
[+\-*/()\n] {return yytext[0];}
[\t]+ ;
. {printf("Invalid character:%s\n",yytext);}
%%

int yywrap(){
    return 1;
}