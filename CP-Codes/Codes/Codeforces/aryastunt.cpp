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

std::vector <ll> adj[100005];
ll vis[100005]={0};
std::vector<ll> id;
ll a[100005];
ll maxm=mn;
ll minid=mx;

void dfs(ll s)
{
	vis[s]=1;
	//cout<<s<<endl;
	if(a[s]>maxm||(a[s]==maxm&&minid>s))
	{
		maxm=a[s];
		minid=s;
	}
	for (ll i = 0; i < adj[s].size(); ++i)
	{
		if(!vis[adj[s][i]])
		{
			dfs(adj[s][i]);
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

	ll n,m;
	cin>>n>>m;
	ll tot=0,dead=0;
	rep1(i,n)
	{
		cin>>a[i];
		tot+=a[i];
		//cout<<tot<<endl;
	}
	rep(i,m)
	{
		ll x,y;
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	
	rep1(i,n)
	{
		if(vis[i]==0)
		{
			dfs(i);
			id.pb(minid);
			maxm=mn;minid=mx;
		}
	}
	rep(i,id.size())
	dead+=a[id[i]];
	cout<<dead<< " "<<tot-dead<<endl;
	sort(id.begin(), id.end());
	rep(i,id.size())
	cout<<id[i]<< " ";


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

