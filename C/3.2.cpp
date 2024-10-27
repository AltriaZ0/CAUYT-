
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a<=3){
        printf("L");
    }
    if (a<=4 && a>3){
        printf("M");
    }
    if (a>4){
        printf("H");
    }
    return 0;
}