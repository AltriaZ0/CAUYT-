#include <stdio.h>
#include <math.h>
#include <string.h>

double av=0;
int mx=0;
int i;

int main(){
    int num[10];

    int average(int n[]);
    int max(int n[]);

    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    average(num);
    int cnt=0;
    for(i=0;i<10;i++){
        if(num[i]>av)cnt++;
    }
    printf("%d\n",cnt);
    printf("%d\n",max(num));

    return 0;
}

int average(int n[]){
    for(i=0;i<10;i++){
        av+= n[i]/10.0;
    }
    return av;
}

int max(int n[]){
    for(i=0;i<10;i++){
        if(n[i]>mx){
            mx=n[i];
        }
    }
    return mx;
}