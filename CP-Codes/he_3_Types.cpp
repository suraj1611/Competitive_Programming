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

std::vector< pair <ll,ll> > v[maxsize];
ll vis[maxsize]={0};

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

ll prims(ll x)
{
	priority_queue < pair <ll,ll> > q;
	//priority_queue < pair <ll,ll> , vector <pair <ll,ll> > , greater <pair <ll,ll> > > q;
	ll maxm= 0;
	q.push(mp(0,x));
	while(!q.empty())
	{
		ll wt = q.top().F;
		ll ver = q.top().S;
		q.pop();
		if(vis[ver])
			continue;
		maxm+=wt;
		vis[ver]=1;
		for(ll i=0;i<v[ver].size();i++)
		{
			ll ver2 = v[ver][i].S;
			if(!vis[ver2])
			{
				q.push(v[ver][i]);
			}
		}
	}
	return maxm;
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
	ll temp = 0;
	rep(i,m)
	{
		ll x,y,z;
		cin>>x>>y>>z;
		v[x].pb(mp(z,y));
		v[y].pb(mp(z,x));
		temp +=z;
	}
	cout<<m - prims(1)<<endl;

	

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}