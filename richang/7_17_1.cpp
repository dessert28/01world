#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    // 输入字符串
    cin >> str;

    // 检查字符串长度是否为 4
    if (str.length() != 4) {
        cout << str << "不属于验证码" << endl;
        return 0;
    }

    // 检查每个字符是否为数字或字母（包含大小写）
    for (char c : str) {
        if (!isalnum(c)) {
            cout << str << "不属于验证码" << endl;
            return 0;
        }
    }

    // 如果以上条件都满足，则是验证码
    cout << str << "属于验证码" << endl;

    return 0;
}