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

ll a[2002][2002];
ll calr[2002]={0},calc[2002]={0};

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
	rep(i,n)
	{
		rep(j,m)
		{
			cin>>a[i][j];
		}
	}
	ll maxc=0,maxr=0,maxrind=0,maxcin=0;
	rep(i,n)
	{
		ll t=0;
		rep(j,m)
		{
			if(!a[i][j])
				t++;
		}
		calr[i]=t;
	}
	rep(i,m)
	{
		ll t=0;
		rep(j,n)
		{
			if(!a[j][i])
				t++;
		}
		calc[i]=t;
	}
	ll ans=mx;
	rep(i,n)
	{
		ll temp=0;
		rep(j,m)
		{
			temp=calr[i]+calc[j];
			if(a[i][j]==0)
				temp--;
			ans=min(ans,temp);
		}
	}
	cout<<ans<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}