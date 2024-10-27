#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    int s=0;
    int j=0;
    scanf("%d%d",&n,&m);
    if(n<m){
        swap(n,m);
    }
    int i=m;
    while (i<=n){
        for (j=2; j<=sqrt(i);j++){
            if (i%j==0){
            break;
            } //有一个被整除等于0，就是合数，终止这一层循环
        }
        if(j>sqrt(i) && i!=1){
            s+=1;//为素数，sum+1
            //printf("%d为素数",i);
        }
        i+=1;
    }
    printf("%d",s);
    return 0;
}