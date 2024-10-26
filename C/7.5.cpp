#include <stdio.h>
#include <string.h>
int main()
{
    char exchange(char * iter[]);
    char a[80];
    char b[80];
    char c[80];
    gets(a);
    gets(b);
    gets(c);
    char *iter[3]={a,b,c};
    exchange(iter);
    printf("%s\n%s\n%s\n",iter[0],iter[1],iter[2]); 
    return 0;
}

char swap(char * &p1,char * &p2){
    char * temp= p1;
    p1 = p2;
    p2 = temp;
    return '0';
}

char exchange(char * iter[]){
    char swap(char * &p1,char * &p2);
    for(int i=0;i<3;i++){
        for(int j = i + 1; j < 3; j++){
            if(strcmp(iter[i], iter[j]) >0){
                swap(iter[i], iter[j]);
            }
        }
    //`strcmp(a,b)`字符串比较：相等0，a>b为1，a<b为-1;
    }
    return 0;
}
