#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<(n/2);i++){
        if ((i*i)<=n  && (i+1)*(i+1)>n){
            printf("%d",i);
            break;
        }
    }
}