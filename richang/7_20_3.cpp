#include<bits/stdc++.h>
using namespace std;

string largestNumber(vector<int>& nums) {
    vector<string> strs;
    for (int num : nums) {
        strs.push_back(to_string(num));
    }
    
    sort(strs.begin(), strs.end(), [](const string& a, const string& b) {
        return a + b > b + a;1
    });
    
    if (strs[0] == "0") {
        return "0";
    }
    
    string result;
    for (const string& str : strs) {
        result += str;
    }
    
    return result;
}

int main() {
    vector<int> nums = {3, 30, 34, 5, 9};
    cout << largestNumber(nums) << endl;
    return 0;
}