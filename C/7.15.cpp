#include <stdio.h>
int main()
{   char a[100];
    gets(a);
    char *str=a;
    for(int i=0;*(str+i)!='\0';i++){
        printf("%c",*(str+i));
    }
return 0;
}
