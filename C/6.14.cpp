// //StudybarCommentBegin
#include<stdio.h>
int main()
{
	double equation(double x,int n);
	int n;
	double x;
	scanf("%lf%d",&x,&n);
	printf("%.4f\n",equation(x,n));
	return 0;
}
// //StudybarCommentEnd

double equation(double x,int n){
    double fact(int n);
    double mypow(double x,int n);
    double ans=0;
    for(int j=1;j<=n;j++){
        ans+=mypow(-1,j-1)* (mypow(x,j)) / (fact(j));
    }
    return ans;

}

double fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}

double mypow(double x,int n){
    double sum=1;
    for(int i=0;i<n;i++){
        sum*=x;
    }
    return sum;
}
