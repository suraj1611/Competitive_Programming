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

ll dp[maxsize];

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

	string s;
	cin>>s;
	while(1)
	{
		if(s[0]=='0')
			return 0;
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		ll n=s.size();
		rep1(i,n-1)
		{
			ll num=(((s[i-1]-'0')*10) + (s[i]-'0'));
			// cout<<num<<endl;

			if(s[i]-'0')
				dp[i]=dp[i-1];

			//if((s[i-1]-'0')>0&&(s[i-1]-'0')<=2&&(s[i]-'0')<7)
			if(num>9&&num<27)
			{
				if(i==1)
				dp[i]++;
				else
				dp[i]+=dp[i-2];
			}
		}
		cout<<dp[n-1]<<endl;
		cin>>s;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

