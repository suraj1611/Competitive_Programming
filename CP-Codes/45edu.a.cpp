#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define sc scanf
#define pf printf

ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else
	return(gcd(b%a,a));
}

int main()
{

    ll n,m,a,b,p,q,ans=0;
    cin>>n>>m>>a>>b;
    ll t;
    t=n/m;
    p=((t+1)*m)-n;
    q=(n%m);
    ans=min((p*a),(q*b));
    cout<<ans<<endl;



}
