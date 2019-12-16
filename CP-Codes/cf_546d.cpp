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
#define maxsize 5000005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll prime[maxsize]={0},dp[maxsize],sum[maxsize];
ll N=5000002;

void pfact()
{
	for(ll i=2;i<N;i++)
	{
		if(!prime[i])
		{
			for(ll j=i;j<N;j+=i)
			{
				if(prime[j]==0)
				prime[j]=i;
			}
		}
	}

	dp[0]=0;dp[1]=0;
	for(ll i=2;i<N;i++)
		dp[i]=dp[i/prime[i]]+1;
	sum[0]=0;
	for(ll i=1;i<N;i++)
	{
		sum[i]=sum[i-1]+dp[i];
	}
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
	pfact();
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		cout<<sum[a]-sum[b]<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}