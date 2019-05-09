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

ll n;
std::vector<ll> a;

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

ll bs(ll x)
{
	ll l,h,mid;
	l=0;h=n;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]<x)
			l=mid+1;
		if(a[mid]>x)
			h=mid-1;
		if(a[mid]==x)
			return mid+1;
	}
	if(a[mid]>x)
	return mid;
	else
	return mid+1;
}


int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif


	cin>>n;

	rep(i,n)
	{ll y;
		cin>>y;
		a.pb(y);
	}
	sort(a.begin(), a.end());
	ll q;cin>>q;
	while(q--)
	{
		ll x;
		cin>>x;
		cout<<upper_bound(a.begin(), a.end(),x)-a.begin()<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

