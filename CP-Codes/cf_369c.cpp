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

ll vis[maxsize];
std::vector <ll> v[maxsize];
ll ans[maxsize];
map < pair <ll,ll> , ll > m;

void dfs(ll i, ll c)
{
	vis[i]=1;
	for(ll j=0;j<v[i].size();j++)
	{
		ll x=v[i][j];
		if(!vis[x])
		{
			if(m[{i,x}]==1)
			{
				ans[c]=0;
				ans[x]=1;
				dfs(x,x);
			}
			else
			{
				dfs(x,c);
			}
		}
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
		ll x,y,t;
		cin>>x>>y>>t;
		v[x].pb(y);
		v[y].pb(x);
		m[{x,y}]=t-1;
		m[{y,x}]=t-1;
	}
	memset(vis,0,sizeof(vis));
	memset(ans,0,sizeof(ans));
	dfs(1,0);
	ll c=0;
	rep1(i,n)
	{
		if(ans[i])
			c++;
	}
	cout<<c<<endl;

	rep1(i,n)
	{
		if(ans[i])
			cout<<i<<" ";
	}


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}