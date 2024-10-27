#include <stdio.h>
#include <math.h>

int main(){   
    int n;
    scanf("%d",&n);
    for(int i=7;i>=0;i--){
        if(pow(2,i)<=n){
            printf("1");
            n-=pow(2,i);
        }
        else{
            printf("0");
        }
    }
}