/*Q-6: a(bc)+
Accept 'a' followed by one or more repetitions of 'bc'

Examples:
Valid strings: "abc", "abcbc", "abcbcbc", "abcbcbcbc"
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    while (1) {
        printf("Enter a string: ");
    
        fgets(str, sizeof(str), stdin); 
        int len = strlen(str) - 1; 

        if(len<3 || len%2 == 0){
            printf("Invalid expression.\n");
            return 0;
        }else if(str[0]!='a'){
            printf("Invalid expression.\n");
            return 0;
        }else{
            for(int i=1; i<len; i+=2){
                if(!(str[i]=='b' && str[i+1]=='c')){
                    printf("Invalid expression.\n");
                    return 0;
                }
            }
            printf("Valid Expression: a(bc)+ \n\n");
        }
    }
}
