/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define mx 1e18
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define maxsize 1000005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll a[maxsize],b[maxsize],dp[maxsize][3],n;

ll solve(ll pos,ll inc)
{
	if(pos==n)
		return 0;
	if(dp[pos][inc]!=mx)
		return dp[pos][inc];
	rep(i,3)
	{
		if(pos==0 or (a[pos]+i != a[pos-1]+inc))
		{
			dp[pos][inc] = min(dp[pos][inc],solve(pos+1,i)+b[pos]*i);
		}
	}
	return dp[pos][inc];
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

	ll t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		rep(i,n)
		cin>>a[i]>>b[i];
		rep(i,n)
		{
			dp[i][0]=dp[i][1]=dp[i][2]=mx;
		}
		cout<<solve(0,0)<<endl;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}