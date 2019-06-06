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
		ll a,b;
		cin>>a>>b;
		string s1,s2;
		cin>>s1>>s2;
		//cout<<s1<<" "<<s2<<" "<<a<<" "<<b<<endl;
		ll dp[a+1][b+1];
		rep(i,a+1)
		dp[i][0]=0;
		rep(j,b+1)
		dp[0][j]=0;
		rep1(i,a)
		{
			rep1(j,b)
			{
				if(s1[i-1]==s2[j-1])
				{
					dp[i][j]=dp[i-1][j-1]+1;
				}
				else
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				//cout<<dp[i][j];
			}
		}
		cout<<dp[a][b]<<endl;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}