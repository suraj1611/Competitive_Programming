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


ll dp[1002][1002];
ll dp1[1002][1002];

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

	while(1)
	{
	ll n,k;
	cin>>n>>k;
	if(n==0 && k==0)
		break;
	std::vector< pair <ll,ll> > v;
	rep(i,k)
	{
		ll x,y;
		cin>>x>>y;
		v.pb(mp(x,y));
	}
	memset(dp,0,sizeof(dp));
	memset(dp1,0,sizeof(dp1));

	rep(i,k+1)
	{
		rep(j,n+1)
		{
			if(i==0 or j==0)
				dp[i][j]=0,dp1[i][j]=0;
			else if(v[i-1].F <= j)
			{
				
				dp[i][j] = max(v[i-1].S + dp[i-1][j-v[i-1].F], dp[i-1][j]);
			}
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	ll minsum=0;
	/*lb;lb;
	rep(i,k+1)
	{
		rep(j,n+1)
		cout<<dp[i][j]<<" ";
		lb;
	}*/

	rep(i,n+1)
	{
		if(dp[k][i]==dp[k][n])
		{
			minsum=i;
			break;
		}

	}

	cout<<minsum<<" "<<dp[k][n]<<endl;
	

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}