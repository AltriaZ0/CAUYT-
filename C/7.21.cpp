#include <stdio.h>
#include <string.h>
int main()
{   char m[100];
    scanf("%s",&m);
    int i=0;
    int j;
    for(i=0;i<strlen(m);i++){
        for(j=i;j<strlen(m);j++){
            printf("%c",*(m+j));
        }
        printf("\n");
    }
}
