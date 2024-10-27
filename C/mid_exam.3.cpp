#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
int main() { 
    int n,m;
    int i,j;
    double sum;
    int gys(int x,int y);
    scanf("%d/%d",&n,&m);
    printf("%d/%d",n/gys(n,m),m/gys(n,m));
}

int gys(int x,int y){
    while(y!=0){
        int tep=x;
        x=y;
        y=tep%y;
    }
    return x;
}