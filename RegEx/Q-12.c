/* Q-12: (01|10)+
 Meaning:
    The string must be one or more repetitions of either 01 or 10

Examples:
Valid strings: "01", "10", "0110", "1001", "010110", "101010", "011010"
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    while (1) {
        printf("Enter a string: ");
    
        fgets(str, sizeof(str), stdin); 
        int len = strlen(str) - 1; 

        if(len < 2){
            printf("Invalid expression.\n");
            return 0;
        }else{
            for(int i=0; i<len; i+=2){
                if(!((str[i]=='0' && str[i+1]=='1') ||(str[i]=='1' && str[i+1]=='0'))){
                    printf("Invalid expression.\n");
                    return 0;
                }
            }
            printf("Valid expression: (01|10)+ \n\n");
        }
    }
}
