//StudybarCommentBegin
#include <stdio.h>
char* insert(char* s1,char* s2,int n);
int main() 
{ 
int n;
char s1[100], s2[100];
char *ss;
scanf("%s", s1);
scanf("%s", s2);
scanf("%d", &n);
ss=insert(s1,s2,n);
printf("%s",ss);
return 0;
}

//StudybarCommentEnd

char* insert(char* s1,char* s2,int n){
    int i;
    int j;
    int l2=0;
    while(*(s2+l2)!='\0'){ //摸到l2的长度
        l2++;
    }

    for(i=n;*(s1+i)!='\0';i++){ //把l1的尾巴放到l2后面
        *(s2+l2+i-n)=*(s1+i);
        //printf("%c",*(s2+l2+i-n));
    }
    *(s2+l2+i-n)='\0';

    //printf("\n");
    for(i=0;*(s2+i)!='\0';i++){ //所有l2放到l1后面
        *(s1+i+n)=*(s2+i);
        //printf("%c",*(s1+i+n));
    }
    //printf("\n");
    *(s1+i+n)='\0';
    return s1;
}

