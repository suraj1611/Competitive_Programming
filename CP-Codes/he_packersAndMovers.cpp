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

	ll n,p;
	cin>>n>>p;
	ll a[p],h=0;
	rep(i,p)
	{
		cin>>a[i];
		h+=a[i];
	}
	ll l=1,ts=0,mid=0,ans=mx,c=0,sum=0;
	ll i,t;
	ts=h;

	while(l<=h)
	{
		i=0;t=0;c=0;
		mid=(l+h)/2;
		while(c<n)
		{
			sum=0;
			while(sum+a[i]<=mid)
			{
				sum+=a[i];
				t+=a[i];
				i++;
				if(i==p)
					break;
			}
			if(i==p)
				break;
			c++;
		}
		if(t==ts)
		{
			if(mid<ans)
				ans=mid;
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	cout<<ans<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}