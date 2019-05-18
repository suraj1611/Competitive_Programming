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

bool isprime(ll n)
{
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
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
	if(isprime(n))
	{
		cout<<1<<endl;
		cout<<n<<endl;
	}
	else if(isprime(n-2))
	{
		cout<<2<<endl;
		cout<<2<<" "<<n-2<<endl;
	}
	else
	{
		cout<<3<<endl;
		ll p=n-3;
		for (ll i = 2; i <= p; ++i)
		{
			if(isprime(i)&&isprime(p-i))
			{
				cout<<3<<" "<<i<<" "<<p-i<<endl;
				break;
			}
		}
		
	}


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
