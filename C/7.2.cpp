#include <stdio.h>
int main()
{
    int a,b;
    int *p1=&a,*p2=&b;
    scanf("%d %d",&a,&b);
    if(a>b){
        int tep=a;
        *p1=b;
        *p2=tep;
    }
    printf("%d %d",*p2,*p1); 
    return 0;
}