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

std::vector <ll> v[maxsize];
ll vis[maxsize]={0};
ll d[maxsize];

void dfs(ll x)
{
	vis[x]=1;
	for(ll i=0;i<v[x].size();i++)
	{
		if(!vis[v[x][i]])
			dfs(v[x][i]);
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

	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		memset(vis,0,sizeof(vis));
		memset(d,0,sizeof(d));
		rep(i,maxsize)
		{
			v[i].clear();
		}
		rep(i,n-1)
		{
			ll x,y;
			cin>>x>>y;
			v[x].pb(y);
			v[y].pb(x);
		}
		rep(i,k)
		{
			cin>>d[i];
			//cout<<d[i]<<" ";
		}
		ll c=0;
		dfs(1);
		c++;
		rep(i,k)
		{
			if(!vis[d[i]])
			{
				c++;
				dfs(d[i]);
			}
		}
	
		cout<<c<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}