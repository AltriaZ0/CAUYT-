#include <stdio.h>
#include <math.h>

int main(){   
    int l[10];
    double m=0;
    int c=0;
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&l[i]);
        m+=l[i];
    }
    double av=m/10;
    for(i=0;i<10;i++){
        if(l[i]>av){
            c+=1;
        }
    }
    printf("%d",c);
}
