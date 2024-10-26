#include <stdio.h>
int F(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",F(n));
}

int F(int n){
    if (n<=2){
        return 1;
    }
    else{
        return F(n-1)+F(n-2);
    }
}