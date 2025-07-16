/*Q-5:(ab)+
Accept one or more repetitions of 'ab'

Examples:
Valid strings: "ab", "abab", "ababab", "abababab"
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    while (1) {
        printf("Enter a string: ");
    
        fgets(str, sizeof(str), stdin); 
        int len = strlen(str) - 1; 

        if(len<2 || len%2 != 0){
            printf("Invalid expression.\n");
            return 0;
        }else{
            for(int i=0; i<len; i+=2){
                if(!(str[i]=='a' && str[i+1]=='b')){
                    printf("Invalid expression.\n");
                    return 0;
                }
            }
            printf("Valid Expression: (ab)+ \n\n");
        }
    }
}
