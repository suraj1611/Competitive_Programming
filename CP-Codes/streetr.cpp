#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else
	return(gcd(b%a,a));
}
ll gcdar(ll a[],ll n)
{
    ll ans=a[0];
    for(int i=1;i<n;i++)
    {
        ans=gcd(a[i],ans);
    }
    return ans;
}
int main()
{
ll n,s=0;
cin>>n;
ll a[n];
rep(i,n)
cin>>a[i];
ll b[n-1];
rep(i,n-1)
{
    b[i]=a[i+1]-a[i];
}
ll res=gcdar(b,n-1);
rep(i,n-1)
{
    s+=(b[i]/res)-1;
}
cout<<s<<endl;
}
