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
	ll test=t;
	while(t--)
	{
		ll n,q;
		cin>>n>>q;
		string s;
		cin>>s;
		s="#"+s;
		ll a[26][n+1];
		memset(a,0,sizeof(a));
		rep1(i,n)
		{
			a[s[i]-'A'][i]++;
		}
		rep(i,26)
		{
			rep1(j,n)
			{
				a[i][j]+=a[i][j-1];
			}
		}
		ll o=0,e=0,cnt=0;
		ll q1=q;
		while(q1--)
		{
			e=0,o=0;
			ll x,y;
			cin>>x>>y;
			rep(i,26)
			{
				ll p = a[i][y]-a[i][x-1];
				//cout<<p<<endl;
				if((p&1)==0)
					e++;
				else
					o++;
			}
			if(o>1)
				{
					//cout<<x<<" "<<y<<endl;
					cnt++;
				}
		}
        cout<<"Case #"<<test-t<<": "<<q-cnt<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}