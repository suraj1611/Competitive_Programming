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
typedef pair<ll,ll> pll;

std::vector <pll> v;
ll g[4005][4005];
ll c[maxsize];


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
	rep(i,m)
	{
		ll x,y;
		cin>>x>>y;
		v.pb(mp(x,y));
		g[x][y]++;g[y][x]++;
		c[x]++;c[y]++;
	}
	ll ans=mx;
	for(auto j : v)
	{
		ll x=j.F,y=j.S;
		rep1(i,n)
		{
			if(g[x][i] && g[y][i])
			{
				ans = min(ans,c[x]+c[y]+c[i]-6);
			}
		}
	}
	if(ans<0 or ans==mx)
		ans=-1;
	cout<<ans<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}