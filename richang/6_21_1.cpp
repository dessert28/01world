#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=2;i<=n;i++)
   {
        int sum=1;
        for(int j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
   } 
   return 0;
}