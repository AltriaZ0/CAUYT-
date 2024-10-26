#include <stdio.h>

int main()
{ 
   int hanoi_step_number(int n,char one,char two,char three);
   int m,s;
   scanf("%d",&m); 
   s= hanoi_step_number(m,'A','B','C');
   printf("%d\n",s);
   return 0;
}

int cnt=0;

 hanoi_step_number(int n,char one,char two,char three)
{
    if(n==1){
        cnt++;
    }
    else{
        hanoi_step_number(n-1,'A','C','B');
        cnt++;
        hanoi_step_number(n-1,'B','A','C');
    }
    return cnt;
}

