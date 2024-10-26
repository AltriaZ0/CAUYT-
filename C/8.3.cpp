#include <stdio.h>
#include <math.h>

int main() { 
    int n,sum,i;
    scanf("%d",&n);

    sum=0;
    for(i=0;i<=n;i++){
        if(i%2==0){
            sum+=i; 
        }
    }
    printf("%d\n",sum);

    sum=0;
    for(i=0;i<=n;i++){
        if(i%2!=0){
            sum+=i; 
        }
    }
    printf("%d\n",sum);

    sum=0;
    for(i=0;i<=n;i++){
            sum+=i; 
    }
    printf("%d",sum);
}
