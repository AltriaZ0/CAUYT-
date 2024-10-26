#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    int t=500;
    while(t){
        t++;
        if (t%5==3&& t%7==6 && t%11==4){
            printf("%d",t);
            break;
        }
    }
}