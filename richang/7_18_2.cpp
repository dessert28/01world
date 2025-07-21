#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, n;
    cin >> a >> n;

    int sum = 0;
    int current = 0;

    for (int i = 0; i < n; i++) {
        current = current * 10 + a;
        sum += current;
    }

    cout << "s = " << sum << endl;

    return 0;
}