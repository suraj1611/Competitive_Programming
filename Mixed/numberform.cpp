/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 720720
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

ll dp[100005][35];


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
	dp[0][0]=1;
	rep1(i,n)
	cin>>a[i],dp[i][0]=1;
	ll k;
	cin>>k;
	rep1(i,n)
	{
		rep1(j,k)
		{
			if(j==1&&a[i]==0)
				dp[i][j]=dp[i-1][j];
			else
				dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%md;
		}
	}
	rep(i,n+1)
	{
		rep(j,k+1)
		cout<<dp[i][j]<<" ";
		lb;
	}
	cout << (k == 1 ? n : dp[n][k]);

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

