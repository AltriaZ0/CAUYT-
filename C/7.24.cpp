#include <stdio.h>
#include <algorithm>

int main(){
    int mn(int x,int y);
    int mx(int x,int y);
    int plus(int x,int y);

    int a=34,b=-21;
    int (*p)(int,int);
    int n;
    scanf("%d",&n);
    if(n==1){
        p=mx;
    }
    if(n==2){
        p=mn;
    }
    if(n==3){
        p=plus;
    }
    printf("%d",(*p)(a,b));
}

int mx(int x,int y){
    return x>y?x:y;
}
int mn(int x,int y){
    return x>y?y:x;
}
int plus(int x,int y){
    return x+y;
}

