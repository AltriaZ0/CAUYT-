#include <stdio.h>
#include <math.h>
int main(){
    int n,i,k;
    scanf("%d",&n);
    int word[9]={1,2,3,4,5,6,7,8,9};
    int c=0;
    for(i=0;i<n+1;i++){
            for(k=0;k<i;k++){
                printf(" ");
            }
            for(k=0;k<2*n+1-i*2;k++){
                printf("%d",word[c%9]);
                c+=1;
            }
            for(k=0;k<i;k++){
                printf(" ");
            }
        printf("\n");
    }
    for(i=n-1;i>=0;i--){
        for(k=0;k<i;k++){
            printf(" ");
        }
        for(k=0;k<2*n+1-i*2;k++){
            printf("%d",word[c%9]);
            c+=1;
        }
        for(k=0;k<i;k++){
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}