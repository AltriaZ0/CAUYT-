#include <cmath>
#include <stdio.h>

int main(){
    int a,b,c,n;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    printf("%lf",pow(a,n)+pow(b,n)+pow(c,n));
}