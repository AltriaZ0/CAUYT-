#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    int mx(int a,int b);
    int mn(int a,int b);
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d %d",mx(x,y),mn(x,y));
}

int mx(int a,int b){
    int tep;
    while(b!=0){
        tep=a%b;
        a=b;
        b=tep;
    }
    return a;
}

int mn(int a,int b){
    int mx(int a,int b);
    return (a*b)/(mx(a,b));
}