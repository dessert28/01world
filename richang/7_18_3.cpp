#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> result;
    int n = nums.size();

    if (n < 4) return result;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                if (sum < target) left++;
                else if (sum > target) right--;
                else {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                }
            }
        }
    }

    return result;
}

int main() {
    int n, target;
    cout << "请输入数组长度: ";
    cin >> n;

    vector<int> nums(n);
    cout << "请输入数组元素（用空格分隔）: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "请输入目标值: ";
    cin >> target;

    vector<vector<int>> result = fourSum(nums, target);

    cout << "四数之和等于 " << target << " 的组合有:" << endl;
    for (const auto& quad : result) {
        cout << "[";
        for (int i = 0; i < quad.size(); i++) {
            cout << quad[i];
            if (i < quad.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}