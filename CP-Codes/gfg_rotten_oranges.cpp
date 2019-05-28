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

ll a[105][105],vis[105][105];
ll n,m;
ll x[4]={-1,1,0,0};
ll y[4]={0,0,-1,1};

void dfs(ll i,ll j,ll c)
{
	if(i<0 || i>=n || j<0 || j>=m || a[i][j]==0 || c>1 )
		return;
	//vis[i][j]=1;
	a[i][j]=2;
	rep(k,4)
	{
		ll dx,dy;
		dx=i+x[k];
		dy=j+y[k];
		//cout<<dx<<" "<<dy<<" "<<c<<endl;
		dfs(dx,dy,c+1);
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

bool check()
{
	rep(i,n)
			{
				rep(j,m)
				{
					if(a[i][j]==1)
					{
						return 0;
					}
					//cout<<ar[i][j]<< " ";
				}
			}
			return 1;
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
		ll cnt=0;
		memset(vis,0,sizeof(vis));
		cin>>n>>m;
		rep(i,n)
		{
			rep(j,m)
			{
				cin>>a[i][j];
				if(a[i][j]==1)
					cnt++;
			}
		}
		ll flag=0,ans=0,k=1;
		ll ar[n][m];
		while(cnt--)
		{
			rep(i,n)
			{
				rep(j,m)
				{
					ar[i][j]=a[i][j];
				}
			}
			if(check())
			{
				flag=1;
				break;
			}
			else
			ans++;
			rep(i,n)
			{
				rep(j,m)
				{
					if(ar[i][j]==2)
					{
						dfs(i,j,0);
					}
				}
			}
			/*rep(i,n)
			{
				rep(j,m)
				{
					cout<<a[i][j]<<" ";
				}
				lb;
			}
			lb;*/


		}
		
		if(!flag)
		{
			cout<<-1<<endl;
		}
		else
		cout<<ans<<endl;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}