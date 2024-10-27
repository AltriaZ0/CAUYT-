#include <stdio.h>
#include <math.h>
#include <algorithm>
int main()
{   
    int l[10]={0};
    int n;
    int j=0;
    int s(int x);
    void px(int x[]);
    for(int i=0;i<10;i++){
        scanf("%d",&n);
        if (s(n)){
            l[j]=n;
            j++;
        }
    }
    if(l[0]==0){
        printf("No prime");
    }
    px(l);
    return 0;
}

int s(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

void px(int x[]){
    for(int i=0;x[i]!=0;i++){
        int tep=0x3f3f3f;
        int idx=0;
        for(int j=i;x[j]!=0;j++){
            if(x[j]<tep){
                tep=x[j];
                idx=j;
            }
        }
        x[idx]=x[i];
        x[i]=tep;

        printf("%d ",x[i]);
    }
}