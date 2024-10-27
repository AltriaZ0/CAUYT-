
#include <stdio.h>
#include <cmath>

int main(){
    int n,i=2;
    scanf("%d",&n);
    while (i<=sqrt(n)){
        if (n%i==0){
            printf("n");
            return 0;
        }
        i+=1;
    }
    printf("y");
}