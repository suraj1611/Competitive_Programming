#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
ll n,i,j,sum=0;
cin>>n;
ll a[n];
rep(i,n)
cin>>a[i];
{
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            sum+=(int)abs(a[j]-a[i]);
    }
}
cout<<sum<<endl;
}
