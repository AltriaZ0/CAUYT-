#include <stdio.h>
#include <math.h>
int main(){
    int n=9;
    char word[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    int count=n;
    int c=0;

    for(int i2=n;i2>0;i2--){
        for(int k1=0;k1<count;k1++){
            printf("+");
        }
        for(int k2=0;k2<2*n+1-count*2;k2++){
            printf("%c",word[c%26]);
            c+=1;
        }
        for(int k3=0;k3<count;k3++){
            printf("+");
        }
        count-=1;
    printf("\n");
    }
        count+=1;
    for(int i=n-1;i>0;i--){
            count+=1;
            for(int x1=0;x1<count;x1++){
                printf("+");
            }
            for(int x2=0;x2<2*n+1-count*2;x2++){
                printf("%c",word[c%26]);
                c+=1;
            }
            for(int x3=0;x3<count;x3++){
                printf("+");
            }
        printf("\n");

    }
    



    return 0;
}