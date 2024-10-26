//StudybarCommentBegin
#include <stdio.h>
int main()
{
   int f(int x,int y);
   int a,b;
   scanf("%d %d",&a,&b);
   if(f(a,b))
   {
   	printf("Lucky!\n");
   }
   else
   {
   	printf("No!");
   }
   return 0;
}
//StudybarCommentEnd

int f(int x,int y){
    return ( x%(x%10*10+y%10)==0 || y%(x%10*10+y%10)==0 )?1:0;
}