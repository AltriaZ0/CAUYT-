#include <stdio.h>
#include <math.h>
#include <queue>
#include <tuple>
#include <algorithm>

int main() { 
    int n=0;
    char mtx[100][100];
    int dir[4][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}};
    int MaxS = 0;
    int i,j;

    std::queue<std::tuple<int, int, int>> que; 

    scanf("%d", &n); 
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf(" %c", &mtx[i][j]); 
            if(mtx[i][j] == '@') { 
                que.emplace(i, j, 1);
                MaxS+=1;
            }
        }
    }
    int t_day=0;
    scanf("%d",&t_day);

    while(!que.empty()) {
        int sx, sy, step;
        std::tie(sx, sy, step) = que.front();
        que.pop(); 
        for(i = 0; i < 4; i++) {
            int nx = sx + dir[i][0];
            int ny = sy + dir[i][1];
            if(nx < n && nx >= 0 && ny < n && ny >= 0) {
                if (mtx[nx][ny] == '.') { // 当到达的方格为有人房间
                    mtx[nx][ny] = 'X';   // 代表已经感染
                    que.emplace(nx, ny, step + 1);
                    //printf("第%d秒，有%d个人被感染\n",step,MaxS);
                    if(step==t_day){
                        printf("%d",MaxS);
                        return 0;}
                    MaxS+=1;
                    }
                }
            }
        }

    printf("%d\n", MaxS); // 输出最终的最大步数
    return 0;
}
