#include <stdio.h>
#include <math.h>

int main(){
    double a=0;
    int b;
    scanf("%lf",&a);
    if ((int)a <a){
        b=(int)(a+1);
    }
    if(b<=10){
        printf("30");
    }
    if(b>10 && b<50){
        printf("%d",30+(b-10)*3);
    }
    if(b>=50){
        printf("%d",150+(b-50)*2);
    }

}