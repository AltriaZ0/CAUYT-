//StudybarCommentBegin
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <map>
char* encode(char * string);
char* decode(char * string);

void main()
{
    std::map <char,char> lib;
    std::map <char,char> lib2;
    std::map <char,char> lib3;
    int i;
    char j,k;
    char n[100];
    for(j='a',k='1';j<='i';j++,k++){
        lib[j]=k;
        lib[k]=j;
    }
    for(j='j',k='1';j<='r';j++,k++){
        lib[j]=k;
        lib2[k]=j;
    }
    for(j='s',k='1';j<='z';j++,k++){
        lib[j]=k;
        lib3[k]=j;
    }

    gets(n);
    int t=0;
    for(i=0;i<strlen(n);i++){
        if(n[i]==48){
            //printf("为0\n");
            t++;
            continue;
        }
        if(lib.find(n[i]) !=lib.end()){
            //printf("解密或加密%d \n",n[i]);
            if(n[i]>'i' && n[i]<='r'){
                printf("0");
            }
            if(n[i]>'r' && n[i]<='z'){
                printf("00");
            }
                if(t==0){
                    printf("%c",lib[n[i]]);
                    t=0;
                }
                if(t==1){
                    printf("%c",lib2[n[i]]);
                    t=0;
                }
                if(t==2){
                    printf("%c",lib3[n[i]]);
                    t=0;
                }
            }
        else{
            printf("%c",n[i]);
        }
    }

    gets(n);
    t=0;
    for(i=0;i<strlen(n);i++){
        if(n[i]==48){
            //printf("为0\n");
            t++;
            continue;
        }
        if(lib.find(n[i]) !=lib.end()){
            //printf("解密或加密%d \n",n[i]);
            if(n[i]>'i' && n[i]<='r'){
                printf("0");
            }
            if(n[i]>'r' && n[i]<='z'){
                printf("00");
            }
                if(t==0){
                    printf("%c",lib[n[i]]);
                    t=0;
                }
                if(t==1){
                    printf("%c",lib2[n[i]]);
                    t=0;
                }
                if(t==2){
                    printf("%c",lib3[n[i]]);
                    t=0;
                }
            }
        else{
            printf("%c",n[i]);
        }
    }
}
//StudybarCommentEnd