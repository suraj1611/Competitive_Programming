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

	ll n,m,k;
	cin>>n>>m>>k;
	ll a[n+1][m+1];
	rep1(i,n)
	{
		rep1(j,m)
		{
			cin>>a[i][j];
		}
	}

	ll row[n+1];
	ll col[m+1];
	rep1(i,n)
	row[i]=i;
	rep1(i,m)
	col[i]=i;

	while(k--)
	{
		char c;
		ll x,y;
		cin>>c>>x>>y;
		if(c=='c')
		{
			swap(col[x],col[y]);
		}
		else if(c=='r')
		{
			swap(row[x],row[y]);
		}
		else
		{
			cout<<a[row[x]][col[y]]<<endl;
		}
	}


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}