#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
int main() { 
    int n[4]={1,2,3,4};
    int lib[10000];
    int i,j,k;
    int index=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                if(k!=j && j!=i && k!=i){
                    int tep=n[i]*100+n[j]*10+n[k];
                    printf("%d\n",tep);
                    lib[index]=tep;
                    index++;
                }
            }
        }
    }
}
