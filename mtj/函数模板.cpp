int fac(int x)  //定义函数模板  
{  
    register int i,f=1;  //定义寄存器变量  
  
    for(i=1;i<=x;i++)  
        f*=i;  
  
    return f;  
}  
int main( ) //闰年判断
{
    int year;
    cin>>year;
    if(year%4==0&&year%100!=0||year%400==0)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
