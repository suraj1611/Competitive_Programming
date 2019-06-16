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
#define maxsize 1005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll x[8]={0,0,1,-1,1,1,-1,-1};
ll y[8]={1,-1,0,0,1,-1,1,-1};
ll vis[maxsize][maxsize];
ll tot=0;
ll a[maxsize][maxsize],m,n;

void dfs(ll i,ll j)
{
	if(i<0 or j<0 or i>=n or j>=m or a[i][j]==0 or vis[i][j]==1)
		return;
	tot++;
	vis[i][j]=1;
	rep(k,8)
	{
		ll dx,dy;
		dx=i+x[k];
		dy=j+y[k];
		dfs(dx,dy);
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

	ll t;
	cin>>t;
	while(t--)
	{
		memset(vis,0,sizeof(vis));
		tot=0;
		cin>>n>>m;
		rep(i,n)
		{
			rep(j,m)
			{
				cin>>a[i][j];
			}
		}
		ll cnt=0,ans=0;
		rep(i,n)
		{
			rep(j,m)
			{
				
				if(a[i][j]==1 && vis[i][j]==0)
					{
						tot=0;
						dfs(i,j);
						cnt++;
					}
				
				ans=max(ans,tot);
			}
		}
		cout<<cnt<<" "<<ans<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}