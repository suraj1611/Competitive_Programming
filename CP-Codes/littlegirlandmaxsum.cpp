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

	ll n,q;
	cin>>n>>q;
	ll a[n+5];
	rep1(i,n)
	cin>>a[i];
	ll b[n+5]={0};
	std::vector< pair <ll,ll> > v1;
	while(q--)
	{
		ll x,y;
		cin>>x>>y;
		v1.pb(mp(x,y));
		b[x]++;b[y+1]--;
	}
	rep1(i,n+1)
	{
		b[i]+=b[i-1];
	}
	std::vector< pair <ll,ll > > v;
	rep1(i,n)
	{
		v.pb(mp(b[i],i));
	}
	sort(v.begin(), v.end());
	sort(a+1,a+n+1);
	rep1(i,n)
	{
		b[v[i-1].S]=a[i];
	}
	ll sum=0;
	rep1(i,n+1)
	{
		b[i]+=b[i-1];
	}
	// rep(i,n+1)
	// cout<<b[i]<<endl;
	rep(i,v1.size())
	{
		ll p,q;
		p=v1[i].F;q=v1[i].S;
		sum+=b[q]-b[p-1];
	}
	cout<<sum<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

