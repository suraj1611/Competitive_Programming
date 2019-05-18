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

ll fact(ll n)
{
	ll c=0;
	for(ll i=1;(i*i)<=n;i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				c++;
			}
			else
			c+=2;
		}
	}
	return c-2;
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
		ll a[n];
		rep(i,n)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		/*rep(i,n)
		cout<<a[i]<<" ";
		lb;*/
		ll c,flag=1;
		ll p=a[0]*a[n-1];
		if(n%2==0)
			c=(n/2)-1;
		else
			c=n/2;

		for(int i=1;i<=c;i++)
		{
			if(p!=(a[i]*a[n-i-1]))
			{
				flag=0;
				break;
			}
		}

		ll temp=fact(p);
		//cout<<temp<<endl<<flag<<endl;
		//cout<<flag<< " "<<t<<" " <<n<<endl;
		if(flag && (temp==n))
			cout<<p<<endl;
		else
			cout<<-1<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}