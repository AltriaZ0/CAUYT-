#include <stdio.h>

int main(){
    double a,m;
    scanf("%lf",&a);
    if (a<=240.0){
        m=a*0.53;
    }
    if (a<=400.0 && a>240.0){
        m=240.0*0.53+(a-240.0)*0.58;
    }
    if (a>400.0){
        m=240.0*0.53+160.0*0.58+(a-400.0)*0.83;
    }
    printf("%.2lf",m);
    return 0;
}