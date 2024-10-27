#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
int main() { 
    char n[100];
    int i,j,k;
    scanf("%s",&n);
    for(i=0;i<=(strlen(n)/2);i++){
        //printf("%c,%c\n",n[i],n[strlen(n)-1-i]);
        if(n[i]!=n[strlen(n)-1-i]){
            printf("N");
            return 0;
        }
    }
    printf("Y");
}
