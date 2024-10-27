#include <stdio.h>
int main()
{   char m[10001];
    gets(m);
    int cnt=0;
    while(( *(m+cnt) != '\0')){
        cnt++;
    }
    printf("%d",cnt);
}
