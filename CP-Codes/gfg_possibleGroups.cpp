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

ll nc3(ll n)
{
	if(n>=3)
	return (n*(n-1)*(n-2))/6;
	else
	return 0;
} 

ll nc2(ll n)
{
	if(n>=2)
		return (n*(n-1))/2;
	else
		return 0;
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
		ll ar[n];
		ll a=0,b=0,c=0;
		rep(i,n)
		{
			cin>>ar[i];
			if(ar[i]%3==0)
				a++;
			else if(ar[i]%3==1)
				b++;
			else
				c++;
		}
		//cout<<a<<" "<<b<<" "<<c<<endl;
		cout<<nc2(a) + b*c + nc3(a) + a*b*c + nc3(b) + nc3(c)<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}