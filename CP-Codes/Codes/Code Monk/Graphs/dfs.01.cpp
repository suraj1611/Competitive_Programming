#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define pf printf
#define sc scanf
#define maxsize 1100005
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
/*#define miter map <ll,ll> :: iterator it; for(it=m.begin();it!=m.end();it++)
#define viter vector <ll> :: iterator it; for(it=v.begin();it!=v.end();it++)
#define siter set <ll> :: iterator it; for(it=s.begin();it!=s.end();it++)*/

ll prime[maxsize];

vector <ll> adj[100005];
ll  vis[100005]={0};


void dfs(ll s)
{
    vis[s]=1;
    for(ll i=0;i<adj[s].size();i++)
    {
        if(vis[adj[s][i]]==0)
            dfs(adj[s][i]);
    }
}

int main()
{
	IOS
	ll n,m,k;
	cin>>n>>m;
	rep(i,m)
	{
	    ll x,y;
	    cin>>x>>y;
	    adj[x].pb(y);
	    adj[y].pb(x);
	}
	cin>>k;
	dfs(k-1);
	ll c=0;
	for(ll i=1;i<=n;i++)
	{
	    if(vis[i]==0)
            c++;
	}
	cout<<c<<endl;


}

