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

	ll l,r,n;
	cin>>n>>l>>r;
	ll a,b,c;
	a=r/3-l/3;
	if(l%3==0)
		a++;
	ll p=r-l+1-a;
	if(p%2==0)
		b=c=p/2;
	else
	{
		if(l%3==1)
			b=p-p/2,c=p/2;
		else
			c=p-p/2,b=p/2;
	}
	
	dp[0][0]=a;dp[0][1]=b;dp[0][2]=c;

	rep1(i,n-1)
	{
		dp[i][0]=((dp[i-1][0]*a)%md+(dp[i-1][1]*c)%md+(dp[i-1][2]*b)%md)%md;
		dp[i][1]=((dp[i-1][0]*b)%md+(dp[i-1][1]*a)%md+(dp[i-1][2]*c)%md)%md;
		dp[i][2]=((dp[i-1][0]*c)%md+(dp[i-1][1]*b)%md+(dp[i-1][2]*a)%md)%md;
	}
	cout<<dp[n-1][0]<<endl;



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

