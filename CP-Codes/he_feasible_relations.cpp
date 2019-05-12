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

ll ar[maxsize],n,sz[maxsize];

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

void init()
{
	rep1(i,maxsize)
	{
		ar[i]=i;
		sz[i] = i;
		//cout<<"ar"<<i<<"= "<<ar[i]<<" ";
	}
}

ll root(ll i)
{
	while(ar[i]!=i)
	{
		i=ar[i];
	}
	return i;
}


void sunion(ll a,ll b)
{
	ll ra,rb;
	ra=root(a);rb=root(b);
	if(ra==rb)
		return;
	if(sz[ra]<sz[rb])
	{
		ar[ra]=ar[rb];
		sz[rb]+=sz[ra];
	}
	else
	{
		ar[rb]=ar[ra];
		sz[ra]+=sz[rb];
	}
}


ll find(ll a,ll b)
{
	if(root(a)==root(b))
		return 1;
	else
		return 0;
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
	init();
	while(t--)
	{
		init();
		ll k;
		cin>>n>>k;
		ll flag=0;
		std::vector< pair <ll,ll > > v;
		rep(i,k)
		{
			ll x,y;
			string op;
			cin>>x>>op>>y;
			if(op=="=")
				sunion(x,y);
			else
			{
				//cout<<root(x)<<" "<<root(y)<<endl;
				/*if(find(x,y))
					flag=1;*/
				v.pb(mp(x,y));
			}
		}
		rep(i,v.size())
		{
			if(find(v[i].F,v[i].S))
				{
					flag=1;
					break;
				}
		}
		if(flag)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}