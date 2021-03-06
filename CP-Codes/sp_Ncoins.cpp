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

ll dp[maxsize];

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

	ll k,l,m;
	cin>>k>>l>>m;
	dp[1]=1;
	for(ll i=2;i<maxsize;i++)
	{
		if(dp[i-1]==0)
			dp[i]=1;
		if((i-k)>=0)
		{
			if(dp[i-k]==0)
				dp[i]=1;
		}
		if((i-l)>=0)
		{
			if(dp[i-l]==0)
				dp[i]=1;
		}
		/*else
			dp[i]=0;*/
	}
	while(m--)
	{
		ll x;
		cin>>x;
		if(dp[x])
			cout<<'A';
		else
			cout<<'B';
	}


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}