
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

void seive()
{
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=true;
	for(ll i=2;i*i<=maxsize;i++)
	{
		if(prime[i]==true)
		{
		     for(ll j=2*i;j<maxsize;j+=i)
			{
			prime[j]=false;
			}
		}
	}
}

int main()
{

    ll n;
    sc(n);
    ll a[n];
    rep(i,n)
    cin>>a[i];
    ll q;
    sc(q);
    while(q--)
    {
        ll k;
        sc(k);
        ll low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(k<a[mid])
            high=mid-1;
        else if(k>a[mid])
            low=mid+1;
        else if(k==a[mid])
            break;
    }
    cout<<mid+1<<endl;
    }

}
