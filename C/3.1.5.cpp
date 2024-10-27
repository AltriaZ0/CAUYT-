#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (a*a+b*b<100){
        printf("%d",a+b);
    }
    else{
        printf("%d",(a*a+b*b)/100);
    }
}