%{
    #include <stdio.h>
    FILE *yyin;
%}

%%
[0-9]+  {printf("%s = Integer Number\n",yytext);}
[0-9]+\.[0-9]+ {printf("%s = Floating-point Number\n",yytext);}
"int"|"double"|"float"|"char"|"do"|"while"|"main"|"return"|"printf"|"scanf"|"include"|"stdio.h" {
    printf("%s = Keyword\n", yytext);
}
[a-zA-Z_][a-zA-Z0-9_]* {
    printf("%s = Identifier\n", yytext);
}
"+"|"-"|"="|"/"|"*"|"<"|">"|"<="|"=="|">=" {
    printf("%s = Operator\n",yytext);
}
";"|","|"("|")"|"{"|"}"|"["|"]"  {printf("%s = Punctuation\n",yytext);}
[\t\n ]+ ; /* ignore whitespace */
. ; /* ignore other characters */
%%

int main() {
    yyin = fopen("input.c", "r");
    if (!yyin) {
        printf("Could not open input.c\n");
        return 1;
    }

    yylex();
    
    fclose(yyin);
    return 0;
}

int yywrap() {
    return 1;
}
