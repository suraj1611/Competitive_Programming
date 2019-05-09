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
		ll n,m;
		cin>>n>>m;
		string a;
		std::vector< pair <ll,ll> > v;
		rep(i,n)
		{
			cin>>a;
			for (int j = 0; j < m; ++j)
			{
				if(a[j]=='1')
				{
					v.pb(mp(i,j));
				}
			}
		}

		/*rep(i,v.size())
		cout<<v[i].F<<" "<<v[i].S<<endl;*/
		map <ll,ll> mp;
		rep(i,v.size()-1)
		{
			for (int j = i+1; j < v.size(); ++j)
			{
				ll p=abs(v[i].F-v[j].F)+abs(v[i].S-v[j].S);
				mp[p]++;
			}
		}
		ll ans[1000]={0};
		for (int i = 1; i <= n+m-2 ; ++i)
		{

				ans[i]=mp[i];
		}
		rep(i,n+m-2)
		{
			cout<<ans[i+1]<< " ";
		}
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

