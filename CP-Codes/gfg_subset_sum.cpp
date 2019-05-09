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

ll a[1005],n;
ll dp[105][1005];

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

ll check(ll i, ll sum)
{
	if(sum==0)
		return 1;
	if(i>=n and sum!=0)
		return 0;
	if(dp[i][sum]!=-1)
		return dp[i][sum];	

	return dp[i][sum] = (check(i+1,sum) or check(i+1,sum-a[i]) );
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
		cin>>n;
		memset(dp,-1,sizeof(dp));
		ll flag=0,s=0;
		rep(i,n)
		{
			cin>>a[i];
			s+=a[i];
		}
		if(s&1)
			flag=1;
		else
			{
				if(check(0,s/2))
					flag=0;
				else
					flag=1;
			}
		if(flag)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}