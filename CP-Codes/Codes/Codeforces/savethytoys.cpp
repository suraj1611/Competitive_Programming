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
#define maxsize 100015
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);


ll a[maxsize],dp[maxsize];

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 



int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		memset(dp,0ll,sizeof(dp));
		memset(a,0ll,sizeof(a));
		rep(i,n)
		cin>>a[i];
		for(ll i=n-1;i>=0;i--)
		{
			dp[i]=a[i]+dp[i+2];
			if(i+1<n)
			{
				dp[i]=max(dp[i],a[i]+a[i+1]+dp[i+4]);
			}
			if(i+2<n)
			{
				dp[i]=max(dp[i],a[i]+a[i+1]+a[i+2]+dp[i+6]);
			}
		}
		cout<<dp[0]<<endl;
	}
	


	// #ifndef ONLINE_JUDGE
 //    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
 //    #endif

    return 0;
}

