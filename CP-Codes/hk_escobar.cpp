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
#define maxsize 1000000000
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

unordered_map <ll,ll> m;

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

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	//memset(a,0,sizeof(a));
	ll maxm=0;
	rep(i,n)
	{
		ll x,y;
		cin>>x>>y;
		m[x]++;
		m[y+1]--;
		maxm=max(maxm,y);
	}
	rep1(i,100000)
	{
		m[i]=m[i]+m[i-1];
	}
	for(ll i=100001;i<=maxm;i++)
	{
		m[i]=m[i]+m[i-1];
	}
	ll q;
	cin>>q;
	while(q--)
	{
		ll p;
		cin>>p;
		if(p>maxm)
			cout<<0<<endl;
		else
		cout<<m[p]<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}