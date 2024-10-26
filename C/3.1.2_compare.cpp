#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    if (a>b){
        printf("%.2lf", a>c? a:c);
    }
    else{
        printf("%.2lf", b>c? b:c);
    }
}