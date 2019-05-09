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
		ll n,k;
		cin>>n>>k;
		ll a[n],s=0;
		rep(i,n)
		{
			cin>>a[i];
			s+=a[i];
		}
		ll a1=0,b1=0,a2=0,b2=0;
		sort(a,a+n);
		rep(i,k)
		a1+=a[i];
		b1=s-a1;
		for (ll i = n-1; i >= n-k; i--)
		{
			a2+=a[i];
		}
		b2=s-a2;
		cout<<max((abs(a1-b1)),abs(a2-b2))<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

