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

ll dp[505][505],a[505];

ll sol(ll i,ll j)
{
	if(i>j)
		return 0;
	if(i==j)
		return 1;
	if(dp[i][j]!=-1)
		return dp[i][j];
	ll ans=mx;
	if(a[i]==a[j])
		ans=sol(i+1,j-1);
	else
	{
	for(int k = i; k < j ; k++)
		ans=min(ans,sol(i,k)+sol(k+1,j));
	}

	return dp[i][j]=ans;
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	memset(dp,-1,sizeof(dp));
	ll n,ans;
	cin>>n;
	rep(i,n)
	{
		cin>>a[i];
	}
	cout<<sol(0,n-1)<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

