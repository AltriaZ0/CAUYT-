#include <stdio.h>
#include <math.h>
int main(){ 
    int A[3][3]={{7,-5,3},{2,8,-6},{1,-4,-2}};
    int B[3][3]={{3,6,-9},{2,-8,3},{5,-2,-7}};
    int r[3][3]={{0}};
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                r[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
}
