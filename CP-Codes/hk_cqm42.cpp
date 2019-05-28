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

ll x[4]={1,-1,0,0};
ll y[4]={0,0,1,-1};
ll n,m,ans=0,c=0;
ll a[600][600],vis[600][600];


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

void dfs(ll i, ll j)
{
	if(i<0 || j<0 || i>=n || j>=m || vis[i][j]==1 || a[i][j]==0)
		return;
	vis[i][j]=1;
	c++;
	ans=max(ans,c);
	rep(k,4)
	{
		ll dx,dy;
		dx=i + x[k];dy=j+y[k];
		dfs(dx,dy);
	}
} 

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	cin>>n>>m;
	string s;
	memset(vis,0,sizeof(vis));
	rep(i,n)
	{
		cin>>s;
		rep(j,s.length())
		{
			if(s[j]=='#')
				a[i][j]=0;
			else
				a[i][j]=1;
		}
	}

	rep(i,n)
	{
		rep(j,m)
		{
			if(a[i][j]==1)
			{
				if(vis[i][j]==0)
					{
						c=0;
						dfs(i,j);
					}
			}
		}
	}

	cout<<ans<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}