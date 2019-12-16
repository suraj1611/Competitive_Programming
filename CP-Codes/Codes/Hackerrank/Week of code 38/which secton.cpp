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
#define maxsize 1100005

ll prime[maxsize];

void sc(ll &x)
{scanf("%lld",&x);}

void sc(ll &x,ll &y)
{scanf("%lld%lld",&x,&y);}

void sc(ll &x,ll &y, ll &z)
{ scanf("%lld%lld%lld",&x,&y,&z);}


void pf(ll &x)
{ printf("%lld\n",x);}


ll bs(ll a[],ll x,ll n)
{
    ll l=0,h=n-1,mid;
    while(l<=h)
    {
    mid=(l+h)/2;
    if(x<a[mid])
        {
            h=mid-1;
            if(x>a[h])
                return mid;
        }
    else if(x>a[mid])
    {
        l=mid+1;
        if(x<a[h])
                return mid;
    }
    else if(x==a[mid])
        return mid;
    }
    return mid;
}

int main()
{

	ll t;
	sc(t);
	while(t--)
	{
	    ll n,m,k;
	    sc(n,k,m);
	    ll a[m];
	    rep(i,m)
	    {
	        sc(a[i]);
	    }
	    ll c[m];
	    c[0]=a[0];
	    for(int j=1;j<m;j++)
	    {
	        c[j]=c[j-1]+a[j];
	    }
	    sort(c,c+m);
	    ll ans,i;
	    if(k<c[0])
            ans=0;
	    for(i=1;i<m;i++)
	    {
	        if(k>c[i]&&k<c[i+1])
                {ans=i;break;}
	    }
	    cout<<ans+1<<endl;
	}

}

