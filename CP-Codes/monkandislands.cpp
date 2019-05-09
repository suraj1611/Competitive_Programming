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

ll vis[maxsize];
std::vector<ll> adj[maxsize];
ll from[maxsize];

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

void bfs(ll x,ll y)
{
	queue <ll> q;
	q.push(x);
	vis[x]=1;
	while(!q.empty())
	{
		ll p=q.front();
		q.pop();
		for (int i = 0; i < adj[p].size() ; ++i)
		{
			ll t=adj[p][i];
			if(!vis[t])
			{
				vis[t]=1;
				from[t]=p;
				if(t==y)
					return;
				q.push(t);
			}
		}
	}
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
		memset(from,-1,sizeof(from));
		ll n,m;
		cin>>n>>m;
		rep(i,m)
		{
			ll x,y;
			cin>>x>>y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		rep1(i,n)
		{
			sort(adj[i].begin(), adj[i].end());
		}
		bfs(1,n);
		ll c=0;
		ll p=from[n];c++;
		while(p!=1)
		{
			p=from[p];
			c++;
		}
		cout<<c<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

