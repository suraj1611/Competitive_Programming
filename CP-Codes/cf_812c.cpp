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

	ll n,s;
	cin>>n>>s;
	ll a[n+1],b[n+1];
	rep1(i,n)
	{
		cin>>a[i];
	}
	ll l=0,h=n+1,mid,cur=0,ans=0;
	while(l<=h)
	{
		mid = (l+h)/2;
		rep1(i,n)
		{
			b[i]=a[i] + i*mid;
		}
		sort(b+1,b+n+1);
		for(ll i=2;i<=n;i++)
		{
			b[i]=b[i-1]+b[i];
		}
		if(b[mid]<=s)
		{
			l=mid+1;
			cur=mid;
			ans=b[mid];
		}
		else
			h=mid-1;
	}
	cout<<cur<<" "<<ans<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}