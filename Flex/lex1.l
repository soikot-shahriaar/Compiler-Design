/* Flex program to identify and print digits, numbers, characters, words, and operators */

%{
#include <stdio.h>
%}

%%
[0-9] { printf("Digit=%s\n", yytext); }
[0-9]+ { printf("Number=%s\n", yytext); }
[A-Za-z] { printf("Character=%s\n", yytext); }
[A-Za-z]+ { printf("Word=%s\n", yytext); }
"+"|"-"|"*"|"/"|"<"|">"|"&"|"%" { printf("Operator=%s\n", yytext); }
[\t\n]+ { printf("White Space=%s\n", yytext); }
. { printf("Others=%s\n", yytext); }
%%

int main() {
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}