#include <stdio.h>
#include <math.h>
int main(){ 
    int mtx[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mtx[i][j]);
        }
    }
    printf("%d",mtx[0][0]+mtx[1][1]+mtx[2][2]+mtx[0][2]+mtx[2][0]);
}
