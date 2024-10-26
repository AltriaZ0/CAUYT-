#include <stdio.h>
int main()
{   char m[100]="reading_room";
    int n;
    scanf("%d",&n);
    if(n>12){
        printf("error!");
        return 0;
    }
    for(int i=n-1;*(m+i)!='\0';i++){
        printf("%c",*(m+i));
    }
}
