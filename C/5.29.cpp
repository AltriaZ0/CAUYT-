#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    char str[100];
    char str2[100]="My name is ";
    gets(str);
    strcat(str2,str);
    printf("%s",str2);
    return 0;
}
