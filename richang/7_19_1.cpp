#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    // 输入两个正整数
    cin >> m >> n;

    int sum = 0;
    // 遍历从 m 到 n 的所有数字
    for (int i = m; i <= n; i++) {
        // 累加每个数字的平方
        sum += i * i;
    }

    // 输出结果
    cout << sum << endl;

    return 0;
}