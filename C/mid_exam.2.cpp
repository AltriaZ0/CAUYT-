#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
int main() { 
    int n;
    int i,j;
    double sum;
    scanf(" %d",&n);
    for(i=1;i<=n;i++){
        int jc=1;
        for(j=1;j<=i;j++){
            jc*=j;
        }
        sum+=1.0/jc;
    }
    printf("%.2lf",sum);
}
