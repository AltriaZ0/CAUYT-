#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    char str[100];
    char x;
    int i,n;
    scanf("%s %d",&str,&n);
    int l=strlen(str);
    for(i=0;i<n;i++){
        str[i+l]=str[i];
    }
    for(i=0;i<l;i++){
        str[i]=str[i+n];
        printf("%c",str[i]);
    }
return 0;
}
