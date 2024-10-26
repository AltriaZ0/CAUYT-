#include <stdio.h>
int main()
{   char m[10001];
    gets(m);
    int cnt1=0;
    int cnt2=0;
    int cnt3=0;
    int cnt4=0;
    int cnt5=0;
    for(int i=0;*(m+i) != '\0';i++){
        if(*(m+i)<='Z' && *(m+i)>='A'){
            cnt1++;
        }
        else if(*(m+i)<='z' && *(m+i)>='a'){
            cnt2++;
        }
        else if(*(m+i)==' '){
            cnt3++;
        }
        else if(*(m+i)<='9' && *(m+i)>='0'){
            cnt4++;
        }
        else{
            cnt5++;
        }
    }
    printf("upper case:%d\nlower case:%d\nspace:%d\ndigit:%d\nother:%d",cnt1,cnt2,cnt3,cnt4,cnt5);
}
