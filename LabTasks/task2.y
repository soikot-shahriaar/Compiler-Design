%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
extern int yylex(void);
void yyerror(const char *s);
%}

%token NUMBER
%left '+' '-'
%left '*' '/'

%%
input:
    | input expr '\n' {printf("=%d\n",$2);}
    ;

expr: 
    expr '+' expr {$$=$1+$3;}
    | expr '-' expr {$$=$1-$3;}
    | expr '*' expr {$$=$1*$3;}
    | expr '/' expr {
        if($3==0){
            yyerror("Division by zero");
            $$=0;
        }else{
            $$=$1/$3;
        }
    }
    | '(' expr ')' {$$=$2;}
    | NUMBER {$$=$1;}
    ;
%%

int main(){
    printf("\nEnter Arithmetic Expression:\n");
    yyparse();
    return 0;
}

void yyerror(const char *s){
    fprintf(stderr,"Error: %s\n",s);
}