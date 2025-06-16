#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int n;
    cin >> n;
    int age;
    double sumage,aveage=0;
    for (int i = 0; i < n; i++)
    {
        cin >> age;
        sumage += age;
    }
    aveage = sumage / n;
    printf("%.2f", aveage);
    return 0;
}