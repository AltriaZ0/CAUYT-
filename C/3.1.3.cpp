#include <stdio.h>
#include <math.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("%c",((a%4==0 && a%100!=0)||a%400==0 ? 'y':'n'));
}