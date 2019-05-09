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

ll vis[1005]={0};
std::vector <ll> adj[1005];
ll via[1005];

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
	while(!(q.empty()))
	{
		ll p=q.front();
		q.pop();
		for(ll i=0;i<adj[p].size();i++)
		{
			if(vis[adj[p][i]]==0)
			{
				via[adj[p][i]]=p;
				vis[adj[p][i]]=1;
				if(adj[p][i]==y)
					return;
				q.push(adj[p][i]);
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

	ll n,m,t,c;
	cin>>n>>m>>t>>c;

	rep(i,m)
	{
		ll a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	ll x,y;
	cin>>x>>y;
		if(n==1)
		{
			cout<<1<<"\n"<<1;
			return 0;
		}
	rep1(i,n)
	sort(adj[i].begin(), adj[i].end());
	bfs(x,y);
	std::vector <ll> v;
	v.pb(y);
	ll p=via[y];
	while(p!=x)
	{
		v.pb(p);
		p=via[p];
	}
	v.pb(x);
	cout<<v.size()<<endl;
	for (ll i = v.size()-1 ; i >= 0 ; --i)
	{
		cout<<v[i]<< " ";
	}



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

