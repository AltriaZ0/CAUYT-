#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    double x1,x2;
    double delta=b*b-4.0*a*c;
    scanf("%lf%lf%lf",&a,&b,&c);

    if (a==0 && b==0){
        printf("Not an equation");
        return 0;
    }
    if (a==0){
        printf("%.2f",(-c)/b);
        return 0;
    }

    if (delta>0){
        x1=(-b+sqrt(delta))/(2.0*a);
        x2=(-b-sqrt(delta))/(2.0*a);
        if (x1>x2){
            printf("%.2lf %.2lf",x1,x2);
        }
        else{
            printf("%.2lf %.2lf",x2,x1);
        }
    }
    else if (delta==0){
        printf("%.2f",(-b)/(2.0*a));
    }
    else{
        printf("%.2lf+%.2lfi %0.2lf-%0.2lfi", (-b)/(2.0*a), fabs(sqrt(-delta)/(2.0*a)), (-b)/(2.0*a), fabs(sqrt(-delta)/(2.0*a)));
    }


}