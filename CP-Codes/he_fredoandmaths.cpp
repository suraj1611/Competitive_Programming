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
#define endl "\n"
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);



ll power(ll x, ll  y, ll m) 
{ 
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

ll etf(ll n)
{
	float ans=n;
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				n/=i;
			}
			ans*=(1.0 - (1.0/i));
		}
	}

	if(n>1)
		ans*=(1.0 - (1.0/n));

	return (ll)ans;
}

ll solve(ll x,ll k,ll m)
{
	if(k==1)
		return 1;
	if(m==1)
		return 0;
	else
		return power(x,solve(x,k-1,etf(m)),m);
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
		ll x,k,m;
		cin>>x>>k>>m;
		ll ans;
		if(k==0)
			ans=1;
		else if(m==1)
			ans=0;
		else
		{
		/*ll p=power(x,k-1,etf(m));
		cout<<power(x,k-1,etf(m))<<endl;*/
		ans=solve(x,k,m);
		}
		cout<<ans<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}