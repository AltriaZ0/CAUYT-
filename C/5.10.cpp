#include <stdio.h>
#include <math.h>
#include <map>
#include <string>

int main(){ 
    int l[10];
    int ll[10];
    int n1=0;
    int n2=0;
    int i,j,k;

    for(i=0;i<10;i++){
        int tep;
        scanf("%d",&tep);
        if (tep%2==0){
            l[n1]=tep;
            n1+=1;
        }

        if (tep%2!=0){
            ll[n2]=tep;
            n2+=1;
        }
    }
    
    for (j=0; j<n2-1; j++){
        for(k=0; k<n2-1;k++){
            if (ll[k]<ll[k+1]){
                int temp=ll[k];
                ll[k]=ll[k+1];
                ll[k+1]=temp;
            }
        }
    }
    for (j=0;j<n1-1;j++){
        for(k=0; k<n1-1;k++){
            if (l[k]>l[k+1]){
                int temp=l[k];
                l[k]=l[k+1];
                l[k+1]=temp;
            }
        }
    }
    for (j=0;j<n2;j++){
     printf("%d ",ll[j]);
    }
    for (j=0;j<n1;j++){
        if (j==n1-1){
            printf("%d",l[j]);
            return 0;
        }
        printf("%d ",l[j]);
    }

    return 0;

}
