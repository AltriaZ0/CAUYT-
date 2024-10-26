#include <cmath>
#include <stdio.h>

int main(){
    int n,a,b;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    if(n-a-b>0){
            printf("%d",n-a-b);
            return 0;
        }
    else{
        if (n-a>0 || n-b>0){
            if (n-b<0){
                printf("%d",n-a);
                return 0;
            }
            if (n-a<0){
                printf("%d",n-b);
                return 0;
            }
            if (n-a>n-b){
                printf("%d",n-b);
            }
            if (n-b>n-a){
                printf("%d",n-a);
            }
        return 0;
        }
        else{
        printf("小宫今天要饿肚子了");
    }
    }


}