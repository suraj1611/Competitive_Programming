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

ll n,k,dp[maxsize],a[maxsize];

ll solve(ll ind,ll cur)
{
	if(ind==n)
		return 0;
	if(dp[ind]!=0)
		return dp[ind];
	if(a[ind]<0 and cur==0)
	{
		k--;
		dp[ind] =  1+solve(ind+1,cur^1);
	}
	else if(a[ind]>=0 and cur==1)
	{
		dp[ind]= min(solve(ind+1,cur),1+solve(ind+1,cur^1));
	}
	else
	{
		dp[ind] = solve(ind+1,cur);
	}
	return dp[ind];

}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	cin>>n>>k;
	memset(dp,0,sizeof(dp));
	rep(i,n)
	cin>>a[i];
	cout<<solve(0,0)<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}