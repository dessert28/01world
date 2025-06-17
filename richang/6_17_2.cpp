#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float wtime,ctime;
    cin>>n;
    ctime=27+23+n/3;
    wtime=n/1.2;
    if (wtime>ctime)
    {
        cout<<"骑车"<<endl;
    }
    else if (wtime<ctime)
    {
        cout<<"走路"<<endl;
    }
    else
    {
        cout<<"一样快"<<endl;
    }
    return 0;
}