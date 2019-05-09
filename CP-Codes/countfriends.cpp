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

ll n,m,ar[maxsize],sz[maxsize]={0};

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

void init()
{
	rep1(i,n)
	{
		ar[i]=i;
		sz[i]=1;
		//cout<<ar[i]<< " "<<i<<endl;
	}
}

ll root(ll i)
{
	//cout<<ar[i]<< " "<<i<<endl;
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

bool find(ll a,ll b)
{
	if(ar[a]==ar[b])
		return true;
	else
		return false;
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
	rep(i,m)
	{
		ll x,y;
		cin>>x>>y;
		sunion(x,y);
	}
	rep1(i,n)
	cout<<sz[root(i)]-1<<" ";

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

