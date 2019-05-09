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
	map <ll,ll> m;
	ll flag=0;
	std::vector <ll> in,d;
	rep(i,n)
	{
		cin>>a[i];
		m[a[i]]++;
		if(m[a[i]]>2)
		{
			flag=1;
		}
		if(m[a[i]]==2)
		{
			in.pb(a[i]);
			d.pb(a[i]);
		}
	}
	
	if(flag)
		{
			cout<<"NO"<<endl;return 0;}
	rep(i,n)
	{
		if(m[a[i]]==1)
			in.pb(a[i]);
	}
	sort(in.begin(), in.end());
	sort(d.begin(), d.end());
	cout<<"YES"<<endl;
	cout<<d.size()<<endl;
	rep(i,d.size())
	{
		cout<<d[i]<<" ";
	}
	lb;
	cout<<in.size()<<endl;
	for(int i=in.size()-1;i>=0;i--)
	{
		cout<<in[i]<<" ";
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}