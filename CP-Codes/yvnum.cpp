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

ll power(ll x,ll y) 
{ 
    int res = 1;    
  
    x = x % md; 
  
    while (y > 0) 
    { 
       
        if (y & 1) 
            res = (res*x) % md; 
  
        y = y>>1;
        x = (x*x) % md;   
    } 
    return res; 
} 

ll conv(string s)
{
	ll res=0;
	for (ll i = 0; i < s.length(); ++i)
	{
		res=((res*10)%md + ((ll)(s[i]-'0'))%md)%md;
	}
	return res;
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
		string s;
		cin>>s;
		ll l=s.length();
		ll n=conv(s);
		ll ans=0;
		rep(i,l)
		{
			ans=(((ans%md)*(power(10,l))%md)+n%md)%md;
			n=(n%md-((ll)(s[i]-'0')*power(10,l-1))%md)%md;
			n=(n<0)? (n+md):n;
			n=(n*10+(ll)(s[i]-'0'))%md;
		}
		cout<<ans<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

