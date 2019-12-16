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
ll n;
cin>>n;
ll a[n];
rep(i,n)
cin>>a[i];
string s;
cin>>s;
ll l=s.length();
rep(i,l)
{
    if(s[i]=="0")
    {

    }
    else
    {

    }
}
return 0;
}
