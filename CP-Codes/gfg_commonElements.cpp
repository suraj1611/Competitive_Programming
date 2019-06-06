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
		ll a,b,c;
		cin>>a>>b>>c;
		unordered_map <ll,ll> m1,m2,m3;
		ll x;
		rep(i,a)
		{
			cin>>x;
			m1[x]++;
		}
		rep(i,b)
		{
			cin>>x;
			m2[x]++;
		}
		std::vector <ll> v;
		rep(i,c)
		{
			cin>>x;
			m3[x]++;
			if(m1[x]>=1 && m2[x]>=1 && m3[x]>=1)
				v.pb(x),m1[x]=0;
		}
		if(v.size()==0)
			cout<<-1<<endl;
		else
		{
			rep(i,v.size())
			cout<<v[i]<<" ";
			lb;
		}
		//cout<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}