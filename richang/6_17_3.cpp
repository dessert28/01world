#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    int temp,sum;
    temp=a;
    sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=temp;
        temp*=10;
    }
    cout<<sum<<endl;
    return 0;
}