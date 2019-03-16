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
ll ans(ll n)
{
    while(n%2==0)
    {
        n/=2;
    }
    return n;
}
int main()
{
ll t;
cin>>t;
ll p=t;
while(t--)
{
    ll n;
    cin>>n;
    cout<<"Case "<<p-t<<": "<<ans(n)<<endl;
}
return 0;
}
