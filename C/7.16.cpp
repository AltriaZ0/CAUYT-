#include <stdio.h>
int main()
{   int m;
    scanf("%d",&m);
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10];
    int i,j;
    for(i=0;i<10-m;i++){
        b[i+m]=*(a+i);
    }
    for(j=0;j<m;j++){
        b[j]=*(a+i+j);
    }
    for(i=0;i<10;i++){
        printf("%d ",b[i]);
    }

}
