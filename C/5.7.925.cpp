#include <stdio.h>
#include <math.h>
#include <map>
#include <string>

int main(){ 
    int l[10];
    int i,j,k;

    for(i=0;i<10;i++){
        int tep;
        scanf("%d",&tep);
        l[i]=tep;
    }
    
    for (j=0; j<9; j++){
        for(k=0; k<9-j;k++){
            if (l[k]>l[k+1]){
                int temp=l[k];
                l[k]=l[k+1];
                l[k+1]=temp;
            }
        }
    }
    for (j=0;j<10;j++){
        printf("%d ",l[j]);
    }
    return 0;
}
