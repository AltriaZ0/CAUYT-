#include <stdio.h>
int main()
{
double a[3][4]={{65,57,70,60},{58,87,90,81},{90,99,85,98}};

int sum=0;
int cnt=0;
for(int i=0;i<3;++i){
    bool flag=0;
    for(int j=0;j<4;j++){
        if(*(*(a+i)+j)<60){
            flag=1;
            cnt++;
        }
    }
    if(flag){
        printf("No.%d:\n",cnt);
        for(int j=0;j<4;j++){
            printf("%.1lf ",*(*(a+i)+j));
        }
        printf("\n");
    }
}
return 0;
}
