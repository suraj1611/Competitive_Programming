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
#define maxsize 1005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll vis[maxsize];
std::vector<ll> v[maxsize];
ll dist[maxsize][maxsize]={0};
ll n,k1,ans=0;

void dfs(int k, int par)
{
    dist[k][0]=1;
    for(auto it:v[k])
    {
    	cout<<1<<endl;
        if(it==par)
            continue;
        label;
        lb;lb;lb; 
        dfs(it, k);
        for(int i=0;i<k1;i++)
        {
            ans+=dist[k][i]*dist[it][k1-i-1];
        }
        for(int i=0;i<=k1;i++)
        {
            dist[k][i+1]+=dist[it][i];
        }
        //cout<<ans<<endl;
        lb;
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

	
	cin>>n>>k1;
	rep1(i,n-1)
	{
		ll x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	dfs(1,0);
	cout<<ans<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}