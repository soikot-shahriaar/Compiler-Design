//Q: Count the frequency of each word in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100], newstr[100];
    char words[50][50];
    int freq[50]={0};
    int count=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    
    str[strcspn(str, "\n")] = '\0';  
    int len = strlen(str); 

    int j=0;
    for(int i=0; i<=len; i++){
        if(str[i]!=' ' && str[i]!='\0'){
            newstr[j]=str[i];
            j++;
        }else{
            newstr[j]='\0';
            if(j>0){
                int found=0;
                for(int k=0; k<count; k++){
                    if(strcmp(words[k],newstr)==0){
                            freq[k]++;
                    found=1;
                    break;
                    }
                }
                if(!found){
                     strcpy(words[count],newstr);
                        freq[count]=1;
                        count++;
                }
                j=0;
            }
        }
    }
    printf("Stored words and their frequencies: \n");
    for(int m=0; m<count; m++){
        printf("%s : %d\n",words[m],freq[m]);
    }
    return 0;
}
