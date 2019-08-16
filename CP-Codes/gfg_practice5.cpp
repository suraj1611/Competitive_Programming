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

ll dp[105][105];
ll n,m;
ll x[8] = {0,1,1,1,0,-1,-1,-1};
ll y[8] = {1,1,0,-1,-1,-1,0,1};
ll c=0;

void solve(ll i,ll j)
{
	if(i<0 or j<0 or i>=n or j>=m)
		return;
	/*if(dp[i][j]!=-1)
		return dp[i][j];*/
	if(i==n-1 and j==m-1)
		c++;
	rep(k,8)
	solve(i+x[k],j+y[k]);
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
		memset(dp,-1,sizeof(dp));
		cin>>n>>m;
		solve(0,0);
		/*rep(i,n)
		{
			rep(j,m)
			cout<<dp[i][j]<<" ";
			lb;
		}*/
		cout<<c;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}