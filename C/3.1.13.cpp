#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,sum;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<0||b>12||c>31){
        printf("data error.");
        return 0;
    }
    if ((a%4==0 && a%100!=0)||a%400==0){
        switch (b)
        {
        case 1:sum = 0;break;
        case 2:sum = 31;break;
        case 3:sum = 60;break;
        case 4: sum = 91;break;
        case 5:sum = 121;break;
        case 6:sum = 152;break;
        case 7:sum = 182;break;
        case 8:sum = 213;break;
        case 9:sum = 244;break;
        case 10:sum = 274;break;
        case 11:sum = 305;break;
        case 12:sum = 335;break;
        default:
            break;
        }
        printf("It is the %dth day.",sum+c);
        }
    else{
        switch (b)
            {
            case 1:sum = 0;break;
            case 2:sum = 31;break;
            case 3:sum = 59;break;
            case 4: sum = 90;break;
            case 5:sum = 120;break;
            case 6:sum = 151;break;
            case 7:sum = 181;break;
            case 8:sum = 212;break;
            case 9:sum = 243;break;
            case 10:sum = 273;break;
            case 11:sum = 304;break;
            case 12:sum = 334;break;
            default:
                break;
            }
        printf("It is the %dth day.",sum+c);
    }

}