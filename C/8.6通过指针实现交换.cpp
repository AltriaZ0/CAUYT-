//StudybarCommentBegin
#include <stdio.h>
#include <math.h>

int main( )
{
        int a,b;
        scanf("%d%d",&a,&b);
        void swap(int *p1, int *p2);
        swap(&a,&b);
        printf("%d %d",a,b);
        return 0;
}
//StudybarCommentEnd

void swap(int *p1, int *p2)
{                                            
    int tep=*p1;
    *p1=*p2;
    *p2=tep;
}