#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
int main() { 
    int n[4][2];
    int i,j,k;
    for(i=0;i<4;i++){
        scanf(" %d %d",&n[i][0],&n[i][1]);
        //printf("%d %d \n",n[i][0],n[i][1]);
    }
    int mx=0;
    int x;
    for(j=0;j<4;j++){
        int sl=0;
        for(k=0;k<4;k++){
            sl+=(n[j][0]-n[k][0])*(n[j][0]-n[k][0])+(n[j][1]-n[k][1])*(n[j][1]-n[k][1]);
        }
        //printf("sl[%d]=%d \n",j,sl);
        if(sl>mx){
            mx=sl;
            x=j;
        }

    }
    //printf("mx=%d\n",mx);
    printf("%d %d",n[x][0],n[x][1]);
}
