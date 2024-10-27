#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double x1,x2;
    x1=(-b+sqrt(b*b-4.0*a*c))/(2.0*a);
    x2=(-b-sqrt(b*b-4.0*a*c))/(2.0*a);
    if (x1>x2){
        printf("%.2f %.2f",x1,x2);
    }
    else{
        printf("%.2f %.2f",x2,x1);
    }
}