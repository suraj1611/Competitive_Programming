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
ll maxm=mn;
std::vector<ll> adj[maxsize];

ll dfs(ll s,ll h)
{
	h++;
	maxm=max(h,maxm);
	vis[s]=1;
	for (int i = 0; i < adj[s].size(); ++i)
	{
		if(!vis[adj[s][i]])
			dfs(adj[s][i],h);
	}
	return maxm;
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
	ll a[n+1];
	rep1(i,n)
	{
		cin>>a[i];
		if(a[i]!=-1)
		{
		adj[a[i]].pb(i);
		adj[i].pb(a[i]);
		}
	}
	rep1(i,n)
	{
		if(vis[i]==0&&a[i]==-1)
			dfs(i,0);
	}
	cout<<maxm<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

