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

ll togglebit(ll n) 
{ 
    if (n == 0) 
        return 1; 
  
    ll i = n; 
    n |= n >> 1; 
    n |= n >> 2; 
    n |= n >> 4; 
    n |= n >> 8; 
    n |= n >> 16; 
  
    return i ^ n; 
} 

ll XNOR(ll num1,ll num2) 
{ 
    if (num1 < num2) 
        swap(num1, num2);  
    num1 = togglebit(num1); 
      return num1 ^ num2; 
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
		ll x[5],e[5];
		ll a,b,n;
		cin>>a>>b>>n;
		n--;
		x[0]=e[0]=a;
		x[1]=e[1]=b;
		x[2]=a^b;
		e[2]=XNOR(a,b);

		rep(i,3)
		{
			//cout<<x[i]<<" "<<e[i]<<endl;
		}
		//lb;
		cout<<max(x[n%3],e[n%3])<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}