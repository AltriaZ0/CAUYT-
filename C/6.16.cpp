#include <stdio.h>
#include <math.h>
#include <string.h>

double av=0;
int mx=0;
int mn=0x3f3f3f;
int i;

int main(){
    int num[10];

    double average(int n[]);
    int max(int n[]);
    int min(int n[]);

    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    printf("%lf,",average(num));
    printf("%d,",min(num));
    printf("%d\n",max(num));
    return 0;
}

double average(int n[]){
    for(i=0;i<10;i++){
        av+=n[i]/10.0;
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

int min(int n[]){
    for(i=0;i<10;i++){
        if(n[i]<mn){
            mn=n[i];
        }
    }
    return mn;
}