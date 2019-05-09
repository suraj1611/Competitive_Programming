/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define md 1000000007
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
    return ans%m;
} 

ll solve(ll n)
{
	if(n==2)
		return 1;
	if(n==3)
		return 2;
	if(n%3==0)
	{
		return power(3,n/3)%md;
	}
	if(n%3==1)
	{
		return (2*2*power(3,n/3 - 1))%md;
	}
	if(n%3==3)
	{
		return (2*power(3,n/3))%md;
	}

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
		ll x,y;
		cin>>x>>y;
		cout<<(power(x,y))%10<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}