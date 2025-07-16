//Q: Count total vowels and frequency of each vowel in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str); 

    int count=0, countA=0, countE=0, countI=0, countO=0, countU=0;

    for(int i=0; i<len; i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'){
            count++;
            if(str[i]=='a'|| str[i]=='A'){
                countA++;
            }else if(str[i]=='e'|| str[i]=='E'){
                countE++;
            }else if(str[i]=='i'|| str[i]=='I'){
                countI++;
            }else if(str[i]=='o'|| str[i]=='O'){
                countO++;
            }else if(str[i]=='u'|| str[i]=='U'){
                countU++;
            }
        }
    }
    printf("No. of vowel in this string is : %d\n", count);
    printf("No. of 'a' : %d\n", countA);
    printf("No. of 'e' : %d\n", countE);
    printf("No. of 'i' : %d\n", countI);
    printf("No. of 'o' : %d\n", countO);
    printf("No. of 'u' : %d\n", countU);
    return 0;
}
