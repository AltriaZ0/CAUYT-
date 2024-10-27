#include <stdio.h>
#include <cmath>

int main(){
    int i=1,n;
    double sum=1;
    scanf("%d",&n);
    while(i<n){
        i+=1;
        sum+=pow(-1,i)*(1.0/i);
    }
    printf("%.3lf",sum);
}