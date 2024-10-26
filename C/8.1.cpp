#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
int main() { 
    int n;
    scanf("%d",&n);
    printf("%c",( n%4==0 && n%100!=0) || (n%400==0) ? 'y':'n');
}
