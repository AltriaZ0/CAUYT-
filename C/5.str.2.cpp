#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    int cnt_n=0,cnt_a=0,cnt_s=0;
    char str[100]={'\0'};
    int sum=0;
    gets(str);
    for(int i=0;i<strlen(str);i++){
        sum=sum*10+(str[i]-'0');
    }
    printf("%d",(sum*2));
}
