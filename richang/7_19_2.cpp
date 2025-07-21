#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    // 输入英尺度数
    cin >> n;

    // 计算毫米数：1 英尺 = 12 英寸，1 英寸 = 2.54 厘米 = 25.4 毫米
    double millimeters = n * 12 * 25.4;

    // 输出结果，保留一位小数
    cout << fixed << setprecision(1) << millimeters << endl;

    return 0;
}