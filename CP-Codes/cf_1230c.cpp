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

ll a[10][10];

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
		a[x][y]++;
		a[y][x]++;
	}
	if(n<7)
	{
		cout<<m<<endl;
		return 0;
	}
	else
	{
		ll ans=100;
		for(ll i=1;i<7;i++)
		{
			for(ll j=i+1;j<=7;j++)
			{
				ll c=0;
				for(ll k=1;k<=7;k++)
				{
					if(a[i][k] and a[j][k])
						c++;
				}
				ans=min(ans,c);		
			}
		}
		cout<<m-ans<<endl;
	}


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}