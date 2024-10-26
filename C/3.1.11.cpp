#include <stdio.h>
#include <math.h>

int main(){
    double a;
    char b;
    scanf("%c",&b);
    scanf("%lf",&a);
    switch (b)
    {
    case 'P':
        printf("%.2lf",(a>100) ? (double)(a*0.9):(double)a);
        break;
    case 'H':
        printf("%.2lf",(a>1000)?(double)(a*0.7):(double)(a*0.8));
        break;
    default:
        break;
    }

}