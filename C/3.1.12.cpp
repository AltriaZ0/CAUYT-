#include <stdio.h>
#include <math.h>

int main(){
    float a;
    int a1;
    int b;
    int m;
    scanf("%f",&a);
    scanf("%d",&b);

    if((int)a<a){
        a1=(int)(a+1);
    }
    else{
        a1=(int)(a);
    }
    m=(a1<=3)? 10:(a1<=10)?((a1-3)*2+10):((a1-13)*3+30);
    if (b>=5){
        if (b%5==0){
            m+=(b/5)*2;
        }
        else{
            m+=(b/5)*2+2;
        }
    }
    printf("%d",m);
}