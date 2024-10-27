#include <stdio.h>
#include <math.h>
int main(){
    double nums[10]; 
    double sum=0;
    int i=0,j=0;
    int cnt=0;
    for (i=0;i<10;i++){
        scanf("%lf",&nums[i]);
        sum+=nums[i];
    }
    
    for(i=0;i<10;i++){
        for(j=0;j<9-i;j++){
            if(nums[j]>nums[j+1]){
                double tep=nums[j+1];
                nums[j+1]=nums[j];
                nums[j]=tep;
            }
        }
        printf("%.1lf ",nums[j]);
    }
    printf("\n");

    double av=sum/10;
       for (i=0;i<10;i++){
        if(((nums[i]-av)/av)>0.2){
            cnt+=1;
        }
    }
printf("%d",cnt);
}
