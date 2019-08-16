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

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[2][n+1],dp[2][n+1];
		memset(dp,0,sizeof(dp));
		rep(i,2)
		{
			rep(j,n)
			cin>>a[i][j];
		}
		if(n==1)
			cout<<max(a[0][0],a[1][0]);
		else
		{
			//ll maxm = max(a[0][0],max(a[0][1],max(a[1][0],a[1][1])));
			//cout<<maxm<<endl;
			dp[0][0]=a[0][0];dp[0][1]=a[0][1];dp[1][0]=a[1][0];dp[1][1]=a[1][1];
			for(int i=0;i<2;i++)
			{
				for(int j=2;j<n;j++)
				{
					dp[i][j]+= a[i][j] + max(dp[i][j-2],dp[i+1][j-2]);
					//cout<<dp[i][j]<<" ";
				}
				//lb;;
			}
		}
		cout<<max(dp[1][n-1],dp[0][n-1])<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}