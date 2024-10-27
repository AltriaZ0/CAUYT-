#include <stdio.h>
#include <math.h>

int main(){   
    int a,b,c;
    int whichday(int y,int m,int d);
    scanf("%d,%d,%d",&a,&b,&c);
    printf("%d",whichday(a,b,c));
}

int whichday(int y,int m,int d){   
    int m_d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int m_d_r[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int sum=0;
    int r=(y%4==0 && y%100!=0)||y%400==0 ? 1:0;
    for (int i=0;i<m-1;i++){
        if(r==1){
            sum+=m_d_r[i];
        }
        else{
            sum+=m_d[i];
        }
    }
    sum+=d;
    return sum;
}

