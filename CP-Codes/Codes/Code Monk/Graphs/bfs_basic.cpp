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

vector <ll> adj[10];
bool vis[10];


void bfs(ll s)
{
    queue <ll> q;
    q.push(s);
    vis[s]=true;
    while(!q.empty())
    {
        ll p=q.front();
        cout<<p<<"->";
        q.pop();
        for(ll i=0;i<adj[p].size();i++)
        {
            if(vis[i]==false)
            {
                vis[i]=true;
                q.push(i);
            }
        }
    }
}
int main()
{
    IOS
    memset(vis,false,sizeof(vis));
	ll n,m;
	cin>>n>>m;
    rep(i,m)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll h;
    cin>>h;
    bfs(h);
}

