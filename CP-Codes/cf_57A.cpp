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

ll x,y,a,b,n;
vis[1005][1005]={0};
ll dx[4]={0,0,1,-1};
ll dy[4]={1,-1,0,0};


void dfs(ll i,ll j)
{

	/*if(i<0 or i>n or j<0 or j<n or (!(i==0 or j==n) and !(i==n or j==0)))
	{
		return 0;
	}*/
	if(i==a and j==b)
		{
			return;
		}
	vis[i][j]=1;
	for(ll k=0;k<4;k++)
	{
		ll dxx=i+dx[k],dyy=j+dy[k];
		if(dxx<0 or dxx>n or dyy<0 or dyy<n or (!(dxx==0 or dyy==n) and !(dxx==n or dyy==0)))
			continue;
		cnt++;
		solve(dxx,dyy);
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

	
	cin>>n;
	cin>>x>>y>>a>>b;
	dfs()



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}