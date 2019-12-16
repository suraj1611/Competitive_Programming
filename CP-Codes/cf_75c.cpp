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
#define maxsize 1100005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

std::vector<ll> v;

void fact(ll n)
{
	v.clear();
	for(ll i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
		if(n/i==i)
			v.pb(i);
		else
		{
			v.pb(i);
			v.pb(n/i);
		}
		}
	}
}

ll power(ll x, ll  y) 
{ 
	ll m=md;
   	ll ans=1;
    while (y > 0) 
    {
        if (y & 1)
            ans = (ans * x) % m;
        x = (x * x) % m;
        y >>= 1;
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

	ll n,m;
	cin>>n>>m;
	ll g=__gcd(n,m);
	ll t;cin>>t;
	fact(g);
	sort(v.begin(), v.end());
	
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		ll ans=-1;
		ll a=v[0];ll b=v[v.size()-1];
		if(x>b or a>y)
			ans=-1;
		else
		{
			for(ll i=v.size()-1;i>=0;i--)
			{
				
				if(v[i]>=x and v[i]<=y)
				{
					//cout<<v[i]<<endl;
					ans=v[i];
					break;
				}
			}
		}
		cout<<ans<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}