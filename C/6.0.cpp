#include <stdio.h>
#include <ctype.h>  
#include <string.h>
void pt(char x[1000]);

int main(){ 
    pt("********************");
    pt("How do you do!");
    pt("********************");
    return 0;
}

void pt(char x[1000]){
    printf("%s\n",x);
}
