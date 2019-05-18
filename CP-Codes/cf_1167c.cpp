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
#define maxsize 500005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll ar[maxsize],sz[maxsize],n,m;

void init()
{
	rep1(i,n)
	{
		ar[i]=i;
		sz[i] = 1;
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


	cin>>n>>m;
	init();
	rep1(i,m)
	{
		ll x,y,z;
		cin>>x;
		if(x>0)
		cin>>y;
		else
		continue;
		x=x-1;
		rep(j,x)
		{
			cin>>z;
			if(!find(y,z))
			sunion(y,z);
		}
	}
	rep1(i,n)
	{
		cout<<sz[root(i)]<<" ";
	}
	cout<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}