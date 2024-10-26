#include <stdio.h>
#include <ctype.h>  
#include <string.h>
#include <math.h>
int main(){ 
    int ss(int a);
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum=a*10000+b*100+c;
    printf("%c",ss(sum)==0?'n':'y');

}

int ss(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return a;
}