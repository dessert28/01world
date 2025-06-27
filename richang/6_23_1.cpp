#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr)
{
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    vector<int> data = {8, 7, 6, 5, 9, 3, 4, 0, 2, 1};
    cout << "原始数组: ";
    for (const auto& num : data)
    {
        cout << num << " ";
    }
    cout << endl;
    bubbleSort(data);
    cout << "排序后数组: ";
    for (const auto& num : data)
    {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
