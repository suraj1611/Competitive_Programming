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

ll a[500];

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

ll hp2(ll n) 
{ 
   ll p = (ll)log2(n); 
   return (ll)pow(2, p);  
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,q;
	cin>>n>>q;
	a[0]=1;
	rep1(i,1005)
	a[i]=1;
	rep(i,n-1)
	{
		ll x,y;char c;
		cin>>x>>y>>c;
		if(c=='L')
		{
			//a[a[x]*2] = y;
			a[y]=a[x]*2;
		}
		else
		{
			//a[a[x]*2 +1] = y;
			a[y]=a[x]*2+1;
		}
	}
	rep1(i,15)
	{
		cout<<i<<" "<<a[i]<<endl;
	}
	while(q--)
	{
		ll x,y;
		cin>>x;
		y=hp2(x);
		ll p=log2(y);
		//cout<<x<<" "<<y<<endl;
		if(x==1)
			cout<<1<<endl;
		else
		{
			if(a[abs(y-x)]!=1)
				cout<<a[abs(y-x)]<<endl;
			else
				cout<<-1<<endl;
		}

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}