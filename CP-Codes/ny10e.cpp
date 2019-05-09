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

	
	ll dp[68][10];
	memset(dp,0,sizeof(dp));
	dp[2][0]=10;
	ll dpp[65]={0};
	dpp[2]=10;

	for(ll i=1;i<=9;i++)
	{
		dp[2][i]=dp[2][i-1]+(10-i);
	}
	
	dpp[2]=55;

	for(ll i=3;i<=65;i++)
	{
		ll s=0;
		for(ll j=0;j<=9;j++)
		{
			if(j==0)
			{
				dp[i][j]=dpp[i-1];
				s+=dpp[i-1]-dp[i][j];
			}
			else
			{
				dp[i][j]=dp[i][j-1]+(dpp[i-1]-dp[i-1][j-1]);
				s+=dpp[i-1]-(dpp[i-1]-dp[i-1][j-1]);
			}

		}

		dpp[i]=dpp[i-1]*10 - s;
	}

	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		if(k==1)
		cout<<n<<" "<<10<<endl;
		else
		cout<<n<<" "<<dpp[k]<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

