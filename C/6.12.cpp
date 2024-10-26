#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char str[100];  
    char str2[100];  
    int n;
    scanf("%s",&str);
    scanf("%d",&n);
    void copystr(char *p1, char *p2, int m);
    copystr(str,str2,n);
    printf("%s\n", str2);
    return 0;
}

void copystr(char *p1, char *p2, int m){   
    int i;
    for(i=0; i<=strlen(p1)-m;i++){
        p2[i]=p1[i+m-1];
    }
    p2[i]='\0';

}

