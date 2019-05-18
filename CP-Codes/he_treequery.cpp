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

std::vector <ll> v[maxsize],v1[maxsize];

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
	
	map <ll,ll> mapp;
	rep(i,m)
	{
		ll x,y;
		cin>>x>>y;
		v[x].pb(y);
		v1[y].pb(x);
		mapp[x]++;
		mapp[y]++;
	}
	ll c1=0,c2=0,c3=0;
	rep1(i,n)
	{
		/*cout<<v[i].size()<<" "<<v1[i].size()<<endl;
		if(mapp[i]==0)
			c3++;*/
		if(v[i].size()==0)
			c1++;
		if(v1[i].size()==0)
			c2++;
	}

	cout<<max(c1,c2)+c3<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}