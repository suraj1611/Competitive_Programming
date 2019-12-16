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

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		rep(i,n)
		{
			cin>>a[i];
		}
		std::vector <ll> v1;
		std::vector <ll> v2;
		ll i;
		for (i = 0; i < n-1 ; ++i)
		{
			if(a[i]<=a[i+1])
				v1.pb(a[i]);
			else
			{
				v1.pb(a[i]);
				break;
			}
		}
		if(i!=n-1)
			i++;

		
		for (int j =i; j < n; ++j)
		{
			v2.pb(a[j]);
		}
		/*rep(i,v1.size())
		cout<<v1[i]<<endl;
		cout<<endl<<endl;
		rep(i,v2.size())
		cout<<v2[i]<<endl;*/

		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		ll minv1=v1[0];
		ll maxv1=v1[v1.size()-1];
		ll maxv2=v2[v2.size()-1];
		//cout<<minv1<< " "<<maxv2<<endl;
		if(minv1>=maxv2||maxv1<=maxv2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

