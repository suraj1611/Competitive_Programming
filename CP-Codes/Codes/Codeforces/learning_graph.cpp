/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
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

vector < pair < ll,ll > > v[10005];

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

	ll n,m,k;
	cin>>n>>m>>k;
	ll val[n+1];
	rep(i,n)
	{
		cin>>val[i+1];
	}
	rep(i,m)
	{
		ll x,y;
		cin>>x>>y;
		v[x].pb(mp(val[y],y));
		v[y].pb(mp(val[x],x));
	}
	rep(i,n)
	sort(v[i+1].begin(), v[i+1].end());
	
	rep(i,n)
	{
		if(v[i+1].size()>=k)
			cout<<v[i+1][v[i+1].size()-k].S<<endl;
		else
			cout<<"-1"<<endl;
	}
	return 0;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

