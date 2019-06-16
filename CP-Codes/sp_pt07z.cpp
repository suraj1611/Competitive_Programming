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
#define maxsize 100005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

std::vector <ll> v[maxsize];
ll vis[maxsize];
ll maxwt[maxsize];

void bfs(ll s)
{
	queue < pair <ll,ll> > q;
	q.push(mp(s,0));
	while(!q.empty())
	{
		ll node = q.front().F;
		ll wt = q.front().S;
		vis[node]=1;
		rep(i,v[node].size())
		{
			if(!vis[v[node][i]])
			{
				q.push(mp(v[node][i],wt+1));
			}
		}
		maxwt[node]=wt;
		q.pop();
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
	rep(i,n-1)
	{
		ll x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	memset(vis,0,sizeof(vis));
	memset(maxwt,0,sizeof(maxwt));
	bfs(1);
	ll maxroot=0;
	rep1(i,n)
	{
		if(maxwt[i] > maxwt[maxroot])
			maxroot=i;
	}
	memset(vis,0,sizeof(vis));
	memset(maxwt,0,sizeof(maxwt));
	bfs(maxroot);
	ll ans=0;
	rep1(i,n)
	{
		ans=max(ans,maxwt[i]);
	}
	cout<<ans<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}