#include <stdio.h>
#include <math.h>

int main(){
float a;
char b;
float c;
scanf("%f%c%f",&a,&b,&c);

if(b=='+'){
    printf("%.2f",a+c);
}

if(b=='-'){
    printf("%.2f",a-c);
}

if(b=='*'){
    printf("%.2f",a*c);
}

if(b=='/'){
    if (c==0){
        printf("error");
        return 0;
    }
    printf("%.2f",a/c);
}

}