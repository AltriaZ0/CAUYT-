#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    int t=100;
    while(t){
        t++;
        if (t%4==2&& t%7==3 && t%9==5){
            printf("%d",t);
            break;
        }
    }
}