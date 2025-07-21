#include<bits/stdc++.h>
using namespace std;

int main() {
    double x;
    cin >> x;

    double y;
    if (x <= 15) {
        y = 4 * x / 3;
    } else {
        y = 2.5 * x - 17.5;
    }

    // 输出结果，保留两位小数
    cout << fixed << setprecision(2) << y << endl;

    return 0;
}