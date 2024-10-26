#include <stdio.h>
#include <cmath>

int main(){
    int a=1,b=1;
    int tep;
    int sum=0;
    int n;
    scanf("%d",&n);
    for(int i=2; i<n; i++){
        tep=a+b;
        sum+=tep;
        a=b;
        b=tep;
    }
    printf("%d\n",b);
}