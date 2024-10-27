
#include <stdio.h>
#include <cmath>

int main(){
    double a=2.0,b=1.0;
    double tep;
    double sum=0;
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        tep=a/b;
        sum+=tep;
        int ttep=a+b;
        b=a;
        a=ttep;
    }
    printf("%.2lf\n",sum);
}