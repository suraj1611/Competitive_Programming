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
#define maxsize 100005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

std::vector< pair < pair <ll,ll> , ll > > v1,v2;
ll a[maxsize],b[maxsize];

bool comp1(pair < pair <ll,ll>,ll > a, pair < pair <ll,ll>,ll > b)
{
	return (a.F.F<=b.F.F);
}

bool comp2(pair < pair <ll,ll>,ll > a, pair < pair <ll,ll>,ll > b)
{
	return (a.F.S<=b.F.S);
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

	ll n;
	cin>>n;
	rep(i,n)
	{
		ll x,y;
		cin>>x>>y;
		v1.pb(mp(mp(x,y),i));
		v2.pb(mp(mp(y,x),i));
	}
	sort(v1.begin(), v1.end(), comp1);
	sort(v2.begin(), v2.end(), comp2);
	ll maxm=mn;
	rep(i,n)
	{
		ll p=v1[i].S;
		a[p]=abs(v1[i].F.F-v1[i].F.S);
	}
	rep(i,n)
	{
		ll p=v[i].S;
		b[p]=abs(v[i].F.S-v[i].F.S);
	}


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}