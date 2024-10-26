#include <stdio.h>
#include <string.h>
int main()
{   const char *name[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
    char exchange(const char * iter[]);
    exchange(name);
    int s=sizeof(name)/sizeof(name[0]);
    for(int i=0;i<s;i++){
        printf("%s\n",name[i]);
    }
}

char swap(const char * &p1,const char * &p2){
    const char * temp= p1;
    p1 = p2;
    p2 = temp;
    return '0';
}

char exchange(const char * iter[]){
    char swap(const char * &p1,const char * &p2);
    for(int i=0;i<5;i++){
        for(int j = i + 1; j < 5; j++){
            if(strcmp(iter[i], iter[j]) >0){
                swap(iter[i], iter[j]);
            }
        }
    //`strcmp(a,b)`字符串比较：相等0，a>b为1，a<b为-1;
    }
    return 0;
}