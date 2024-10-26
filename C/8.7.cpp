#include <stdio.h>
#include <math.h>

int main()
{   
    double n=1;
    double sum=0;
    int i=1;
    int cnt=1;
    while(fabs(n)>=0.0001){
        n=i*(1.0/cnt);
        i=-i;
        cnt++;
        sum+=n;
    }
    printf("%lf",sum);
}
