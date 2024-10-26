#include <stdio.h>
#include <ctype.h>  
#include <string.h>
#include <math.h>
int jc(int n);

void solve(){
    int n;
    scanf("%d",&n);
    printf("%d",jc(n));
}

int cnt=0;
int jc(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return 2*(jc(n-1));
}

int main(){
    // int t;
    // scanf("%d", &t);
    // while(t--){
        solve();
    // }
    return 0;
}
