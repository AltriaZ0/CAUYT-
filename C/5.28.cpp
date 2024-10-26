#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    char str[100]={'\0'};
    gets(str);
    int cr;
    scanf("%c",&cr);
    int l1=strlen(str);
    int i;
    for(i=0;i<l1;i++){
        if(str[i]==cr){
            printf("Position is : %d",i+1);
            return 0;
        }
    }
    printf("Position is : -1");
    return 0;
}
