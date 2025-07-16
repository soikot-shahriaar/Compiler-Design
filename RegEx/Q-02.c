/*Q-2: ab*
Accept strings that start with 'a' followed by zero or more 'b's

Examples:
Valid strings: "a", "ab", "abb", "abbb", "abbbb"
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
            printf("Invalid expression\n");
        }else{
            for(int i=1; i<len; i++){
                if(!(str[i]=='b')){
                    printf("Invalid expression\n");
                    return 0;
                    }
                }
                printf("Valid expression: ab* \n\n");
            }
    }
}
