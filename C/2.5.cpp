#include <stdio.h>
#include <ctype.h>
#include <math.h>


int main(){
    int a;
    scanf("%d",&a);
    printf("%d   %d   %d   %d   %d",(a/10000),(a%10000)/1000,(a%1000)/100,(a%100)/10,a%10);
}