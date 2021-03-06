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
		ll n,m;
		cin>>n>>m;
		ll a[n+1][m+1],dp[n+1][m+1];
		rep(i,n)
		{
			rep(j,m)
			{
				cin>>a[i][j];
			if(i==n-1)
				dp[i][j]=a[i][j];
			}
		}

		for(ll i=n-2;i>=0;i--)
		{
			ll max1=0,max2=0,ind;
			rep(j,m)
			{
				if(dp[i+1][j]>=max1)
				{
					max2=max1;
					max1=dp[i+1][j];
					ind=j;
				}
				else if(dp[i+1][j]<max1 && dp[i+1][j]>=max2)
				{
					max2=dp[i+1][j];

				}
			}

			rep(k,m)
			{
				ll ans=0;
				if(ind==k)
					ans=max2;
				else
					ans=max1;
				dp[i][k]=a[i][k]+ans;
			}
		}

		ll res=0;
		rep(i,m)
		{
			res=max(res,dp[0][i]);
		}

		cout<<res<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

