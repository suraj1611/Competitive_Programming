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
#define endl "\n"
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll a[100][100],dp[100][100],m,n;

ll power(ll x, ll  y) 
{ 
	ll m=1;
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

ll solve(ll i,ll j)
{
	if(i<0 or i>=n or j<0 or j>=m)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];

	return dp[i][j]= a[i][j]+ max({solve(i+1,j+1),solve(i-1,j+1),solve(i,j+1)});
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
		rep(i,n)
		{
			rep(j,m)
			cin>>a[i][j];
		}
		ll ans=-1;
		rep(i,n)
		ans=max(ans,solve(i,0));
		cout<<ans<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}