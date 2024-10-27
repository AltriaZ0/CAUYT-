#include <stdio.h>
#include <ctype.h>
#include <math.h>


int main(){
    int a;
    scanf("%d",&a);
    printf("%d%d%d",(a%10),(a%100)/10,(a/100));
}