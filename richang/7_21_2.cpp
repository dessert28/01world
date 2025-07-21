#include<bits/stdc++.h>
using namespace std;

string makeFancyString(string s) {
    if (s.size() <= 2) {
        return s;
    }

    string result;
    result += s[0];
    result += s[1];

    for (int i = 2; i < s.size(); ++i) {
        if (!(s[i] == s[i - 1] && s[i] == s[i - 2])) {
            result += s[i];
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;
    cout << makeFancyString(s) << endl;
    return 0;
}