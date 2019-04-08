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
//#define lb cout<<endl;
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

	ll n;
	cin>>n;
	ll a[n];
	rep(i,n)
	{
		cin>>a[i];
	}

	std::vector<ll> v1,v2;

	rep(i,n)
	{
		rep(j,n)
		{
			rep(k,n)
			{
				v1.pb(a[i]*a[j] + a[k]);
			}
		}
	}

	rep(i,n)
	{
		rep(j,n)
		{
			rep(k,n)
			{
				if (a[k]==0)
				{
					continue;
				}
				v2.pb((a[i]+a[j])*a[k]);
			}
		}
	}

	ll sz=v1.size(), count=0;
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	rep(i,v2.size())
	{
		ll ub=upper_bound(v1.begin(), v1.end() , v2[i]) - v1.begin();
		ll lb=lower_bound(v1.begin(), v1.end() , v2[i]) - v1.begin();
		count+=ub-lb;
	}
	cout<<count<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}