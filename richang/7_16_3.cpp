#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<int> parseInput(const string& input) {
    vector<int> nums;
    stringstream ss(input);
    string token;

    while (ss >> token && token != "{" && token != "nums");
    if (token == "nums") ss >> token; 
    if (token == "=") ss >> token;    

    while (getline(ss, token, ',')) {

        token.erase(0, token.find_first_not_of(" \t\r\n}"));
        if (!token.empty()) {
            try {
                nums.push_back(stoi(token));
            } catch (const invalid_argument&) {
            }
        }
    }
    return nums;
}

int main() {
    string input;
    cout << "请输入数组（格式：nums = {1, 2, 3, 4}）: ";
    getline(cin, input);

    vector<int> nums = parseInput(input);
    int n = nums.size();

    if (n < 2) {
        cout << "最长子序列长度为: " << n << endl;
        return 0;
    }

    int maxLen = 2;
    int currentLen = 2;
    int prevMod = (nums[0] + nums[1]) % 2;

    for (int i = 2; i < n; ++i) {
        int currentMod = (nums[i - 1] + nums[i]) % 2;
        if (currentMod == prevMod) {
            currentLen++;
            maxLen = max(maxLen, currentLen);
        } else {
            currentLen = 2;
            prevMod = currentMod;
        }
    }

    cout << "最长子序列长度为: " << maxLen << endl;
    return 0;
}