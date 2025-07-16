/* Q-9: (ab|ba)(ab)+
Meaning:
    Starts with 'ab' or 'ba'
    Followed by one or more 'ab'

Examples:
Valid strings: "abab", "baab", "ababab", "baabab", "abababab", "baababab"
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    while (1) {
        printf("Enter a string: ");
    
        fgets(str, sizeof(str), stdin); 
        str[strcspn(str, "\n")] = '\0';
        int len = strlen(str); 

        if(len < 4){
            printf("Invalid expression.\n");
            return 0;
        }
        if(!((str[0]=='a' && str[1]=='b') || (str[0]=='b' && str[1]=='a'))){
            printf("Invalid expression.\n");
            return 0;
        }else{
            for(int i=2; i<len; i+=2){
                if(!(str[i]=='a' && str[i+1]=='b')){
                    printf("Invalid expression.\n");
                    return 0;
                }
            }
            printf("Valid expression: (ab|ba)(ab)+ \n\n");
        }
    }
}
