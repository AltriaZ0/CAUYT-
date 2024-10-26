#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    printf("WTTF");
    int a=0,b=0;
    int fsum;
    char str1[1000000] = "";
    if(scanf("%d%d",&a,&b)){};
    int sum=a+b;
    fsum=fabs(a+b);
    int i=1000000;
    while(i!=1){
        char tep[1000000]="";
        if(fsum/i!=0){
        snprintf(tep, sizeof(tep), "%d,",fsum/i); 
        strcat(str1,tep);
        }

        i=i/1000;
    }
    char tep[1000000]="";
    snprintf(tep, sizeof(tep), "%d", fsum%1000); 
    strcat(str1,tep);

    if(sum<0){
        strcat("-",str1);
    }
    printf("%s",str1);
    return 0;
}
