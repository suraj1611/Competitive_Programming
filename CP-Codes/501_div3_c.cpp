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
#define lb cout<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
/*#define miter map <ll,ll> :: iterator it; for(it=m.begin();it!=m.end();it++)
#define viter vector <ll> :: iterator it; for(it=v.begin();it!=v.end();it++)
#define siter set <ll> :: iterator it; for(it=s.begin();it!=s.end();it++)*/

ll prime[maxsize];



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

int bs(ll a[],ll x,ll n)
{
    ll l=0,h=n-1,mid;
    while(l<=h)
    {
    mid=(l+h)/2;
    if(x<a[mid])
        h=mid-1;
    else if(x>a[mid])
        l=mid+1;
    else
        return 1;
    }
    return 0;
}

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("in.txt", "r", stdin);
    // for writing output to output.txt
    freopen("out.txt", "w", stdout);
#endif
	ll n,m;
	cin>>n>>m;
	pair <ll,ll> p[n+1];
	ll sa=0,sb=0;
	ll ar[n];
	rep(i,n)
	{
		ll x,y;
		cin>>x>>y;
		sa+=x;sb+=y;
		ar[i]=x-y;
		p[i]=make_pair(x,y);
	}
	sort(ar,ar+n,greater <ll> ());
	//rep(i,n)
	//cout<<ar[i]<<" ";
	ll s=mx,ans=0;
	sort(p,p+n);
	if(sa<=m)
		ans=0;
	else if(sb>m)
		ans=-1;
	else
	{
		/*ll i=n-1;
		while(sa>m&&i>=0)
		{
			sa=sa-p[i].first+p[i].second;
			//cout<<sa<<endl;
			ans++;
			i--;
		}*/
		ll i=0;
		while(sa>m&&i<n)
		{
			sa=sa-ar[i];
			ans++;
			i++;
		}

	}
	cout<<ans<<endl;


}

