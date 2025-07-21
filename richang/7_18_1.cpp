#include<bits/stdc++.h>
using namespace std;

int main() {
    int matrix[3][3];
    int transposed[3][3];

    // 输入矩阵
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // 矩阵转置
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    // 输出转置后的矩阵
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}