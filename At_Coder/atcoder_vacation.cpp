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
#define maxsize 200000
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll a[maxsize],b[maxsize],c[maxsize];
ll n;
ll dp[maxsize][3];



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

	cin>>n;

	rep(i,n)
	{
		cin>>a[i]>>b[i]>>c[i];
	}

	dp[0][0]=a[0];
	dp[0][1]=b[0];
	dp[0][2]=c[0];

	rep1(i,n-1)
	{
		dp[i][0]=a[i]+max(dp[i-1][1],dp[i-1][2]);
		dp[i][1]=b[i]+max(dp[i-1][0],dp[i-1][2]);
		dp[i][2]=c[i]+max(dp[i-1][1],dp[i-1][0]);

	}

	cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]))<<endl;




	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}