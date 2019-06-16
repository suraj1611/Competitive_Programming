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
#define maxsize 1005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

vector < pair <ll,ll> > v[maxsize];
ll vis[maxsize];
ll dist[maxsize];

void dijkstra(ll s)
{
	priority_queue < pair <ll,ll> , vector <pair <ll,ll> > , greater < pair <ll,ll> > > q;
	dist[s]=0;
	q.push(mp(0,s));
	while(!q.empty())
	{
		ll dis1=q.top().F;
		ll ver1=q.top().S;
		q.pop();
		for(ll i=0;i<v[ver1].size();i++)
		{
			ll dis2=v[ver1][i].F;
			ll ver2=v[ver1][i].S;
			if(!vis[ver2] && dis2+dist[ver1] < dist[ver2])
			{
				dist[ver2]=dis2+dist[ver1];
				q.push(mp(dist[ver2],ver2));
			}
		}
		vis[ver1]=1;
	}
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

	ll n;
	cin>>n;
	rep(i,n)
	{
		ll x,y,z;
		cin>>x>>y>>z;
		v[x].pb(mp(z,y));
		v[y].pb(mp(z,x));
	}
	memset(vis,0,sizeof(vis));
	rep(i,1005)
	dist[i]=mx;
	ll src;
	cin>>src;
	dijkstra(src);
	ll q;
	cin>>q;
	while(q--)
	{
		ll x;
		cin>>x;
		if(dist[x]!=mx)
			cout<<dist[x]<<endl;
		else
			cout<<"NO PATH"<<endl;
	}




	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
