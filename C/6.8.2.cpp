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

int jc(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*jc(n-1);
    }
}

int main(){
    // int t;
    // scanf("%d", &t);
    // while(t--){
        solve();
    // }
    return 0;
}
