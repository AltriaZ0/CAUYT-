#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    long int n=0;
    long int m;
    m=1;
    for(int i=1;i<=20;i++){
        m=1;
        for(int j=1;j<=i;j++){
            m=m*j;
        }
        //printf("%d!=%ld\n",i,m);
        n+=m;
    }
    printf("%ld",n);
    return 0;
}