#include <stdio.h>
#include <math.h>

int main(){   
    int l[20];
    l[0]=1;
    l[1]=1;
    for(int i=2;i<20;i++){
        l[i]=l[i-1]+l[i-2];
    }
    for(int j=0;j<20;j++){
        if(j%5==0&& j!=0){
            printf ("\n");// 控制每输出5个数换行
        }
        printf("%12d",l[j]);          //输出一个数
    }
}
