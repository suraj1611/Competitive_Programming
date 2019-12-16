/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define mx 10000000000000000
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

	ll n;
	cin>>n;
	ll a[n];
	string s[n],rev[n];
	rep(i,n)
	cin>>a[i];
	rep(i,n)
	{
		cin>>s[i];
		rev[i]=s[i];
		reverse(rev[i].begin(), rev[i].end());
	}
	ll dp[n][2];
	dp[0][0]=0;
	dp[0][1]=a[0];
	rep1(i,n-1)
	{
		dp[i][0]=mx;dp[i][1]=mx;
		if(s[i]>=s[i-1])
			dp[i][0]=dp[i-1][0];

		if(s[i-1] <= rev[i])
			dp[i][1]=dp[i-1][0] + a[i];

		if(s[i] >= rev[i-1])
			dp[i][0] = min(dp[i][0], dp[i-1][1]);

		if(rev[i] >= rev[i-1])
			dp[i][1] = min(dp[i][1], dp[i-1][1] + a[i]);
	}

	ll ans=min(dp[n-1][0],dp[n-1][1]);
	if(ans==mx)
		cout<<-1<<endl;
	else
		cout<<ans<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}