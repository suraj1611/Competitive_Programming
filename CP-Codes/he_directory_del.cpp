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

ll del[maxsize];
ll c=0;
std::vector <ll> v[maxsize];

void dfs(ll s)
{
	for(auto i  : v[s])
	{
		if(del[i]==1)
			c++;
		else
			dfs(i);

	}
}

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
	rep1(i,n)
	{
		ll x;
		cin>>x;
		if(i==1)
			continue;
		v[x].pb(i);
	}

	ll q,flag=0;
	cin>>q;
	while(q--)
	{
		ll x;
		cin>>x;
		if(x==1)
			flag=1;
		del[x]=1;
	}

	if(flag)
		cout<<1<<endl;
	else
		dfs(1),
		cout<<c<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}