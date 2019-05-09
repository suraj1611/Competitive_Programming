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
#define maxsize 10001
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll vis[maxsize];
std::vector<ll> adj[maxsize];
ll in[maxsize],out[maxsize];
map < pair <ll,ll>,ll > m,pos1,pos2;
ll lar;


ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

void dfs1(ll u,ll par)
{
	in[u]=0;
	for(ll ch : adj[u])
	{
		//ll ch=adj
		if(ch==par)
			continue;
		dfs1(ch,u);
		in[u]=max(in[u], m[mp(u,ch)] + in[ch]);
	}
}

void dfs2(ll u,ll par)
{
	ll m1=mn,m2=mn;
	//ll pos1[maxsize][maxsize],pos2[maxsize][maxsize];

	for(ll ch : adj[u])
	{
		if(ch==par)
			continue;
		if(in[ch]>=m1)
			m2=m1,m1=in[ch],pos1[mp(u,ch)]=m[mp(u,ch)],pos1[mp(ch,u)]=m[mp(u,ch)];
		else if(in[ch]>m2)
			m2=in[ch],pos2[mp(u,ch)]=m[mp(u,ch)],pos2[mp(ch,u)]=m[mp(u,ch)];
	}

	for(ll ch : adj[u])
	{
		if(ch==par)
			continue;

		ll lar=m1;

		if(m1==in[ch])
			lar=m2,pos2[mp(ch,u)]=pos1[mp(ch,u)];

		out[ch]= m[mp(ch,u)] + max(out[u],pos2[mp(u,ch)]+lar);

		dfs2(ch,u);
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

		ll n;
		cin>>n;
		ll val[n+5];
		memset(vis,1,sizeof(vis));
		memset(adj,0,sizeof(adj));
		m.clear();pos1.clear();pos2.clear();
		
		rep1(i,n-1)
		{
			ll x,y,z;
			cin>>x>>y>>z;
			adj[x].pb(y);
			adj[y].pb(x);
			m[mp(x,y)]=z;
			m[mp(y,x)]=z;
		}

		dfs1(1,0);
		dfs2(1,0);
		
		rep1(i,n)
		cout<<max(in[i],out[i])<<" ";
		lb;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

