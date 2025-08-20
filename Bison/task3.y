/* Bison parser for C-like language tokens - parses input and prints recognized tokens */

%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
extern int yylex(void);
extern char *yytext;
void yyerror(const char *s);
%}

%union{
    int num;
    char *str;
}

%token <num> NUMBER 
%token <str> KEYWORD 
%token <str> OPERATOR 
%token <str> IDENTIFIER

%%
input:
    | input NUMBER { printf("Number: %d\n", $2); }
    | input KEYWORD { printf("Keyword: %s\n", $2); }
    | input OPERATOR { printf("Operator: %s\n", $2); }
    | input IDENTIFIER { printf("Identifier: %s\n", $2); }
    ;
%%

int main(void) {
    printf("\nEnter NUMBER,IDENTIFIER,OPERATOR,KEYWORD:\n");
    yyparse();
    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at '%s'\n", s, yytext);
}