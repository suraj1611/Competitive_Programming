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

ll vis[maxsize]={0};
std::vector<ll> v[maxsize];

ll a[maxsize];
ll col[maxsize];

void dfs(ll s,ll c)
{
	vis[s]=1;
	c++;
	col[s]=c%2;
	for (ll i = 0; i < v[s].size(); ++i)
	{
		if(!vis[v[s][i]])
			dfs(v[s][i],c);
	}
	//cout<<col[s]<<endl;
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
	{
		ll x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	dfs(1,0);
	ll red=0,blue=0;
	rep1(i,n)
	{
		if(col[i]==1)
			red++;
		else
			blue++;
	}
	cout<<red*blue-(n-1)<<endl;



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

