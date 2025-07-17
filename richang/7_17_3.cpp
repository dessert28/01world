#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> k;
    
    int odd_count = 0, even_count = 0;
    for (int num : nums) {
        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    cout << max(odd_count, even_count) << endl;
    return 0;
}