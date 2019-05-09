/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
//#define mx INT_MAX
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

ll nc2(ll n)
{
	return n*(n-1)/2;
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	map <ll,ll> mx,my;
	map < pair <ll,ll>, ll > mpair;
	set <ll> sx,sy;
	set < pair <ll,ll> > spair;
	rep(i,n)
	{
		ll x,y;
		cin>>x>>y;
		mx[x]++;my[y]++;
		mpair[mp(x,y)]++;
		sx.insert(x);
		sy.insert(y);
		spair.insert(mp(x,y));
	}
	ll sum=0;
	set <ll>  :: iterator it;
	for(it=sx.begin();it!=sx.end();it++)
	{
		sum+=nc2(mx[*it]);
	}
	for(it=sy.begin();it!=sy.end();it++)
	{
		sum+=nc2(my[*it]);
	}
	set < pair <ll,ll> >  :: iterator itt;
	for(itt=spair.begin();itt!=spair.end();itt++)
	{
		ll p=mpair[*itt];
		//cout<<p<<endl;
		sum-=nc2(p);
	}
	cout<<sum<<endl;
	

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

