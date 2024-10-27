#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    char str[100]={'\0'};
    char str2[100]={'\0'};
    int index;
    scanf("%d ",&index);
    gets(str);
    gets(str2);
    int l1=strlen(str);
    int l2=strlen(str2);
    int i,j;
    for(i=0;i<l1+l2;i++){
        if(i==index-1){
            for(j=0;j<l2;j++){
                str[i+j+l2]=str[i+j];
            }
            for(j=0;j<l2;j++){
                str[i+j]=str2[j];
            }
        }
        printf("%c",str[i]);
    }
}
