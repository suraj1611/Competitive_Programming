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

bool vis[1001][1001];
ll a[1001][1001];
ll n,m,c=0,maxm=-1;

bool check(ll i,ll j)
{
	if(i>=0 and j>=0 and i<n and j<m and vis[i][j]==0 and a[i][j]!=0)
		return 1;
	else
		return 0;
}

void sol(ll i,ll j)
{
	vis[i][j]=1;
	if(a[i][j]==1) 
		c++;
	if(check(i+1,j))
		sol(i+1,j);
	if(check(i,j+1))
		sol(i,j+1);
	if(check(i,j-1))
		sol(i,j-1);
	if(check(i-1,j))
		sol(i-1,j);

}

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

	    memset(vis,0,sizeof(vis));
		cin>>n>>m;
		rep(i,n)
		{
			rep(j,m)
			cin>>a[i][j];
		}
		ll ans=0;
	
		rep(i,n)
		{
			rep(j,m)
			{
				if(vis[i][j]==0 and a[i][j]!=0)
				{
					c=0;
					sol(i,j);
					ans=max(ans,c);
				}
			}
		}
		cout<<ans<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}