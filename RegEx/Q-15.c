// Q: Write a C program to validate whether a string matches the regular expression (ab)^2+ using AND gate logic.

#include <stdio.h>
#include <string.h>

int main() {
    int len;
    char str[100];

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);

    // Regular Expression: (ab)^2+

    if (len % 2 != 0 || len < 4) {
        printf("'%s' is NOT a valid String.\n", str);
        return 0;
    }

    for (int i = 0; i < len; i += 2) {
        // Using AND gate
        if (!(str[i] == 'a' && str[i + 1] == 'b')) {
            printf("'%s' is NOT a valid String.\n", str);
            return 0;
        }
    }

    printf("'%s' is a VALID String.\n", str);
    return 0;
}
