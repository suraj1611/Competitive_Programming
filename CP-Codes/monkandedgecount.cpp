/* Code by : Suraj (@suraj1611) */

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
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

std::vector <ll> v[maxsize];
bool vis[maxsize];
ll cnodes[maxsize];

ll nc2(ll n)
{
	return (n*(n-1))/2;
}

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

ll dfs( ll s)
{
	vis[s]=true;
	ll c=1;
	for (int i = 0; i < v[s].size(); ++i)
	{
		if(!vis[v[s][i]])
			c+=dfs(v[s][i]);
	}
	return cnodes[s]=c;
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,q;
	cin>>n>>q;
	std::vector< pair <ll,ll> > v1;
	rep(i,n-1)
	{
		ll x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
		v1.pb(mp(x,y));
	}
	dfs(1);
	//rep(i,n)
	//cout<<i+1<<" "<<cnodes[i+1]<<endl;
	while(q--)
	{
		ll x;
		cin>>x;
		ll r=v1[x-1].F;
		ll s=v1[x-1].S;
		ll minm=min(cnodes[r],cnodes[s]);
		ll ans=nc2(n)-nc2(minm)-nc2(n-minm);
		cout<<ans<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

