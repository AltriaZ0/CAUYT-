#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int ans;
    int mx=0x3f3f3f;
    for(int i=0;i<10;i++){
        scanf("%d",&n);
        if(fabs(n)<mx){
            mx=fabs(n);
            ans=n;
        }
    }
    printf("%d",ans);

}
