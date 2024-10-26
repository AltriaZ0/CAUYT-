#include <stdio.h>
#include <math.h>

int main()
{   
    int n;
    int mx=-0x3f3f3f;
    int cmx=-0x3f3f3f;
    for(int i=0;i<10;i++){
        scanf("%d",&n);
        if(mx<n){
            cmx=mx;
            mx=n;
        }
        else{
            if(n>cmx){
                cmx=n;
            }
        }
    }
    printf("%d %d",mx,cmx);
}
