#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int original = n;
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if (reversed == original)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}