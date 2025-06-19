#include <bits/stdc++.h>
using namespace std;
int fibonacciRabbits(int n) {
    if (n < 3) {
        return 1;
    }
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main() {
    int n;
    cin >> n;
        int result = fibonacciRabbits(n);
        cout <<result<<endl;
    return 0;
}
