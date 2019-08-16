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
   	ll ans=1;
    while (y > 0) 
    {
        if (y & 1)
            ans = (ans * x);
        x = (x * x);
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

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll x = power(2,n);
		ll a[x];
		rep(i,x)
		cin>>a[i];
		sort(a,a+n);
		set <ll> s;
		rep(i,x)
		{
			s.insert(a[i]);
		}
		ll flag=0;
		for(auto i : s)
		{
			if(i==0 and flag==0)
			{
				
				flag=1;
			}
			else if(i==0 and flag==1)
			{
				cout<<0<<" ";
				continue;
			}
			else
			cout<<i<<" ";
		}
		lb;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}