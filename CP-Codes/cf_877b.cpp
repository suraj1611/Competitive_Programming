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

ll dp[maxsize][3];
string s;
ll l;


ll solve(ll i,ll cur)
{
	ll ans=mx;
	if(i>=l)
		return 0;
	if(dp[i][cur]!=-1)
		return dp[i][cur];

	if(cur==0)
	{
		ans=min(solve(i+1,0),min(solve(i+1,1),solve(i+1,2)));
		if(s[i]=='b')
			ans++;
	}
	else if(cur==1)
	{
		ans=min(solve(i+1,1),solve(i+1,2));
		if(s[i]=='a')
			ans++;
	}
	else
	{
		ans=solve(i+1,2);
		if(s[i]=='b')
			ans++;
	}

	return dp[i][cur]=ans;


}

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

	cin>>s;
	memset(dp,-1,sizeof(dp));
	l=s.size();
	cout<<l-min(solve(0,0),min(solve(0,1),solve(0,2)))<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}