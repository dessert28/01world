#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    int n, target;
    cout << "请输入数组的长度: ";
    cin >> n;

    vector<int> nums(n);
    cout << "请输入数组元素: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "请输入目标值: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "输出: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "没有找到符合条件的两个整数。" << endl;
    }

    return 0;
}
