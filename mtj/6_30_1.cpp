#include<bits/stdc++.h> 

using namespace std;

 int main()
{
int n;
   cin>>n;
    if(n<=10)
    {
        switch(n)
        {
        case 0 : printf(“零”);break;
        case 1 :printf(“壹”);break;
        case 2 :printf(“贰”);break;
        case 3 :printf (“叁”);break;
        case 4 :printf(“肆”);break;
        case 5 :printf(“伍”);break;
        case 6 :printf(“陆”);break;
        case 7 :printf(“柒”);break;
        case 8 :printf(“捌”);break;
        case 9 :printf(“玖”);break;
        case 10 :printf(“拾”);break;
        }
    }else{
           int a=n/10;int b=n%10;
           switch (a){
            case 0 : printf(“零”);break;
         case 1 :printf(“壹”);break;
         case 2 :printf(“贰”);break;
         case 3 :printf (“叁”);break;
         case 4 :printf(“肆”);break;
         case 5 :printf(“伍”);break;
         case 6 :printf(“陆”);break;
         case 7 :printf(“柒”);break;
         case 8 :printf(“捌”);break;
         case 9 :printf(“玖”);break;
           }
           printf(“拾”);
           switch(b){
            case 0 : printf(“”);break;
         case 1 :printf(“壹”);break;
         case 2 :printf(“贰”);break;
         case 3 :printf (“叁”);break;
         case 4 :printf(“肆”);break;
         case 5 :printf(“伍”);break;
         case 6 :printf(“陆”);break;
         case 7 :printf(“柒”);break;
         case 8 :printf(“捌”);break;
         case 9 :printf(“玖”);break;
           }

        }
     cout<<”元整”;
    return 0;
}