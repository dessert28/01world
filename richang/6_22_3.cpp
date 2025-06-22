#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int n;
    cin>>n;
    bool flag=true;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            if (i!=2 or i!=3 or i!=5)
            {
                flag=false;
                break;
            
            }
        }
    }
    if(flag)
    {
        cout<<"false"<<endl;
    }
    else
    {
        cout<<"true"<<endl;
    }
}