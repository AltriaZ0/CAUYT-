#include <stdio.h>
int main()
{
    int exchange(int *q1,int *q2,int *q3);
    int a,b,c;
    int *p1=&a,*p2=&b,*p3=&c;

    scanf("%d %d %d",&a,&b,&c);
    exchange(p1,p2,p3);
    printf("%d %d %d",*p1,*p2,*p3); 
    return 0;
}

int swap(int *p1,int *p2){
    int tep=*p1;
    *p1=*p2;
    *p2=tep;
    return 0;
}

int exchange(int *q1,int *q2,int *q3){
    int swap(int *p1,int *p2);

    int *iter[3]={q1,q2,q3};

    for(int i=0;i<3;i++){
        int mx=-0x3f3f3f;
        int index=0;
        for(int j=i+1;j<3;j++){
            if(*iter[j] > mx){
                mx=*iter[j];
                index=j;
            }
        }

        if(mx> *iter[i]){
            swap(iter[index] , iter[i]);
        }
    }
    return 0;
}
