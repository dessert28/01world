#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
ios::sync_with_stdio(false);
cin.tie(0), cout.tie(0);

vector<int> s;
s.push_back(0);
int n, l, r, k;
ll top = 0;
cin >> n;
for (int i = 1; i <= n; i++) {
    int c;
    cin >> c;
    if (c == 1) {
        cin >> l >> r;
        for (int j = l; j <= r; j++) {
            if (top + 1 >= s.size())
                s.push_back(0);
            s[top + 1] = j + s[top];
            top++;
        }
    } else {
        cin >> k;
        cout << s[top] - s[top - k] << endl;
        top -= k;
    }
}
return 0;
}
// tle
