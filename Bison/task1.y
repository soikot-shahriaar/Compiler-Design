/* Bison parser for number recognition - simple parser that accepts and prints numbers */

%{
#include<stdio.h>
extern int yylex(void);
void yyerror(const char *s);
%}

%token NUMBER

%%
input:
 | input NUMBER {printf("Number=%d\n",$2);}
;
%%

int main() {
    printf("Enter Number:\n");
    yyparse();
    return 0;
}
void yyerror(const char *s){
    fprintf(stderr,"Error:%s\n",s);
}