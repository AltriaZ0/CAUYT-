#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
int main() { 
    int n;
    int i,j,k;
    int num[10];
    int lib[10]{0};
    int index;
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    for(i=1,k=1;i<=10;i++){ //找第i名
        int mx=INT_MAX;
        for(j=0;j<10;j++){ //j找第i名的下标
            if(num[j]<mx && lib[j]==0){
                index=j;
                mx=num[j];
            }
        }
        printf("mx=%d \n",mx);

        lib[index]=i;
        printf("lib[%d]=%d \n",index,i);
    }

    for(i=0;i<10;i++){
        printf("%d ",num[i]);
    }
    printf("\n");

    for(i=0;i<10;i++){
        printf("%d ",lib[i]);
    }
    
}
