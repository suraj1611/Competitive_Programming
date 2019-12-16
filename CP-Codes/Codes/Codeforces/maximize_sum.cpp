/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long
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

const ll N = 1002;
ll n;
ll a[N], dp[N][N];

ll cal(ll i,ll j)
{
	if(i==j)
		return a[i];
	if(i==j-1)
		return max(a[i]*a[j],a[i]+a[j]);
	ll &ans=dp[i][j];
	if(ans!=-1)
		return ans;
	ans=0;
	/*ans=max(ans,a[i]+cal(i+1,j));
	ans=max(ans,a[i]*a[i+1]+cal(i+2,j));
	ans=max(ans,a[j]+cal(i,j+1));
	ans=max(ans,a[j]*a[j-1]+cal(i,j+2));*/
	//cout<<ans<<endl;
	ans = max(ans, a[i] + cal(i+1, j));
	ans = max(ans, a[i]*a[i+1] + cal(i+2, j));
	ans = max(ans, a[i] + cal(i, j-1));
	ans = max(ans, a[j]*a[j-1] + cal(i, j-2));
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
	assert(n >= 1 && n <= 1000);
	rep1(i,n)
	{
		cin>>a[i];
		assert(a[i] >= 1 && a[i] <= 1000*1000);
	}
	memset(dp,-1,sizeof(dp));

	cout<<cal(1, n)<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

