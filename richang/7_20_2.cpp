#include<bits/stdc++.h>
using namespace std;

// 计算最少需要称的次数
int minWeighings(int n) {
    if (n == 1) return 0; // 如果只有1枚硬币，不需要称
    int count = 0;
    while (n > 1) {
        n = (n + 2) / 3; // 向上取整除以3
        count++;
    }
    return count;
}

int main() {
    int n;
    while (cin >> n && n != 0) { // 输入n，直到输入0为止
        cout << minWeighings(n) << endl; // 输出最少需要称的次数
    }
    return 0;
}