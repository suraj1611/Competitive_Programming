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

ll n,m,k;
ll a[105][105];
ll ans=0;
ll vis[105][105];
ll dp[105][105][1000];

ll dfs(ll i,ll j,ll cur)
{
	if(i<0 or j<0 or cur+a[i][j]>k)
		return 0;
	if(i==0 and j==0)
		return cur+a[i][j];
	if(dp[i][j][cur]!=-1)
		return dp[i][j][cur];
	ll ans1=0,ans2=0,ans3=0;
	ans1=dfs(i,j-1,cur+a[i][j]);
	ans2=dfs(i-1,j,cur+a[i][j]);
	ans3=dfs(i-1,j-1,cur+a[i][j]);

	//cout<<cur<<endl;
	return dp[i][j][cur]=max(ans1,max(ans2,ans3));
	// return dp[i][j]=max(dfs(i,j-1,cur+a[i][j]),max(dfs(i-1,j,cur+a[i][j]),dfs(i-1,j-1,cur+a[i][j])));


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
		memset(a,0,sizeof(a));
		memset(dp,-1,sizeof(dp));
		cin>>n>>m>>k;
		rep(i,n)
		{
			rep(j,m)
			{
				cin>>a[i][j];
			}
		}
		ll ans=dfs(n-1,m-1,0);
		if(ans==0)
			ans=-1;
		cout<<ans<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}