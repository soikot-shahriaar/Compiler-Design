/* Flex lexical analyzer for number recognition - recognizes integers and handles whitespace */

%{
#include "task1.tab.h"
%}

%%
[0-9]+ {yylval=atoi(yytext); return NUMBER;}
[\t]+ ;
. {printf("Invalid character:%s\n",yytext);}
%%

int yywrap() {
    return 1;
}