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

std::vector <ll> v[maxsize];
ll flag[maxsize];

bool dfsCycle(ll s)
{
	flag[s]=0;
	for(auto i : v[s])
	{
		if(flag[i]==0)
			return 1;

		if(flag[i]==-1 and dfsCycle(i))
			return 1;
	}

	flag[s]=1;

	return 0;
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

	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		rep(i,m)
		{
			ll x,y;
			cin>>x>>y;
			v[x].pb(y);
		}

		rep(i,n+1)
		flag[i]=-1;

		ll ans=0;

		rep1(i,n)
		{
			if(flag[i]==-1 and dfsCycle(i))
			{
				ans=1;
				break;
			}
		}

		if(ans)
			cout<<"Cyclic"<<endl;
		else
			cout<<"Non-Cyclic"<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}