// Q: Write a C program to validate whether a string matches the regular expression (a|b)*c (strings containing only 'a' and 'b' that end with 'c').

#include <stdio.h>
#include <string.h>

int main() {
    int len;
    char str[100];

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);

    if (len < 2) {
        printf("'%s' is NOT a valid String.\n", str);
        return 0;
    }

    if (str[len - 1] != 'c') {
        printf("'%s' is NOT a valid String.\n", str);
        return 0;
    }

    for (int i = 0; i < len - 1; i++) {
        if (!(str[i] == 'a' || str[i] == 'b')) {
            printf("'%s' is NOT a valid String.\n", str);
            return 0;
        }
    }

    printf("'%s' is a VALID String.\n", str);
    return 0;
}
