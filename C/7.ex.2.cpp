//StudybarCommentBegin
#include <stdio.h>
#include <string.h>
int main()
{
void GetOthers(char s[]);
char str[100];
gets(str);
GetOthers(str);
printf("%s",str); 
return 0;
}

//StudybarCommentEnd
void GetOthers(char s[]){
    int i;
    int j=0;
    for(i=0;*(s+i)!='\0';i++){
        if(!(*(s+i)>='a' && *(s+i)<='z') && !(*(s+i)>='A' && *(s+i)<='Z')){
            *(s+j)=*(s+i);
            j++;
        }
    }
    *(s+j)='\0';
}
