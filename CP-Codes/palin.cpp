#include<bits/stdc++.h>
#include <string>
#include <iostream>
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
int ispalin(ll n)
{
    ll t=n;
    ll rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    if(rev==t)
        return 0;
    else
        return 1;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    n++;
    while(ispalin(n))
    {
        n++;
    }
    cout<<n<<endl;
}
return 0;
}
