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
#define maxsize 100005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll vis[maxsize]={0};
std::vector<ll> v[maxsize];
ll dis[maxsize]={0};
ll parent[maxsize]={0};
ll a;

void dfs(ll s)
{
	vis[s]=1;

	for(auto i : v[s])
	{
		if(!vis[i])
		{
			dis[i]=dis[s]+1;
			dfs(i);
		}
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
		v[x].pb(y);
		v[y].pb(x);
	}

	ll maxm=-1;
	//ll a=0,b=0;

	dfs(1);

	rep1(i,n)
	{
		if(dis[i]>maxm)
		{
			maxm=dis[i];
			a=i;
		}
	}

	cout<<a<<" ";

	memset(vis,0,sizeof(vis));
	memset(dis,0,sizeof(dis));

	dfs(a);
	maxm=-1;

	rep1(i,n)
	{
		if(dis[i]>maxm)
		{
			maxm=dis[i];
			a=i;
		}
	}

	cout<<a<<" ";




	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

