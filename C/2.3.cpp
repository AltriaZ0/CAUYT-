#include <stdio.h>
#include <ctype.h>
#include <math.h>


int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("%.2f",(a+b+c)/2*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c));
}