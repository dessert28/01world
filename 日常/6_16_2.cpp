#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int n;
    int score=0,temp=0;
    cin>>n;
    if (n<=10)
    {
        score=n*6;
    }
    else if(11<=n&&n<=20)
    {
        temp=n-10;
        score=temp*2+60;
    }
    else
    {
        temp=n-20;
        score=temp*1+80;
    }
    cout<<score<<endl;
    return 0;
}
