/* Flex program to identify, print, and Count digits, numbers, characters, words, and operators from C source code (input.c) */

%{
#include<stdio.h>
int digit=0, number=0, character=0, word=0, operator=0, whitespace=0, others=0;
FILE *yyin;
%}

%%
[0-9] { digit++; printf("Digit=%s\n", yytext); }
[0-9]+ { number++; printf("Number=%s\n", yytext); }
[A-Za-z] { character++; printf("Character=%s\n", yytext); }
[A-Za-z]+ { word++; printf("Word=%s\n", yytext); }
"+"|"-"|"*"|"/"|"<"|">"|"&"|"%" { operator++; printf("Operator=%s\n", yytext); }
[\t\n]+ { whitespace++; printf("White Space=%s\n", yytext); }
. { others++; printf("Others=%s\n", yytext); }
%%

int main() {
    yyin = fopen("input.c", "r");
    if (!yyin) {
        printf("Could not open input.c\n");
        return 1;
    }
    
    yylex();
    
    printf("Total Digits: %d\n", digit);
    printf("Total Numbers: %d\n", number);
    printf("Total Characters: %d\n", character);
    printf("Total Words: %d\n", word);
    printf("Total Operators: %d\n", operator);
    printf("Total White Spaces: %d\n", whitespace);
    printf("Total Others: %d\n", others);
    
    fclose(yyin);
    return 0;
}

int yywrap() {
    return 1;
}