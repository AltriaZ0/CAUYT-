#include <stdio.h>
#include <math.h>


//StudybarCommentBegin
int main()
{
	int i,num,b;
	scanf("%d",&num);
    int prime(int n);
	b=prime(num);
	if(b==1)  printf("%s","yes");
	else  printf("%s","no");
	return 0;
}
//StudybarCommentEnd
int prime(int n){
    if (n<=1) return false;
    if (n<=3) return true;
    if(n%2==0 || n%3 ==0) return false;
    int max = (int)sqrt(n);
    for(int i = 5; i<=max ; i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}