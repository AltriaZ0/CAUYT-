#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
int main() { 
    char n[100];
    char num[100];
    int m,len;
    int i,j,k,l;

    scanf("%s",&n);
    len=strlen(n);
    scanf("%d",&m);

    int sum=0;
    int mx=INT_MAX;
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            for(k=j+1;k<len;k++){
                for(l=k+1;l<len;l++){
                    if(mx>(n[i]-'0')*1000+(n[j]-'0')*100+(n[k]-'0')*10+(n[l]-'0')){
                        mx=(n[i]-'0')*1000+(n[j]-'0')*100+(n[k]-'0')*10+(n[l]-'0');
                    }
                }
            }
        }
    }
    printf("%d",mx);
}
