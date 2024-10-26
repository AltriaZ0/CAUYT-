#include <stdio.h>
#include <ctype.h>  
#include <string.h>
#include <math.h>
int main(){ 
    int x;
    int ss(int a);
    scanf("%d",&x);
    if(x<6 || x%2!=0){
        printf("Input an even num (>=6)");
        return 0;
    }
    for(int j=2;j<x;j++){
        if(ss(j)!=0 && ss(x-j)!=0){
            printf("%d+%d",j,x-j);
            break;
        }
    }
}

int ss(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return a;
}