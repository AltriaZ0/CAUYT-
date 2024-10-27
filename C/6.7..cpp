#include <stdio.h>
#include <ctype.h>  
#include <string.h>
#include <math.h>
int fb(int n);

void solve(){
    int n;
    scanf("%d",&n);
    printf("%d",fb(n-1));
}

int fb(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return fb(n-1)+fb(n-2);
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
