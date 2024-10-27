#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    int i,j;
    char str[100]={'\0'};
    char str2[100]={'\0'};
    gets(str);  
    int l1=strlen(str);
    for(i=0;i<l1;i++){
        if(isalpha(str[i])){
            str2[i]=str[i]+3;
        }
        printf("%c",str2[i]);
    }
}
