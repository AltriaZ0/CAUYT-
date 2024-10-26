#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int m,n;
    int sum=0;
    scanf("%d%d",&m,&n);
    if(m<n){
        swap(m,n);
    }
    for(int i=1;i<=m;i++){
        if(i%n==0){
            sum+=i;
        }
    }
    printf("%d",sum);

}