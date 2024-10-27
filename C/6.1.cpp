#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    int max(int a,int b);
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",max(x,y));
}

int max(int a,int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}