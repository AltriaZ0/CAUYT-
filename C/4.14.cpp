
#include <stdio.h>
#include <cmath>

int main(){
    int i;
    scanf("%d",&i);
    int n=i;
    for (i;i>=1;i--){
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for (i=2;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}