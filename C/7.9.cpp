#include <stdio.h>
int main(){
    int str[10];
    int ans[10];
    int *p=str;
    for(int i=9;i>=0;i--){
        scanf("%d",&str[i]);

    }
    for(int j=0;j<10;j++,p++){
        ans[j]=*p;
        printf("%d ",ans[j]);
    }
    return 0;
}

