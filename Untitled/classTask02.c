//Q: Count the number of articles in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100], newstr[100];
    int count=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str); 

    int j = 0;
    for(int i=0; i<=len; i++){
        if(str[i]!=' ' && str[i]!='\0'){
            newstr[j]=str[i];
            j++;
        }else{
            newstr[j]='\0';
            if(j > 0){
                    if(strcmp(newstr,"a")==0 || strcmp(newstr,"an")==0 || strcmp(newstr,"the")==0){
                        count++;
                    }
                j = 0;
            }
        }
    }
    printf("No. of articles: %d\n",count);
    return 0;
}
