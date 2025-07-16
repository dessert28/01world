#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int n;
    double num,zsum=0,fsum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(num>0)
        {
            zsum+=num;
        }
        else
        {
            fsum+=num;
        }
    }
    cout<<fixed<<setprecision(6)<<zsum<<" "<<fsum;
    return 0;
}