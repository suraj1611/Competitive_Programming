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
#define endl "\n"
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

//ll a[maxsize],sz[maxsize];
ll ar[maxsize],n,sz[maxsize],k;

ll power(ll x, ll  y) 
{ 
	ll m=1;
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
	rep1(i,n)
	{
		ar[i]=i;
		sz[i] = i;
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

	cin>>n>>k;
	init();
	rep(i,k)
	{
		ll x,y;
		cin>>x>>y;
		sunion(x,y);
	}
	set <ll> s;
	rep1(i,n)
	{
		s.insert(root(i));
	}

	cout<<s.size()<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}