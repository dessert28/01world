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
        cout<<"�ﳵ"<<endl;
    }
    else if (wtime<ctime)
    {
        cout<<"��·"<<endl;
    }
    else
    {
        cout<<"һ����"<<endl;
    }
    return 0;
}