#include <stdio.h>
#include <math.h>

int main(){   
    int l[20];
    int i,j;
    for(i=0;i<20;i++){
        scanf("%d",&l[i]);
    }

    for(i=0;i<20;i++){
        j=0;
        while (j<=20){
            if(l[i] % l[j]==0 & i!=j){
                printf("%d ",l[i]);
                break;
            }
            j++;
        }

    }
}
