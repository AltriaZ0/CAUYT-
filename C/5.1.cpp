#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(){   
    int l[10];
    int m=2e9;
    for(int i=0;i<10;i++){
        scanf("%d",&l[i]);
        if(abs(l[i])<abs(m)){
            m=l[i];
        }
    }
    printf("%d",m);
    return 0;
}
