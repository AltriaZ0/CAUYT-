#include <stdio.h>
#include <cmath>
#include <string.h>

int main(){
    int n=100;
    for (int i=1;i!=n;i++){
        char buffer[99999];
        sprintf(buffer, "%d", i);
        if ((i*i) % (int)(pow(10,strlen(buffer)))==i){
            printf("%d\n",i);
        }
    }
    return 0;
}   