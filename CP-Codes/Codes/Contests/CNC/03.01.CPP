#include<bits/stdc++.h>
using namespace std;
long long unsigned int fact(int n)
{
    long long unsigned int prod=1;
    while(n!=1)
    {
    prod*=n;
    n--;
    }
    return prod;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long unsigned int sum=0,l,r;
        for(int i=l;i<=r;i++)
        {
           sum+=fact(i);
        }
        cout<<(sum%101003636009999)<<endl;
    }
}
