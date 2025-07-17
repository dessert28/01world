#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    // 用于存储元素值和对应的下标
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        // 计算当前元素与目标值的差值
        int complement = target - nums[i];
        // 检查差值是否在哈希表中
        if (numMap.find(complement) != numMap.end()) {
            // 如果存在，返回对应的下标
            return {numMap[complement], i};
        }
        // 将当前元素和下标存入哈希表
        numMap[nums[i]] = i;
    }
    // 如果没有找到，返回空数组
    return {};
}

int main() {
    int n, target;
    // 输入数组元素个数
    cin >> n;

    vector<int> nums(n);
    // 输入数组元素
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // 输入目标值
    cin >> target;

    // 调用函数查找结果
    vector<int> result = twoSum(nums, target);

    // 输出结果
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}