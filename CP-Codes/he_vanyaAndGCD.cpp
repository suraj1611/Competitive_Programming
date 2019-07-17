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

ll dp[1005][1005];
ll a[maxsize],n;

ll solve(ll i,ll g)
{
	if(i==n)
	{
		if(g==1)
			return 1;
		else
			return 0;
	}

	if(dp[i][g]!=-1)
		return dp[i][g];

	ll ans = (solve(i+1,g)%md + solve(i+1,__gcd(a[i],g))%md)%md;

	return dp[i][g] = ans;

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
	rep(i,n)
	cin>>a[i];
	memset(dp,-1,sizeof(dp));
	ll ans=0;
	rep(i,n)
	{
		ans = (ans%md +  solve(i+1,a[i])%md)%md;
	}
	cout<<ans<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}