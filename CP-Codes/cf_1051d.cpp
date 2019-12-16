/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 998244353
#define pb push_back
#define mp make_pair
#define maxsize 1005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll n,k;
ll dp[maxsize][2*maxsize][2][2];

ll solve(ll ind,ll c,ll x,ll y)
{
	if(c>k)
		return 0;
	if(ind==n)
		return c==k;
	if(dp[ind][c][x][y]!=-1)
		return dp[ind][c][x][y];
	ll ans=0;
	if(x==y)
	{
		ans+=solve(ind+1,c,x,y);
		ans+=solve(ind+1,c+1,x^1,y^1);
		ans+=solve(ind+1,c+1,x,y^1);
		ans+=solve(ind+1,c+1,x^1,y);
	}
	else
	{
		ans+=solve(ind+1,c,x,y);
		ans+=solve(ind+1,c+2,x^1,y^1);
		ans+=solve(ind+1,c,x,y^1);
		ans+=solve(ind+1,c,x^1,y);
	}
	ans%=md;
	return dp[ind][c][x][y]=ans;
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	cin>>n>>k;
	memset(dp,-1,sizeof(dp));
	ll ans=0;
	ans+=solve(1,1,0,0)+solve(1,1,1,1);
	ans+=solve(1,2,1,0)+solve(1,2,0,1);
	ans%=md;
	cout<<ans<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}