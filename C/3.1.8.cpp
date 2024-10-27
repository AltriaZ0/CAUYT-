#include <stdio.h>
#include <math.h>

int main(){
    float a,b;
    scanf("%f%f",&a,&b);
    float t= a/(b*b);
    if(t<18){
        printf("lower weight");
    }
    else if (t>=18 && t<25) {
        printf("normal weight");
    }
    else if (t>=25 && t<27) {
        printf("higher weight");
    }
    else if (t>=27) {
        printf("obesity");
    }
}