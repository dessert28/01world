#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int n;
    cin>>n;
    int sum=0,num=0;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        sum+=num;
    }
    cout<<fixed<<setprecision(2)<<sum/n<<endl;
    return 0;
}