#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
int main() { 
    int lib[7];
    int i;
    for(i=0;i<7;i++){
        scanf(" %d",&lib[i]);
    }
    for(i=0;i<7;i++){
        if(lib[i]>lib[6]){
            int tep=lib[i];
            lib[i]=lib[6];
            lib[6]=tep;
        }
    }
    for(i=0;i<7;i++){
        if(i==6){
                    printf("%d",lib[i]);
        }
        else{
        printf("%d ",lib[i]);
        }

    }
}
