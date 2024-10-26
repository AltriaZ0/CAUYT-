#include <stdio.h>
#include <ctype.h>  
#include <string.h>
#include <math.h>
int main(){ 
    int n;
    int fibnacci(int n);
    scanf("%d",&n);
    printf("%d",fibnacci(n));
}

int fibnacci(int n){
    int x1=1;
    int x2=1;
    int x;
    if(n==1|| n==2){
        return 1;
    }

    for(int i=3;i<=n;i++){
        x=x1+x2;
        x2=x1;
        x1=x;
    }
    return x;
}