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

ll dp[100005][60];
ll a[maxsize];
ll n;

ll solve(ll ind,ll k)
{
	if(k<0)
		return 0;
	if(ind==n)
		return 0;
	if(dp[ind][k]!=-1)
		return dp[ind][k];
	ll ans=1;
	for(ll i=ind+1;i<n;i++)
	{
		ll t=k-abs(a[ind]-a[i]);
		if(t>=0)
		{
			ans = max(ans,1+solve(i,t));
		}
		if(t==k)
			break;
	}
	return dp[ind][k]=ans;
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

	ll k;
	cin>>n>>k;
	memset(dp,-1,sizeof(dp));
	rep(i,n)
	cin>>a[i];
	cout<<solve(0,k)<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}