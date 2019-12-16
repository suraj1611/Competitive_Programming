#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define pf printf
#define sc scanf


void sc(ll &x)
{scanf("%lld",&x);}

void sc(ll &x,ll &y)
{scanf("%lld%lld",&x,&y);}

void sc(ll &x,ll &y, ll &z)
{ scanf("%lld%lld%lld",&x,&y,&z);}


void pf(ll &x)
{ printf("%lld",x);}


ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else
	return(gcd(b%a,a));
}

ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}

int main()
{

	ll t;
	sc(t);
	while(t--)
	{
	    ll n;
	    sc(n);
	    ll a[n];
	    rep(i,n)
        sc(a[i]);
        ll c=0;
        rep(i,n-1)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(lcm(a[i],a[j])<=min(a[i],a[j]))
                    c++;
            }
        }
        pf(c);

	}

}
