#include <stdio.h>

int main(){
    for(int i=0;i<=34;i++){
        for (int j=0;j<=50;j++){
            for (double k=0;k<=100;k++){
                if(i*3+j*2+k/2==100 && i>0&&j>0&&k>0&& i+j+k==100){
                    printf("%d %d %d\n",i,j,(int)k);
                }
            }
        }
    }
    return 0;
}