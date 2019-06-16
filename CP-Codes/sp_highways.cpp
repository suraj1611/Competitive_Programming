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
ll vis[maxsize];
ll dist[maxsize];

void dijkstra(ll s)
{
	priority_queue < pair <ll,ll> , vector < pair <ll,ll> > ,greater <pair <ll,ll> > > q; 
	dist[s]=0;
	q.push(mp(0,s));
	while(!q.empty())
	{
		ll dis1=q.top().F;
		ll ver1=q.top().S;
		q.pop();
		rep(i,v[ver1].size())
		{
			ll dis2=v[ver1][i].F;
			ll ver2=v[ver1][i].S;
			if(!vis[ver2] and dis2+dist[ver1] < dist[ver2])
			{
				dist[ver2] = dis2+dist[ver1];
				q.push(mp(dist[ver2],ver2));
			}
		}
		vis[ver1]=1;

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
		ll n,m,start,end;
		cin>>n>>m>>start>>end;
		memset(vis,0,sizeof(vis));
		rep(i,maxsize)
		dist[i]=mx;
		rep(i,n+1)
		v[i].clear();
		rep(i,m)
		{
			ll x,y,z;
			cin>>x>>y>>z;
			v[x].pb(mp(z,y));
			v[y].pb(mp(z,x));
		}

		dijkstra(start);
		if(dist[end]!=mx)
			cout<<dist[end]<<endl;
		else
			cout<<"NONE"<<endl;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}	