/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 100000000
#define pb push_back
#define mp make_pair
#define maxsize 1100005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll k1,k2;
ll dp[101][101][11][11];

ll solve(ll n,ll m,ll a,ll b)
{
	if(dp[n][m][a][b]!=-1)
		return dp[n][m][a][b];
	else if(n+m==0)
		return 1;
	else
	{
		ll x=0,y=0;
		if(a<k1 and n>0)
			x=solve(n-1,m,a+1,0);
		if(b<k2 and m>0)
			y=solve(n,m-1,0,b+1);
		return dp[n][m][a][b]=(x%md + y%md)%md;
	}
}


int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll m,n;
	cin>>n>>m>>k1>>k2;
	memset(dp,-1,sizeof(dp));
	cout<<solve(n,m,0,0)<<endl;

	

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}