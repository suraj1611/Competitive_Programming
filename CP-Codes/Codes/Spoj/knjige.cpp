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
    ll n,l;
    cin>>n;
    ll a[n];
    rep(i,n)
    cin>>a[i];
    l=n;
    for(int j=n-1;j>=0;j--)
        {if(a[j]==l)
            l--;}
    cout<<l<<endl;
}
