#include <stdio.h>
#include <math.h>
#include <map>
#include <string>

int main(){ 
    int cnt,target;
    int i,j,k;
    int l[20];
    scanf("%d,%d",&cnt,&target);
    for(i=0;i<cnt;i++){
        if(i==cnt-1){
            scanf("%d",&l[i]);
        }
        else{
            scanf("%d,",&l[i]);
        }
    }

    for (int j=0;j<=i;j++){ 
        for(int k=j;k<=i;k++){
            if (l[j]+l[k]==target && j!=k){
                if(j<k){
                    printf("%d,%d",j,k);
                    return 0;
                }
                if(j>k){
                    printf("%d,%d",k,j);
                    return 0;
                }
            }
        }
    }
    printf("-1");
    
}
