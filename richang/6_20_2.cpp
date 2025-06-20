#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        int x=i/2;
        bool flag=true;
        for(int j=2;j<=x;j++)
        {
            if(i%j==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}