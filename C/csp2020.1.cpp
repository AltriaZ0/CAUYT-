#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
int main() { 
    int n,X,Y;
    scanf("%d%d%d",&n,&X,&Y);
    int i;
    std::multimap<int,int>l;
    for(i=0;i<n;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        l.insert(std::make_pair(((X-x)*(X-x)+(Y-y)*(Y-y)),i));
    }
    int cnt=0;
    for(std::multimap<int, int>::iterator it = l.begin(); it != l.end(); ++it){
        printf("%d\n", (it->second) + 1);
        cnt+=1;
        if(cnt>=3){
            return 0;
        }
    }
    return 0;
}
