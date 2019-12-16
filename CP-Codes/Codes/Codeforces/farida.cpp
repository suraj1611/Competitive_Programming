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
#define maxsize 10005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);


ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

/*ll solve(ll i)
{
	if(i<0)
		return 0;

	ll ans=max(a[i]+solve(i-2),solve(i-1));
	return ans;

}*/
 

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;
	ll p=t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[maxsize],dp[maxsize];		
		rep(i,n)
		cin>>a[i];
		//memset(dp,0,sizeof(dp));
		dp[0]=a[0];dp[1]=max(a[0],a[1]);

		for(ll i=2;i<n;i++)
		{
			dp[i]=max(dp[i-2]+a[i],dp[i-1]);
		}
		cout<<"Case "<<p-t<<": "<<dp[n-1]<<endl;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

