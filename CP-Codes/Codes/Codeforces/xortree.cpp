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
#define maxsize 1100005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll vis[maxsize]={0};
std::vector <ll> adj[maxsize];

std::vector <ll> ans;
ll goal[maxsize],init[maxsize];

void dfs(ll s,ll e,ll o)
{
	vis[s]=1;
	if(e&1)
		init[s]^=1;
	if(init[s]!=goal[s])
	{
		ans.pb(s);
		e++;
	}
	for(ll i=0;i<adj[s].size();i++)
	{
		if(!vis[adj[s][i]])
			dfs(adj[s][i],o,e);
	}
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



int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	rep1(i,n-1)
	{
		ll x,y;
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	// ll init[n+1],goal[n+1];
	rep1(i,n)
	cin>>init[i];
	rep1(i,n)
	cin>>goal[i];
	dfs(1,0,0);
	cout<<ans.size()<<endl;
	rep(i,ans.size())
	cout<<ans[i]<<endl;



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

