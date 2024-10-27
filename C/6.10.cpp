#include <stdio.h>
#include <math.h>
    int m_d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int m_d_r[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int main(){   
    int y,m,d;


    int ly(int a);
    int ld(int a,int b,int c);
    int nd(int a,int b,int c);
    scanf("%d %d %d",&y,&m,&d);
    ld(y,m,d);
    nd(y,m,d);
    return 0;
}

int ly(int a){   
    return (a%4==0 && a%100!=0)||a%400==0 ? 1:0;
}

int nd(int a,int b,int c){
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
    printf("%2d %2d %2d\n",a,b,c);
    return 0;
}

int ld(int a,int b,int c){
    //printf("下一天开始前%d %d %d\n",a,b,c);
    if(ly(a)){
        c--;
        if(c==0){
            c=m_d_r[(b-2)%12];
            b--;
        }
        if(b==0){
            b=12;
            a--;
        }
    }else{
        //printf("不是闰年！\n");
        c--;
        if(c==0){
            c=m_d[(b-2)%12];
            b--;
        }
        if(b==0){
            b=12;
            a--;
        }
    }
    printf("%2d %2d %2d\n",a,b,c);
    return 0;
}