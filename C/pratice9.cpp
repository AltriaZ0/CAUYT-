#include <cmath>
#include <stdio.h>

int main(){
    for (int i=1000;i<10000;i++){
        int ab=i/100;
        int cd=i%100;
        if(i==(ab+cd)*(ab+cd)){
        printf("%d\n",i);
        }
    }

}