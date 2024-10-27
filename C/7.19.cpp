#include <stdio.h>
int main()
{   char m[13][10]={"January","Febuary","March","April","May","June","July","August","September","October","November","December"};
    int n;
    scanf("%d",&n);
    printf("%s",  (n<13&&n>0) ? *(m+n-1) : "Wrong!"   );
}
