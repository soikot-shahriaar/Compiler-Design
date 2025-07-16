/*Q-11: a(bc|cd)+
Meaning:
    Starts with 'a'
    Followed by one or more of 'bc' or 'cd'

Examples:
Valid strings: "abc", "acd", "abcbc", "abccd", "acdbc", "acdcd", "abcbccd"
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
        if(!(str[0] == 'a')){
            printf("Invalid expression.\n");
            return 0;
        }else{
            for(int i=1; i<len; i+=2){
                if(!((str[i]=='b' && str[i+1]=='c') ||(str[i]=='c' && str[i+1]=='d'))){
                    printf("Invalid expression.\n");
                    return 0;
                }
            }
            printf("Valid expression: a(bc|cd)+ \n\n");
        }
    }
}
