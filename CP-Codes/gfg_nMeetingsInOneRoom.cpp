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

bool comp( pair <ll,ll> a, pair <ll,ll> b)
{
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
		ll n;
		cin>>n;
		ll a[n],b[n];
		rep(i,n)
		cin>>a[i];
		rep(i,n)
		cin>>b[i];
		std::vector< pair <ll,ll> > v;
		map < pair <ll,ll> , ll > m;
		rep(i,n)
		{
			v.pb(mp(a[i],b[i]));
			m[mp(a[i],b[i])]=i+1;
		}
		sort(v.begin(), v.end() , comp);
		cout<<m[mp(v[0].F,v[0].S)]<<" ";

		ll cur=v[0].S;

		rep1(i,n-1)
		{
			if(v[i].F>=cur)
			{
				cout<<m[mp(v[i].F,v[i].S)]<<" ";
				cur=v[i].S;
			}
		}
		lb;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}