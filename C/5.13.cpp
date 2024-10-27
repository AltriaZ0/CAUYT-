#include <stdio.h>
#include <math.h>
int main(){ 
    int mtx[10][10]={{1},{1},{1},{1},{1},{1},{1},{1},{1},{1}};
    printf("%d\t",mtx[0][0]);
    printf("\n");
    int i,j;
    for(i=1;i<10;i++){
            printf("%-8d",mtx[i][0]);
            for(j=1;j<i+1;j++){
                mtx[i][j]=mtx[i-1][j-1]+mtx[i-1][j];
                printf("%d\t",mtx[i][j]);
            }
            printf("\n");
        }
}
