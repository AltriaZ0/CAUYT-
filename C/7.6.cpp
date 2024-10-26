#include <stdio.h>
int maxindex;
int minindex;
int max=-0x3f3f3f;
int min=0x3f3f3f;

int main(){
    int str[10];   
    int *x=str;
    void in_num(int *x);
    void exchange(int *x);
    void out_num(int *x);
    in_num(x);
    exchange(x);
    out_num(x);
}

void exchange(int *x){
    int tep=x[0];
    x[0]=x[minindex];
    x[minindex]=tep;

    int tep2=x[9];
    x[9]=x[maxindex];
    x[maxindex]=tep2;
}

void in_num(int *x){
    for(int i=0;i<10;i++){
        scanf("%d",&(x[i]));
        if(max<=x[i]){
            max=x[i];
            maxindex=i;
        }
        if(min>=x[i]){
            min=x[i];
            minindex=i;
        }
    }
}


void out_num(int *x){
    for(int i=0;i<10;i++){

        printf("%d",x[i]);
        if(i<9){
            printf(" ");
        }
    }
}