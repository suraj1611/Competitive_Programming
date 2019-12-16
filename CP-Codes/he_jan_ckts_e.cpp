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

	ll n,k;
	cin>>n>>k;
	ll a[n],b[n],c[n];
	rep(i,n)
	cin>>a[i];
	rep(i,n)
	cin>>b[i];
	rep(i,n)
	cin>>c[i];
	ll ans=0,sum1=0,sum2=0,sum3=0;
	rep(i,k)
	{
		sum1=0,sum2=0,sum3=0;
		rep(j,n)
		{
			sum1+=(a[j]+i)%k;
		}
		rep(j,n)
		{
			sum2+=(b[j]+i)%k;
		}
		rep(j,n)
		{
			sum3+=(c[j]+i)%k;
		}
		ans=max({ans,sum1,sum2,sum3});
		cout<<i<<" "<<ans<<endl;
	}
	cout<<ans<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}