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
            ans = (ans * x) ;
        x = (x * x);
        y >>= 1;
    }
    return ans;
} 

ll nearestpow(ll n, ll x)
{
	ll i;
	for(i=0;i<64;i++)
	{
		if(pow(x,i)>n)
			break;
	}
	return --i;

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
	ll a,b;
	cin>>a>>b;
	std::vector <ll> v;
	map <ll,ll> m;
	while(a>=0)
	{
		ll p=nearestpow(a,b);
		//cout<<p<<endl;
		m[p]++;
		if(m[p]>1)
			break;
		a-=power(b,p);
		v.pb(p);
	}
	sort(v.begin(), v.end());
	if(a!=0)
		cout<<"NO"<<endl;
	else
	{
		cout<<"YES"<<" "<<v.size()<<endl;
		rep(i,v.size())
		cout<<v[i]<<" ";
		lb;
	}
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}