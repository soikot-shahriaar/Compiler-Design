/* Flex program to count keywords, identifiers, and other characters in C source code (input.c) */

%{
#include <stdio.h>
int keyword=0, id=0, others=0;
FILE *yyin;
%}

%%
"int"|"double"|"float"|"char"|"do"|"while"|"main"|"return"|"printf"|"scanf"|"include"|"stdio.h" {
    keyword++;
    printf("'%s' is a keyword\n", yytext);
}
[a-zA-Z_][a-zA-Z0-9_]* {
    id++;
    printf("'%s' is an identifier\n", yytext);
}
. {
    others++;
}
%%

int main() {
    yyin = fopen("input.c", "r");
    if (!yyin) {
        printf("Could not open input.c\n");
        return 1;
    }
    
    yylex();
    
    printf("Number of keywords: %d\n", keyword);
    printf("Number of identifiers: %d\n", id);
    printf("Number of other characters: %d\n", others);
    
    fclose(yyin);
    return 0;
}

int yywrap() {
    return 1;
}
