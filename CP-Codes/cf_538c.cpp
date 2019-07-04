/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long
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

ll d[maxsize],h[maxsize];

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

	ll n,m;
	cin>>n>>m;
	//std::vector< pair <ll,ll > > v;
	rep1(i,m)
	{
		cin>>d[i]>>h[i];
	}
	ll ans=0;
	rep1(i,m-1)
	{
		if(abs(h[i]-h[i+1])>abs(d[i]-d[i+1]))
		{
			cout<<"IMPOSSIBLE"<<endl;
			return 0;
		}
	}
	ans = max(h[1]+abs(d[1]-1) , h[m] + abs(n-d[m]) );
	rep1(i,m-1)
	{
		ll temp = d[i+1]-d[i]-abs(h[i]-h[i+1]);
		ll maxh = max(h[i],h[i+1]);
		ans = max(ans,temp/2+maxh);
	}
	cout<<ans<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}