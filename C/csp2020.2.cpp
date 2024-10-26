#include <stdio.h>
#include <math.h>
int main() { 
    int n,k,t,xl,yd,xr,yu;
    int i;
    int num=0; //在高位区域逗留的人数
    int num_pass=0;
    //n个居民，每位居民t个坐标、k个点在矩形内则属于逗留、xl<xr,yd<yu。
    scanf("%d %d %d %d %d %d %d",&n,&k,&t,&xl,&yd,&xr,&yu);
    getchar();
    for(i=0;i<n;i++){
        //printf("i=%d",i);
        int cnt=0;
        int cnt_for_num=0;
        for(int p=0;p<t;p++){
            int x,y;
            scanf("%d%d",&x,&y);
            if(x<=xr && x>=xl && y<=yu && y>=yd){
                cnt_for_num+=1;
            }
            else{
                cnt=cnt_for_num>cnt?cnt_for_num:cnt;
                cnt_for_num=0;
            }
        }
        cnt=cnt_for_num>cnt?cnt_for_num:cnt;
        //printf("此人在高危区域呆了%d秒",cnt);
        if(cnt>0){
            num_pass+=1;
        }
        if(cnt>=k){
            num+=1;
        }
    }
    printf("%d\n%d",num_pass,num);

}
