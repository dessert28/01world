#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>& a, vector<int>& b)
{
    vector<int> result;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            result.push_back(a[i]);
            i++;
        }
        else
        {
            result.push_back(b[j]);
            j++;
        }
    }
    while (i < a.size())
    {
        result.push_back(a[i]);
        i++;
    }
    while (j < b.size())
    {
        result.push_back(b[j]);
        j++;
    }
    return result;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    vector<int> mergedArray = merge(a, b);
    for (int num : mergedArray)
    {
        cout << num;
    }
    cout << endl;
    return 0;
}
