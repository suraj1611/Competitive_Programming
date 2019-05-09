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

	ll n,ans=0;
	cin>>n;
	ll v[2500]={0};
	ll u[2500]={0};
	set < pair  <ll,ll> > s;
	ll c=0;
	rep(i,n)
	{
		ll x,y;
		cin>>x>>y;
		s.insert(mp(x,y));
		u[y+x]++;
		if(x-y<0)
		v[1100+abs(x-y)+1]++;
		else
		v[x-y]++;
	}
	for (int i = 0; i < 2500; ++i)
	{
		ans+=u[i]*(u[i]-1)/2;	//nc2
	}
	for (int i = 0; i < 2500; ++i)
	{
		ans+=v[i]*(v[i]-1)/2;	//nc2
	}
	cout<<ans<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

