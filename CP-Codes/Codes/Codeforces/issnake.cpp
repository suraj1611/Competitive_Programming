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

ll n;
ll vis[2][505]={0};
char a[2][505];

void dfs(ll x,ll y)
{
	if(x>=2||y>=n||x<0||y<0)
		return;
	if(a[x][y]=='.')
		return;
	vis[x][y]=1;
	if(x==0)
	{
		if(vis[x+1][y]==0)
		{
			dfs(x+1,y);
			//vis[x+1][y]=0;
		}
	}
	if(y!=n-1)
	{
		if(vis[x][y+1]==0)
		{
			dfs(x,y+1);
			//vis[x][y+1]=0;
		}
	}
	if(x==1)
	{
		if(vis[x-1][y]==0)
		{
			dfs(x-1,y);
			//vis[x-1][y]=0;
		}
	}
	if(y!=0)
	{
		if(vis[x][y-1]==0)
		{
			dfs(x,y-1);
			//vis[x][y-1]=0;
		}
	}
}

ll check()
{
	rep(i,2)
	{
		rep(j,n)
		{
			//cout<<vis[i][j];
			if(a[i][j]=='#'&&vis[i][j]==0)
				{
					//cout<<i<< " "<<j<<endl;
					return 0;
				}
		}
		//lb;
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
	ll flag=0;
	memset(vis,0,sizeof(vis));
	cin>>n;
	rep(i,2)
	{
		rep(j,n)
		{
			
			cin>>a[i][j];
		}
	}

	rep(i,2)
	{
		rep(j,n)
		{
			//cout<<i<< " "<<j<<endl;
			if(a[i][j]=='#')
			dfs(i,j);
			if(check())
				{
					flag=1;
				}
			if(flag)
				break;
			memset(vis,0,sizeof(vis));
			
		}
		if(flag)
		break;
	}

	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}
	
	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

