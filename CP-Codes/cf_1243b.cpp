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

	ll tt;
	cin>>tt;
	while(tt--)
	{
		ll n;
		cin>>n;
		string s,t;
		cin>>s>>t;
		vector<ll> v;
		rep(i,n)
		{
			if(s[i]!=t[i])
				{
					v.pb(i);
				}
		}
		if(v.size()>2 or v.size()==1)
			cout<<"No"<<endl;
		else if(v.size()==0)
			cout<<"Yes"<<endl;
		else if(v.size()==2)
		{
		//	cout<<v[0]<<" "<<v[1]<<endl;
			if(s[v[0]]==s[v[1]] and t[v[0]]==t[v[1]])
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}