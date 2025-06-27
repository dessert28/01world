#include <bits/stdc++.h>
using namespace std;
int ids[5] = {10001, 10002, 10003, 10004};
char names[5][10] = {"张三", "李四", "王五", "赵六"};
char passwords[5][16] = {"aaaa", "bbbbb", "cccc", "ddddd"};
int uNum = 4;
char* selectUserById(int uid) {
    for (int i = 0; i < uNum; ++i) {
        if (ids[i] == uid) {
            return names[i];
        }
    }
    return NULL;
}
char* selectPassById(int uid) {
    for (int i = 0; i < uNum; ++i) {
        if (ids[i] == uid) {
            return passwords[i];
        }
    }
    return NULL;
}
int login(int uid, char* password) {
    char* userName = selectUserById(uid);
    if (userName == NULL) {
        return 1;
    }
    char* correctPassword = selectPassById(uid);
    if (correctPassword == NULL || strcmp(correctPassword, password) != 0) {
        return 2;
    }
    return 0;
}
void showLoginPage() {
    int inputId;
    char inputPassword[16];

    cout << "请输入用户ID: ";
    cin >> inputId;
    cin.ignore();

    cout << "请输入密码: ";
    cin.getline(inputPassword, 16);
    int result = login(inputId, inputPassword);
    if (result == 0) {
        cout << "登录成功，正在进入首页" << endl;
    } else if (result == 1) {
        cout << "账号不存在，正在进入注册界面" << endl;
    } else if (result == 2) {
        cout << "密码错误，请重新登录" << endl;
    }
}

int main() {
    showLoginPage();
    return 0;
}
