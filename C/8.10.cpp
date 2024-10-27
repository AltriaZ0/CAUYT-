//StudybarCommentBegin
#include <stdio.h>
#include <string.h>
int main()
{
	void copystr(char *,char *,int);
        int m;
        char str1[20],str2[20];
        gets(str1);
        scanf("%d",&m);
        if(strlen(str1)<m)  printf("input error!");
        else
        {
  	        copystr(str1,str2,m);
                printf("%s",str2);
        }
        return 0;
}

//StudybarCommentEnd

void copystr(char *s1,char *s2,int n){     
    int i;    
    for(i=0;s1[i+n-1]!='\0';i++){
        s2[i]=s1[i+n-1];
    }
    s2[i]='\0';
}