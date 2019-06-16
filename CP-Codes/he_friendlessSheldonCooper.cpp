/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define maxsize 1001
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

typedef pair <ll,ll> pll;

std::vector<pll> v[maxsize];
ll vis[maxsize];

ll prims(ll s)
{
	priority_queue < pll, vector <pll> , greater <pll> > q;
	ll minm=0;
	q.push(mp(0,s));
	while(!q.empty())
	{
		ll wt=q.top().F;
		ll ver=q.top().S;
		q.pop();
		//checks for a cycle
		if(vis[ver])
			continue;
		minm+=wt;
		vis[ver]=1;
		for(ll i=0;i<v[ver].size();i++)
		{
			ll ver2=v[ver][i].S;
			if(!vis[ver2])
				q.push(v[ver][i]);
		}
	}
	return minm;
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

	ll t;
	cin>>t;
	while(t--)
	{
		memset(vis,0,sizeof(vis));
		rep(i,1001)
		{
			v[i].clear();
		}
		ll n,m;
		cin>>n>>m;
		rep(i,m)
		{
			ll x,y;
			cin>>x>>y;
			v[x].pb(mp(1,y));
			v[y].pb(mp(1,x));
		}
		cout<<prims(1)<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}