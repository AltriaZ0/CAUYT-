#include <stdio.h>

int main(){
    for(int i=0;i<=20;i++){
        for (int j=0;j<=34;j++){
            for (double k=0;k<=100;k++){
                if(i*5+j*3+k/3==100 && i+j+k==100){
                    printf("%d %d %d\n",i,j,(int)k);
                }
            }
        }
    }
    return 0;
}