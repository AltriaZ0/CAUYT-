#include <stdio.h>
int max=-0x3f3f3f;
int min=0x3f3f3f;

int main(){
    int str[10];
    int *p=str;
    for(int i=0;i<10;i++,p++){
        scanf("%d",&str[i]);
        printf("%d ",*(str+i));
    }
    return 0;
}

