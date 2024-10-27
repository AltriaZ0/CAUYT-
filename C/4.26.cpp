#include <stdio.h>
#include <math.h>
int main(){
    int i=1;
    int sum=0;
    while(i<=2021){
        sum+=i;
        i+=20;
    }
    printf("sum=%d",sum);
}