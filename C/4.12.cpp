
#include <stdio.h>
#include <cmath>

int main(){
    int a,n,i=0,sum=0;
    scanf("%d",&a);
    scanf("%d",&n);
    while (i<n){
        for(int j=0;j<=i;j++){
            sum+=a*pow(10,j);
        }
        i+=1;
    }
    printf("%d",sum);
}