
#include <stdio.h>
#include <vector>

int main(){
    int n,sum=1;
    int i=3;
    scanf("%d",&n);
    
    while(i<=n){
        if ((i*i)%391==13){
            printf("%d ",i);
        }
        i+=1;
    }
}