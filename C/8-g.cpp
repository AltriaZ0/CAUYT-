#include <stdio.h>


int swap(int *x, int *y){
    int tep=*x;
    *x=*y;
    *y=tep;
    return 0;
}

//StudybarCommentBegin
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return -1;
}
//StudybarCommentEnd

