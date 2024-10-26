#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main(){ 
    int i,j;
    char str[100]={'\0'};
    char str2[100]={'\0'};
    gets(str);  
    int l1=strlen(str);
    for(i=0;i<l1;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
        ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            str2[j]=str[i];
            j++;
        }
    }
    int l2=strlen(str2);

    for(i=0;i<l2;i++){
        for(j=0;j<l2-i-1;j++){
            if(str2[j]<str2[j+1]){
                int tep=str2[j];
                str2[j]=str2[j+1];
                str2[j+1]=tep;
                }
            }
        printf("%c",str2[j]);
    }
}
