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

double ph = 1.6180339; 
  
ll f[6] = { 0, 1, 1, 2, 3, 5 }; 

ll power(ll x, ll  y) 
{ 
	ll m=md;
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

ll npower(ll n) 
{ 
   ll p = (ll)log2(n); 
   return (ll)pow(2, p);  
} 

ll fib (ll n) 
{ 
    if (n < 6) 
        return f[n]; 
  
    ll t = 5, fn = 5; 
  
    while (t < n) 
    { 
         fn = round(fn * ph); 
         t++; 
    } 
  
    return fn;    
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
	map <ll,ll> m;
	ll fibo[100];
	for(ll i=0;i<64;i++)
	{
		cout<<fib(pow(2,i)-1)<<" ";
	}
	while(t--)
	{
		ll n;
		cin>>n;
		ll x=npower(n);
		//cout<<x<<endl;
		//ll y=fib(x-1)%10;
		cout<<fibo[(ll)log2(x)]%10<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}