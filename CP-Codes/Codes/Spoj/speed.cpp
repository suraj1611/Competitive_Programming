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
    ll a,b,ans;
    cin>>a>>b;
    ans=floor(abs(a-b)/gcd(abs(a),abs(b)));
    cout<<ans<<endl;
}
return 0;
}
