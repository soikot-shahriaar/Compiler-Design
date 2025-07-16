/* Q-4: (ab|ba)
Accept exactly either 'ab' or 'ba'

Examples:
Valid strings: "ab", "ba"
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    while (1) {
        printf("Enter a string: ");
    
        fgets(str, sizeof(str), stdin); 
        int len = strlen(str) - 1; 

    if(!(len == 2)){
        printf("Invalid expression.\n");
        return 0;
    }else{
        if(!((str[0]=='a' && str[1]=='b') || (str[0]=='b' && str[1]=='a'))){
            printf("Invalid expression.\n");
            return 0;
        }
        printf("Valid expression: (ab|ba) \n\n");
        }
    }
}
