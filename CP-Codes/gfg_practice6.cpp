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
		ll n,m;
		cin>>n>>m;
		ll w[n+1],v[n+1];
		rep1(i,n)
		cin>>v[i];
		rep1(i,n)
		cin>>w[i];
		ll t[n+1][m+1];
		rep(i,n+1)
		t[i][0]=0;
		rep(i,m+1)
		t[0][i]=0;
		rep1(i,n)
		{
			rep1(j,m)
			{
				
				{
					if(j<w[i])
						t[i][j] = t[i-1][j];
					else
						t[i][j] = max(v[i] + t[i-1][j-w[i]],t[i-1][j]);
				}

			}
		}
		cout<<t[n][m]<<endl;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}