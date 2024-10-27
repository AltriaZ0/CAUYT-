//StudybarCommentBegin
#include <stdio.h>
int main()
{
void input(int *p);
void sort(int *p);
void output(int *p);
int a[10],*p=a;
input(p);
sort(p);
output(p);

return 0;
}
//StudybarCommentEnd
void input(int *p){
    for(int i=0;i<10;i++,p++){
        scanf("%d",p);
    }
}

void sort(int *p){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(p[i]>p[j]){
                int tep=p[i];
                p[i]=p[j];
                p[j]=tep;
            }    
        }
    }
}

void output(int *p){
    for(int i=0;i<10;i++,p++){
        printf("%d ",*p);
    }
}