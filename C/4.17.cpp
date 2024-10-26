#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int s=0;
    scanf("%d",&n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=n*3+1;
        }
        s+=1;
    }
    printf("%d",s);
}