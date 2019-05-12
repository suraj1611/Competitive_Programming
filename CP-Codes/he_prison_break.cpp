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

ll x[4]={1,-1,0,0};
ll y[4]={0,0,1,-1};
ll cnt=0,n;
ll a[100][100],vis[100][100];

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

void solve(ll i, ll j)
{
	if(i==n-1 && j==n-1)
		{cnt++;return;}

	vis[i][j]=1;

	rep(k,4)
	{
		ll dx=i+x[k], dy=j+y[k];
		if(dx<0 || dx>=n || dy<0 || dy>=n || a[dx][dy]==1 || vis[dx][dy]==1)
		continue;
		solve(dx,dy);
		vis[dx][dy]=0;
	}				

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

		memset(vis,0,sizeof(vis));
		cin>>n;
		rep(i,n)
		{
			rep(j,n)
			{
				cin>>a[i][j];
			}
		}
		solve(0,0);
		cout<<cnt<<endl;
		cnt=0;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}