#include <stdio.h>
#include <ctype.h>
#include <math.h>


int main(){
    double d;
    scanf("%lf",&d);
    printf("%f",3.1415926*pow((d/2),3)*4/3*0.000001*11340);
}