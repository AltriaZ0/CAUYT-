#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    int i;
    char str[100]={'\0'};
    char str2[100]={'\0'};
    gets(str);
    gets(str2);
    int l1=strlen(str);
    int l2=strlen(str2);
    for(i=0;i<l2;i++){
        str[l1+i]=str2[i];
    }
    for(i=0;i<l1+l2;i++){
        printf("%c",str[i]);
    }   
}
