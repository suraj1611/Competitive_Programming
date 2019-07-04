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

ll dp[maxsize]={0};
ll a[maxsize]={0};

/*ll solve(ll x)
{
	if(x==n)
		return 1;
	if(a[x])
		return 0;
	
	return solve(x+1)+solve(x+2);
	//return ans;
}
*/
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

	ll n,m;
	cin>>n>>m;
	//ll a[n+1]={0};
	rep(i,m)
	{
		ll x;
		cin>>x;
		a[x]=1;
	}

	dp[n]=1;
	if(a[n-1])
		dp[n-1]=0;
	else
		dp[n-1]=1;
	
	for(ll i=n-2;i>=0;i--)
	{
		if(a[i])
			{
				dp[i]=0;
				continue;
			}
		else
			dp[i]=(dp[i+1]%md+dp[i+2]%md)%md;
	}
	cout<<dp[0]<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}