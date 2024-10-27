#include <iostream>
#include <vector>
#include <functional>  // 包含此头文件以使用 std::function

using namespace std;

void find_all_solutions() {
    int target = 1;  // 背包容量
    vector<int> values = {15,9,1};  // 商品价值
    vector<int> costs = {1,1,1};    // 每个商品占用的面积
    int total_money = 9;  // 总金额
    
    // dp[i][j]表示前i个商品，总容量为j时的最大花费
    vector<vector<int>> dp(target + 1, vector<int>(total_money + 1, -1));
    dp[0][0] = 0;  // 当容量为0，花费为0时，不需要选择物品

    // 用于记录每个状态下的方案数
    vector<vector<int>> path_count(target + 1, vector<int>(total_money + 1, 0));
    path_count[0][0] = 1;

    // 动态规划求解
    for (int i = 0; i < values.size(); ++i) {
        for (int j = target; j >= costs[i]; --j) {  // 遍历容量
            for (int k = total_money; k >= values[i]; --k) {  // 遍历金额
                if (dp[j - costs[i]][k - values[i]] != -1) {
                    dp[j][k] = 1;  // 标记这个状态为可达
                    path_count[j][k] += path_count[j - costs[i]][k - values[i]];  // 累加方案数
                }
            }
        }
    }

    // 列出所有满足条件的购买方案
    if (path_count[target][total_money] == 0) {
        cout << "没有满足条件的购买方案" << endl;
        return;
    }

    vector<int> solution(values.size(), 0);

    // 回溯寻找方案
    std::function<void(int, int, int)> backtrack = [&](int current_capacity, int current_money, int item_index) {
        if (current_capacity == 0 && current_money == 0) {
            cout << "方案:";
            for (int i = 0; i < values.size(); ++i) {
                if (solution[i] > 0) {
                    cout << " " << solution[i] << " 个 " << values[i] << "元";
                }
            }
            cout << endl;
            return;
        }

        if (item_index < 0) return;

        for (int count = 0; count * costs[item_index] <= current_capacity && count * values[item_index] <= current_money; ++count) {
            solution[item_index] = count;
            backtrack(current_capacity - count * costs[item_index], current_money - count * values[item_index], item_index - 1);
        }
    };

    backtrack(target, total_money, values.size() - 1);
}

int main() {
    find_all_solutions();
    return 0;
}
