#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll unsigned long long int
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
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,m,k;
    cin>>n>>m>>k;
    n%=md;
    m%=md;
    cout<<gcd(n,m)<<endl;
    }
return 0;
}
