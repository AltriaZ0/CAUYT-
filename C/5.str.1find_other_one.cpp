#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    char str[100]={'\0'};
    char str2[100]={'\0'};
    gets(str);
    gets(str2);
    int l1=strlen(str);
    int l2=strlen(str2);
    int i,j,k,b;
    int ans=0;
    for(i=0;i<l1;i++){
        j=0;
        k=i;
        b=i;
        while(str[k]==str2[j]){
            k++;
            j++;
            if(j==l2){
                ans=1;
                printf("%d ",b);
            }
        }
    }
    if(ans==0){
        printf("-1");
    }
}
