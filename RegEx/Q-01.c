/*Q-1: (a|b)*
Accept any combination (including none) of 'a' and 'b'

Examples:
Valid strings: "", "a", "b", "ab", "ba", "aab", "bba", "ababab", "abbaab"
*/

#include <stdio.h>
#include <string.h>

int main() {
  char str[100];

  while (1) {
    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin); 
    int len = strlen(str) - 1; 

    for (int i = 0; i < len; i++) { 
      if (!(str[i] == 'a' || str[i] == 'b')) {
        printf("Invalid expression\n");
        return 0;
      }
    }
    printf("Valid expression: (a|b)* \n\n");
  }
}
