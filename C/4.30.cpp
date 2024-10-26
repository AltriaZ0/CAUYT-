#include <stdio.h>
#include <math.h>
int gcd(int a,int b);

int main()
{   int a,b;
    scanf("%ld%ld",&a,&b);
    printf("最小公倍数为%d",a*b/gcd(a,b));
}

int gcd(int a,int b){
    int temp;
    while (b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }
    printf("最大公因式为%d,",a);
    return a;
}