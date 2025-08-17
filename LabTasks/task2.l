%{
#include"task2.tab.h"
#include<stdlib.h>
#include<string.h>    
%}

%%
[0-9]+  {yylval=atoi(yytext); return NUMBER;}
[+\-*/()\n] {return yytext[0];}
[\t]+ ;
. {printf("Invalid character:%s\n",yytext);}
%%

int yywrap(){
    return 1;
}