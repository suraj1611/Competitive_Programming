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
#define mpp make_pair
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

	ll n,k;
	cin>>n>>k;
	ll a[n];
	set <ll> s;
	map <ll,ll> m,mp;
	vector< pair <ll,ll> > v;
	rep(i,n)
	{
		cin>>a[i];
		m[a[i]]++;
		s.insert(a[i]);
	}

	set <ll> :: iterator it;
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" "<<m[*it]<<endl;

		v.push_back( make_pair(m[*it],*it) );
		mp[m[*it]]++;
		cout<<mp[m[*it]]<<endl;
	}
	
	sort(v.begin(), v.end());
	
	for (int i = v.size()-1; i >=0 ; i--)
	{
		if(mp[v[i].F]>=k)
		{
			while(k--)
			{
				cout<<v[i--].S<<" ";
			}
			break;
		}
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

