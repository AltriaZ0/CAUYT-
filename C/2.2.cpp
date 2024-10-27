#include <stdio.h>
#include <ctype.h>
#include <math.h>


int main(){
    double d1,d2;
    scanf("%lf%lf",&d1,&d2);
    printf("%f",3.1415926*pow((d1/2),3)*4/3*0.000001*11340-3.1415926*pow((d2/2),3)*4/3*0.000001*11340);
}