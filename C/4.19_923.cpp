#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int f=4*n;

    for(int i=1;i<=n;i++){
        f-=2;
        if(f==m){
            printf("%d %d",i,n-i);
        }
    }
}