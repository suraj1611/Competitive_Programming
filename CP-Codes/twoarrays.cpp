/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
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
	ll a[n],b[n];
	ll csa[n],csb[n];
	rep(i,n)
	cin>>a[i];
	rep(i,n)
	cin>>b[i];
	for (int i = 1; i < n; i+=2)
	{
		swap(a[i],b[i]);
	}
	csa[0]=a[0];csb[0]=b[0];
	for (ll i = 1; i < n; ++i)
	{
		csa[i]=csa[i-1]+a[i];
	}	
	for (ll i = 1; i < n; ++i)
	{
		csb[i]=csb[i-1]+b[i];	
	}	
	while(q--)
	{
		ll p;
		cin>>p;
		ll x,y;
		cin>>x>>y;
		ll ans=0;
		if(p==1)
			{
				if(x==1)
					ans=csa[y-1];
				else if(x&1)
				{
					ans=csa[y-1]-csa[x-2];
				}
				else
					ans=csb[y-1]-csb[x-2];
			}
		else
			{
				if(x==1)
					ans=csb[y-1];
				else if(x&1)
				{
					ans=csb[y-1]-csb[x-2];
				}
				else
					ans=csa[y-1]-csa[x-2];
			}
		cout<<ans<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

