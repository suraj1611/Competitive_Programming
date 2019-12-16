#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int sum(int a,int b)
{
    int s=0,n=0,i=0;
    while(a!=0||b!=0)
    {
    s=(a%10+b%10)%10;
    n=(s*(pow(10,i)))+n;
    a=a/10;b=b/10;
    i++;
    }
    return n;
}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<sum(a,b)<<endl;
    }
return 0;
}
