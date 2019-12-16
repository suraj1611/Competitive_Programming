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
#define maxsize 110005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll vis[maxsize]={0};
std::vector< pair <ll,ll> > v[maxsize];
ll par[maxsize],ans[maxsize]={0},c=0,val[maxsize];

void dfs1(ll u,ll p)
{
	par[u]=p;
	for(auto ch : v[u])
	{
		if(ch.F==p)
			continue;
		ans[ch.F]=max(ans[ch.F],ch.S + ans[u]);
		dfs1(ch.F,u);
	}

}

void dfs2(ll s)
{
	if(vis[s])
		return;
	vis[s]=1;
	c++;
	for(auto ch : v[s])
	{
		if(ch.F==par[s])
			continue;
		dfs2(ch.F);
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
	rep1(i,n)
	cin>>val[i];
	rep1(i,n-1)
	{
		ll x,y;
		cin>>x>>y;
		v[i+1].pb(mp(x,y));
		v[x].pb(mp(i+1,y));
	}
	dfs1(1,0);
	rep1(i,n)
	{
		if(ans[i]>val[i])
			dfs2(i);
	}
	cout<<c<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

