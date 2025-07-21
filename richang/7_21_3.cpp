#include<bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n) {
    // 创建一个二维数组 dp，其中 dp[i][j] 表示到达 (i, j) 的路径数
    vector<vector<int>> dp(m, vector<int>(n, 1));

    // 动态规划填表
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    // 返回到达右下角的路径数
    return dp[m - 1][n - 1];
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << uniquePaths(m, n) << endl;
    return 0;
}