#include <stdio.h>
#include <math.h>
int main(){ 
    int i,j;
    double mtx[4][5];
    for(i=0;i<3;i++){
        double n=0;
        for(j=0;j<4;j++){
            scanf("%lf",&mtx[i][j]);
                n+=mtx[i][j];
            printf("%.2f ",mtx[i][j]);
        }
        mtx[i][j]=n/4;
        printf("%.2f ",mtx[i][j]);
        printf("\n");
    }
    for(j=0;j<5;j++){
        double m=0;
        for(i=0;i<3;i++){
            m+=mtx[i][j];
        }
        printf("%.2f ",m/3);
    }
}
