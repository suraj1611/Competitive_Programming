/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
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
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll sumd(ll n)
{
	ll s=0;
	while(n!=0)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}

ll nodig(ll n)
{
	ll c=0;
	while(n!=0)
	{
		c++;
		n/=10;
	}
	return c;
}

ll power(ll x, ll y) 
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
	ll a,b,p;
	if(n<10)
	{
		cout<<n<<endl;
		return 0;
	}
	else
	{                   
		ll q=nodig(n);	
		ll pq=((ll)power(10,q-1));
		p=n%pq;
		n-=p;
		//cout<<p<<n<<endl;
		a=p+1;
		b=n-1;

	} 
	cout<<sumd(a)+sumd(b)<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
