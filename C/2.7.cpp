#include <stdio.h>
#include <ctype.h>
#include <math.h>


int main(){
    int a;
    scanf("%d",&a);
    printf("%d",    (a*3+3)*3 /10 +(a*3+3)*3 %10);
}