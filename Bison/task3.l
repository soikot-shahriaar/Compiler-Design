/* Flex lexical analyzer for C-like language tokens - recognizes numbers, keywords, identifiers, operators */

%{
#include "task3.tab.h"
#include<stdlib.h>
#include<string.h>
%}

%%
[0-9]+ {
    yylval.num = atoi(yytext);
    return NUMBER;
}
"if"|"else"|"while"|"return"|"int"|"void" {
    yylval.str = yytext;
    return KEYWORD;
}
[a-zA-Z_][a-zA-Z0-9_]* {
    yylval.str = yytext;
    return IDENTIFIER;
}
"+"|"-"|"="|"/"|"*"|"<"|">"|"<=" {
    yylval.str = yytext;
    return OPERATOR;
}
[ \t\n\r]+ { /* ignore whitespace */ }
%%

int yywrap() {
    return 1;
}
