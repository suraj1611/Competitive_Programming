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
#define endl "\n"
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);



ll power(ll x, ll  y) 
{ 
	ll m=1;
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
		ll n,k;
		cin>>n;
		ll a[n];
		rep(i,n)
		cin>>a[i];
		sort(a,a+n);
		cin>>k;
		ll dp[n][k+1];
		rep(i,n)
		dp[i][0]=1;

		rep(i,n)
		{
			rep1(j,k)
			{
				if(i==0)
				{
					if(j%a[i]==0)
						dp[i][j]=1;
					else
						dp[i][j]=0;
					continue;
				}
				if(j>=a[i])
				{
					dp[i][j]=dp[i-1][j]+dp[i][j-a[i]];
				}
				else
					dp[i][j]=dp[i-1][j];
			}
		}

		cout<<dp[n-1][k]<<endl;



	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}