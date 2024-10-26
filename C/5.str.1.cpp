#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    int cnt_n=0,cnt_a=0,cnt_s=0;
    char str[100]={'\0'};
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if (isdigit(str[i])){
            cnt_n++;
        }
        else if (isspace(str[i])){
            cnt_s++;
        }
        else{
            cnt_a++;
        }
    }

    printf("%d %d %d",cnt_n,cnt_s,cnt_a);
}
