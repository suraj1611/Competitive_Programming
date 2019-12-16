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
		ll n;cin>>n;
		vector <string> v,ans;
		map <string , ll> m;
		set <string> st;
		string s,str;
		rep(i,n)
		{
			cin>>s;
			v.pb(s);
			st.insert(s);
			m[s]++;
		}
		ll c=0;
		rep(i,n)
		{
			if(m[v[i]]==1)
				ans.pb(v[i]);
			else
			{
				c++;
				m[v[i]]--;
				rep(j,10)
				{
					str=v[i];
					str[0] = (j+'0');
					if(st.count(str)==0)
					{
						ans.pb(str);
						st.insert(str);
						break;
					}
				}
			}
		}
		cout<<c<<endl;
		rep(i,n)
		{
			cout<<ans[i]<<endl;
		}

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}