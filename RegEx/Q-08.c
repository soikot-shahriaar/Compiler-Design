/*Q-8: (a|b)c+d
Meaning:
    Starts with 'a' or 'b'
    Followed by one or more 'c's
    Ends with exactly one 'd'

Examples:
Valid strings: "acd", "bcd", "accd", "bcccd", "accccd", "bcccccd"
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    while (1) {
        printf("Enter a string: ");
    
        fgets(str, sizeof(str), stdin); 
        int len = strlen(str) - 1; 

        if(len < 3){
            printf("Invalid expression.\n");
            return 0;
        }
        if(!((str[0]=='a' || str[0]=='b') && str[len-1]=='d')){
            printf("Invalid expression.\n");
            return 0;
        }else{
            for(int i=1; i<len-1; i++){
                if(str[i]!='c'){
                    printf("Invalid expression.\n");
                    return 0;
                }
            }
            printf("Valid expression: (a|b)c+d \n\n");
        }
    }
}
