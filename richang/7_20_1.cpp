#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    int total = 0;
    for (int i = 0; i < n; i++) {
        // 计算当前是周几（1-7）
        int day = (x + i - 1) % 7 + 1;
        // 如果不是周末（周六或周日），则累加 250 公里
        if (day != 6 && day != 7) {
            total += 250;
        }
    }

    cout << total << endl;
    return 0;
}