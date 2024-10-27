#include <stdio.h>
#include <math.h>
#include <map>
#include <string>

int main(){ 
    int target;
    int l[20];
    int i=0;
    for(i;i<20;i++){
        scanf("%d",&l[i]);
        if(getchar()=='\n'){
            break;
        }
    }
    scanf("%d",&target);

    for (int j=0;j<=i;j++){ 
        for(int k=j;k<=i;k++){
            
            if (l[j]+l[k]==target && j!=k){
                if(l[j]<l[k]){
                    printf("%d %d",l[j],l[k]);
                }
                if(l[j]>l[k]){
                    printf("%d %d",l[k],l[j]);
                }
            }
        }
    }
}
