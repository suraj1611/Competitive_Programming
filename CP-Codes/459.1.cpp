#include<bits/stdc++.h>
using namespace std;
int isfibo(int n)
{
    int a=1,b=1,c=a+b;
    for(int i=2;i<1000;i++)
    {
        if(n==a||n==b||n==c)
            return 1;
        a=b;
        b=c;
        c=a+b;
    }
    return 0;

}
int main()
{
    int n,i=1;
    cin>>n;
    while(i<=n)
    {
        if(isfibo(i))
           {
               cout<<'O';
           }
        else
        {
            cout<<'o';
        }
        ++i;
    }
}
