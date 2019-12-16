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
#define pf printf
#define sc scanf
#define maxsize 1100005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
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
		ll k,n;
		cin>>k>>n;
		std::vector< pair <ll,ll> > v;

		rep(i,n)
		{
			ll x,y;
			cin>>x>>y;
			v.pb(mp(x,y));
		}

		ll t[n+1][k+1];
		memset(t,0,sizeof(t));

		/*rep(i,k+1)
		{
			if(i<v[0].F)
				t[0][i]=0;
			else
				t[0][i]=v[0].S;
 		}*/
		
		rep1(i,n)
		{
			rep1(j,k)
			{
				if(j<v[i].F)
				{
					t[i][j]=t[i-1][j];
				}
				else
				{
					t[i][j]=max(t[i-1][j],v[i].S + t[i-1][j-v[i].F]);
				}
			}
		}

		cout<<"Hey stupid robber, you can get "<< t[n][k] << "."<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

