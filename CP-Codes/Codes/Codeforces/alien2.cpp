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

	ll n,k;
	cin>>n>>k;

	ll a[n+5],b[n+5],a1[n+5],b1[n+5];

	rep(i,n)
	{
		cin>>a[i];
	}
	rep(i,n)
	{
		cin>>b[i];
	}

	ll c,ans=0;

	a1[0]=a[0],b1[0]=b[0];

	rep1(i,n-1)
	{
		a1[i]=min(a1[i-1]+a[i],b1[i-1]+a[i]+b[i]);
		b1[i]=min(b1[i-1]+b[i],a1[i-1]+a[i]+b[i]);

		if(a1[i]>k&&b1[i]>k)
		{
			c=i;
			ans=min(a1[i-1],b1[i-1]);
			break;
		}

		c=i+1;
		ans=min(a1[i],b1[i]);
	}

	cout<<c<<" "<<ans<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

