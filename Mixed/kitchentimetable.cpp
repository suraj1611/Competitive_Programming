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
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

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
		ll n;
		cin>>n;
		ll a[n],b[n],c[n];
		rep(i,n)
		{
			cin>>a[i];
		}
		rep(i,n)
		{
			cin>>b[i];
		}
		c[0]=a[0];
		for (ll i = 1; i < n ; ++i)
		{
			c[i]=a[i]-a[i-1];
		}
		ll cnt=0;
		rep(i,n)
		{
			//cout<<c[i]<< " "<<b[i]<<endl;
			if(c[i]>=b[i])
				cnt++;
		}
		cout<<cnt<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

