#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int l[3]={a,b,c};
    for(int i=0;i<3;i++){
        if (l[i]%2!=0){
            printf("%d is odd number!\n",l[i]);
        }
    }
}