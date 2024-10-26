#include <stdio.h>
int main()
{
char str[13]="I love CIEE!";
for(int i=0;str[i]!='\0';i++){
    printf("%c",*(str+i));
}
return 0;
}
