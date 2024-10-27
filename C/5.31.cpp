#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    char str[100]={'\0'};
    gets(str);
    int l1=strlen(str);
    int cnt=0;
    int i;
    for(i=0;str[i]!='\0';i++){
        if((str[i]>=65 &&str[i]<=90 )||(str[i]>=97 && str[i]<=122))
             {
            if(str[i-1]==' ' || i==0){
                cnt+=1;
            }
        }
    }
    printf("%d",cnt);
}
