#include <stdio.h>
int main()
{
    int f(int *p1,int *p2);
    int a,b;
    int *p1=&a,*p2=&b;
    scanf("%d %d",&a,&b);
    f(p1,p2);
    printf("%d %d",*p1,*p2); 
    return 0;
}

int f(int *p1,int *p2){
    if(*p1<*p2){
        int tep=*p1;
        *p1=*p2;
        *p2=tep;
    }
    return 0;
}