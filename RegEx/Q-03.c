/* Q-3: a+
Accept strings with one or more 'a's

Examples:
Valid strings: "a", "aa", "aaa", "aaaa", "aaaaa"
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    while (1) {
        printf("Enter a string: ");
    
        fgets(str, sizeof(str), stdin); 
        int len = strlen(str) - 1; 

        if(len == 0 || str[0] != 'a'){
            printf("Invalid expression.\n");
            return 0;
        }else{
            for(int i=1; i<len; i++){
                if(!(str[i] == 'a')){
                    printf("Invalid expression.\n");
                    return 0;
                }
            }
            printf("Valid expression: a+ \n\n");
        }
    }
}
