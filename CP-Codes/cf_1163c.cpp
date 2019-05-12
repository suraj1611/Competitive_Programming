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
#define maxsize 1100005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll power(ll x, ll  y) 
{ 
	ll m=md;
   	ll ans=1;
    while (y > 0) 
    {
        if (y & 1)
            ans = (ans * x) % m;
        x = (x * x) % m;
        y >>= 1;
    }
    return ans;
} 

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;
	ll a[n];
	unordered_set <ll> s;
	unordered_map <ll,ll> m1,m;
	rep(i,n)
	{
		cin>>a[i];
		s.insert(a[i]);
		m[a[i]]++;
	}
	ll a,b,c;
	if(s.size()==1)
	{
		cout<<n<<endl;
	}
	else if(s.size()==2)
	{
		ll x[2],c=0;
		for(auto i: s)
		{
			x[c++]=i;
		}
		a=x[0];b=x[1];
	}
	else if(s.size()==3)
	{
		ll x[3],c=0;
		for(auto i: s)
		{
			x[c++]=i;
		}
		a=x[0];b=x[1],c=x[2];
	}
	rep(i,n)
	{
		m1[a[i]]++;
		ll p=m1[a[i]];
		if(m1[p]==a||m1[p]==b||m1[p]==c)
			
	}


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}