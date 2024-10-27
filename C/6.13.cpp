#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int num[10];
    int i,j,k;
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    for(j=0;j<10;j++){
        int mx=199999999;
        int mxi;
        for(k=j;k<10;k++){
            if(num[k]<mx){
                mx=num[k];
                mxi=k;
            }
        }
        int tep=num[j];
        num[j]=mx;
        num[mxi]=tep;
    }
    for(i=0;i<10;i++){
        printf("%d ",num[i]);
    }
    return 0;
}


