
#include <stdio.h>
#include <cmath>

int main(){
    int nums,sum=0,c=0;
    scanf("%d",&nums);
    while (nums){
        c+=1;
        sum+=nums%10;
        nums=nums/10;
    }
    printf("count=%d\n",c);
    printf("sum=%d",sum);
}