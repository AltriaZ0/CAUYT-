#include <stdio.h>
#include <math.h>
int main(){
    int x1=1,x2=1,x3=1;
    int a=0;
    int n;
    scanf("%d",&n);
    if(n<=3){
        printf("1");
    }
    for(int i=3;i<n;i++){
        a=x1+x2+x3;
        x3=x2;
        x2=x1;
        x1=a;
    }
    printf("%d",a);
}