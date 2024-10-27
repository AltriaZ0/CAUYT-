#include <stdio.h>
#include <ctype.h>  
#include <string.h>
#include <math.h>
int jc(int x,int y);

void solve(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",jc(x,y));
}

int jc(int x,int y){
    if(y==x+1){
        return 1;
    }
    if(y==x+2){
        return 2;
    }
    return jc(x,y-1)+jc(x,y-2);
}

int main(){
    // int t;
    // scanf("%d", &t);
    // while(t--){
        solve();
    // }
    return 0;
}
