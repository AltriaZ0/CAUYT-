
#include <stdio.h>
#include <cmath>

int main(){
    int n,i;
    scanf("%d",&n);
    while(n!=1){
        i+=1;
    if(n%2==1){
        n=n*3+1;    
    }
    else{
        n=n/2;
    }
    }
    printf("%d",i);
}