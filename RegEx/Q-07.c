/* Q-7: 0(1|0)*
Accept '0' followed by any combination of '0's and '1's

Examples:
Valid strings: "0", "01", "00", "010", "001", "0110", "01010", "00110"
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    while (1) {
        printf("Enter a string: ");
    
        fgets(str, sizeof(str), stdin); 
        int len = strlen(str) - 1; 

       if (len == 0 || str[0] != '0') {
            printf("Invalid expression.\n");
            return 0;
        }else{
            for(int i=1; i<len; i++){
                if(!(str[i]=='1' || str[i]=='0')){
                    printf("Invalid expression.\n");
                    return 0;
                }
            }
            printf("Valid Expression: 0(1|0)* \n\n");
        }
    }
}
