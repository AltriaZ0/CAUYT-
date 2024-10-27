#include <stdio.h>
#include <ctype.h>  
#include <string.h>
#include <math.h>
int main(){ 
    int mx;
    int max(int a,int b);
    scanf("%d",&mx);
    for(int i=0;i<7;i++){
        int tep;
        scanf("%d",&tep);
        mx=max(mx,tep);
    }
    printf("%d",mx);
}

int max(int a,int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}