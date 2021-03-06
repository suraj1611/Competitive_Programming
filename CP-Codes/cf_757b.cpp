/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define pf printf
#define sc scanf
#define maxsize 100005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll prime[maxsize];
ll n;
ll a[maxsize];

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
}

void seive()
{
	for(ll i=2;i*i<=maxsize;i++)
	{
		if(!prime[i])
		{
			for(ll j=2*i;j<maxsize;j+=i)
			{
				if(!prime[j])
				prime[j]=i;
			}
		}
	}

	for(ll i=1;i<=maxsize;i++)
	{
		if(!prime[i])
			prime[i]=i;
	}
} 

ll solve()
{
	ll ans=1;
	map <ll,ll> m;
	rep(i,n)
	{
		ll p=a[i];
		while(p>1)
		{
			ll div=prime[p];
			++m[div];
			ans=max(ans,m[div]);
			while(p%div==0)
				p/=div;
		}
	}
	return ans;
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	cin>>n;
	rep(i,n)
	cin>>a[i];
	memset(prime,0,sizeof(prime));
	seive();
	cout<<solve()<<endl;



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}