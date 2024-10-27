#include <cmath>
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    c+=1;
    if (c==60){
        c=0;
        b+=1;
    }
    if (b==60){
        b=0;
        a+=1;
    }
    if (a==24){
        a=0;
    }
    printf("%d:%d:%d",a,b,c);
}