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

std::vector<ll> v[maxsize];
ll vis[maxsize];

void solve(ll x)
{
	vis[x]=1;
	for(ll i=0;i<v[x].size();i++)
	{
		vis[v[x][i]]=1;
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

	ll m,n;
	cin>>n>>m;
	memset(vis,0,sizeof(vis));

	rep(i,m)
	{
		ll x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}

	std::vector < pair <ll,ll > > vp;
	
	rep1(i,n)
	{
		vp.pb(mp(v[i].size(),i));
	}

	// sort according to degree in desc order
	sort(vp.begin(), vp.end());
	reverse(vp.begin(), vp.end());

	ll c1=0;

	rep(i,vp.size())
	{
		ll x = vp[i].S;
		if(!vis[x])
			{
				//cout<<x<<endl;
				solve(x);
				c1++;
			}
	}

	memset(vis,0,sizeof(vis));
	// start with second highest degree node
	rep1(i,n)
	{
		if(vp[0]!=vp[i])
		{
			swap(vp[0],vp[i]);
			break;
		}
	}

	ll c=0;

	rep(i,vp.size())
	{
		ll x = vp[i].S;
		if(!vis[x])
			{
				//cout<<x<<endl;
				solve(x);
				c++;
			}
	}
	
	cout<<min(c,c1)<<endl;



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}