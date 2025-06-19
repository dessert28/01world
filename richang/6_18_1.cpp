#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    if (n>m&&n>k)
    {
        cout<<n<<endl;
    }
    else if (m>n&&m>k)
    {
        cout<<m<<endl;
    }
    else
    {
        cout<<k<<endl;
    }
    return 0;
}