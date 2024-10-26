#include <stdio.h>
#include <math.h>

int main(){
    int a;
    char b;
    scanf("%d",&a);
    b=(a>90) ? 'A':(a>60)?'B':'C';
    switch (b)
    {
    case 'A':
    printf("%d belongs to %c.",a,b);
        break;
    case 'B':
    printf("%d belongs to %c.",a,b);
        break;
    case 'C':
    printf("%d belongs to %c.",a,b);
        break;
    default:
        break;
    }

}