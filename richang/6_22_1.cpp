#include<bits/stdc++.h>
using namespace std;

int shuixianhua(int n)
    {
        int a,b,c;
        a=n%10;
        b=(n/10)%10;
        c=n/100;
        if(a*a*a+b*b*b+c*c*c==n)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

int main()
{
    
    for(int i=100;i<=999;i++)
    {
        if(shuixianhua(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}

