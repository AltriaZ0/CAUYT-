#include <stdio.h>
int main()
{
int a[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};

int *p=a[0];
int sum=0;
int cnt=0;
for(int i=0;i<3;++i){
    for(int j=0;j<4;j++){
        cnt++;
        sum+=*p;
        p++;
    }
}
printf("average = %.2lf\n",(sum*1.0)/cnt);
printf("the score of NO.3 are:\n");
p=a[2];
for(int j=0;j<4;j++){

    printf("%.2lf",*p*1.0);
        if(j<3){
        printf(" ");
}
    p++;
}
return 0;
}
