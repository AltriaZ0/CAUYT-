#include <stdio.h>
#include <math.h>

int main(){   
    int a,b,c;
    int m_d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int m_d_r[12]={31,29,31,30,31,30,31,31,30,31,30,31};

    int ly(int y);
    scanf("%d %d %d",&a,&b,&c);
    if(ly(a)){
        c++;
        if(c>m_d_r[b-1]){
            c=1;
            b+=1;
        }
        if(b>12){
            b=1;
            a+=1;
        }
    }else{
        //printf("不是闰年！\n");
        c++;
        if(c>m_d[b-1]){
            c=1;
            b+=1;
        }
        if(b>12){
            b=1;
            a+=1;
        }
    }
    printf("%d %d %d",a,b,c);
}

int ly(int y){   
    return (y%4==0 && y%100!=0)||y%400==0 ? 1:0;
}
