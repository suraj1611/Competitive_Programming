
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
int main()
{
int t;
cin>>t;
while(t--)
{
    ll n,s=0;
    cin>>n;
    ll a[n];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=abs(i*a[i]-(n-1-i)*a[i]);
    }
    cout<<s<<endl;
}
return 0;
}
