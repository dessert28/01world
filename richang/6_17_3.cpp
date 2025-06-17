#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;    cin>>n>>a;
    int temp,sum;
    temp=a;
    sum=a;
    for (int i = 1; i < n; i++)
    {
       temp=temp*10+a;
       sum+=temp;
        
    }
    cout<<sum<<endl;
    return 0;
}