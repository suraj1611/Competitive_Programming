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

ll a[maxsize],n;

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

ll check(ll mid)
{
	ll ans=0;
	rep(i,n+1)
	{
		ans = max(ans,a[mid+i]-a[i]);
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

	ll k,q;
	cin>>n>>q;
	a[0]=0;
	rep1(i,n)
	{
		cin>>a[i];
		a[i] =(__builtin_popcount(a[i]))+a[i-1];
	}
	while(q--)
	{
		cin>>k;
		ll l=1,h=n,mid,ans=-1;
		while(l<=h)
		{
			mid=(l+h)/2;
			if(check(mid)>=k)
			{
				ans=mid;
				h=mid-1;
			}
			else
			l=mid+1;
		}
		cout<<ans<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}