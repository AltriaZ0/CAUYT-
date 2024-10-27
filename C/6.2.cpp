#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    double add(double a,double b);
    double x,y;
    scanf("%lf %lf",&x,&y);
    printf("%.2lf",add(x,y));
}

double add(double a,double b){
    return a+b;
}