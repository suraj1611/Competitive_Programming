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

bool comp( pair <ll,ll> a , pair <ll,ll> b)
{
	if(a.S==b.S)
		return (a.F<b.F);
	else
	return (a.S<b.S);
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
		ll n,m;
		cin>>n;
		m=n;
		vector < pair <ll,ll> > v;
		while(m--)
		{
			ll x,y;
			cin>>x>>y;
			v.pb(mp(x,y));
		}
		sort(v.begin(), v.end(), comp);
		/*rep(i,n)
		cout<<v[i].F <<" "<<v[i].S<<endl;
		lb;*/
		ll cur=-1,ans=0;
		rep(i,n)
		{
			if(v[i].F>=cur)
			{
				ans++;
				cur=v[i].S;
			}
		}
		cout<<ans<<endl;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}