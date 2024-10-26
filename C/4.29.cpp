#include <stdio.h>
#include <math.h>
int main(){
    int y,m,d;
    scanf("%d%d%d",&y,&m,&d);
    int sum=y*10000+m*100+d;
    for(int i=2;i<sqrt(sum);i++){
        if(sum%i==0){
            printf("n");
            return 0;
        }
    }
    printf("y");
}