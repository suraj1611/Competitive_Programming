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
#define maxsize 1000005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll a[maxsize]={0};

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

	ll n,m;
	cin>>n>>m;
	rep(i,m)
	{
		ll x,y;
		cin>>x>>y;
		a[x]++;
		a[y+1]--;
	}
	rep1(i,n)
	{
		a[i]+=a[i-1];
	}
	map <ll,ll> mp;
	rep(i,n)
	{
		mp[a[i]]++;
	}
/*	rep(i,10)
	cout<<a[i]<<" ";*/
	for(int i=maxsize-1;i>=1;i--)
	{
		mp[i]+=mp[i+1];
	}
	ll q;
	cin>>q;
	while(q--)
	{
		ll x;
		cin>>x;
		cout<<mp[x]<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}