#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,t;
    scanf("%lf%lf%lf",&a,&b,&c);
    double p[3]={a,b,c};
    //int size = sizeof(p)/sizeof(p[0]);

    for(int i=1;i<3;i++){
        for (int j=0;j<3-i;j++){
            if (p[j]>p[j+1]){
                t=p[j+1];                
                p[j+1]=p[j];
                p[j]=t;
            }
        }
        /* for (int l = 0; l < size; l++) {
            printf("%lf,", p[l]);
        } 
        printf("[%lf,%lf,%lf]",p[0],p[1],p[2]);
        printf("\n");*/
    }
    printf("%.2lf",p[2]);
}