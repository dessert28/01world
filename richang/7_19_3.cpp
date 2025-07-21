#include<bits/stdc++.h>

using namespace std;

vector<string> removeSubfolders(vector<string>& folder) {
    // 按字典序排序文件夹路径
    sort(folder.begin(), folder.end());

    vector<string> result;
    for (const string& path : folder) {
        // 如果结果为空，直接添加当前路径
        if (result.empty()) {
            result.push_back(path);
        } else {
            // 获取结果中最后一个路径
            string last = result.back();
            // 检查当前路径是否是最后一个路径的子文件夹
            if (path.size() > last.size() && path.substr(0, last.size()) == last && path[last.size()] == '/') {
                // 如果是子文件夹，跳过
                continue;
            } else {
                // 否则，添加到结果中
                result.push_back(path);
            }
        }
    }

    return result;
}

int main() {
    // 示例输入
    vector<string> folder = {"/a", "/a/b", "/c/d", "/c/d/e", "/c/f"};

    // 调用函数并输出结果
    vector<string> result = removeSubfolders(folder);
    for (const string& path : result) {
        cout << path << " ";
    }
    cout << endl;

    return 0;
}