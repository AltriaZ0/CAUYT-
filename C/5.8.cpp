#include <stdio.h>
#include <math.h>
#include <map>
#include <string>

int main(){   
    int l[17];
    int i;
    int sx[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int sum=0;

    for(i=0;i<17;i++){
        l[i]=getchar();
        int t=l[i]-'0';
        sum+=t*sx[i];
    }
    sum=sum%11;
    std::map<int, std::string> trs;
    trs[0] = "1";
    trs[1] = "0";
    trs[2] = "X";
    trs[3] = "9";
    trs[4] = "8";
    trs[5] = "7";
    trs[6] = "6";
    trs[7] = "5";
    trs[8] = "4";
    trs[9] = "3";
    trs[10] = "2";

    printf("%s",trs[sum].c_str());
    return 0;
}
