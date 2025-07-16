// Q: Write a C program to validate whether a given string is a valid programming language identifier.

#include <stdio.h>
#include <string.h>

int main() {
    int len;
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);
    // printf("%d", len);

    if (len == 1) {
        if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))) {
            printf("'%s' is NOT a valid identifier.\n", str);
            return 0;
        }
    } else if (len > 1){
        if (!((str[0] == '_') || (str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))) {
            printf("'%s' is NOT a valid identifier.\n", str);
            return 0;
        }

        for (int i = 1; i < len; i++) {
            if (!((str[i] == '_') || (str[i] >= 'a' && str[i] <= 'z') ||
                  (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))) {
                printf("'%s' is NOT a valid identifier.\n", str);
                return 0;
            }
        }
    }

    printf("'%s' is a VALID identifier.\n", str);
    return 1;
}
