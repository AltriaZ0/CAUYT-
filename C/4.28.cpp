#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double m;
    scanf("%lf %d",&m,&n);
    double sum=m;
    m=m/2;
    for(int i=1;i<n;i++){
        sum+=2*m;
        m=m/2;
    }
    printf("%.2f %.2f",m,sum);

}