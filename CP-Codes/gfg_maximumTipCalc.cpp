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

ll a[maxsize],b[maxsize];

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

ll solve(ll x,ll y,ll n)
{
	ll sum=0,sum1=0;
	if(!n)
		return 0;
	if(x>0)
		sum=a[n-1]+solve(x-1,y,n-1);
	if(y>0)
		sum1=b[n-1]+solve(x,y-1,n-1);
	return max(sum,sum1);
}

bool comp( pair <ll,ll> a, pair <ll,ll> b)
{
	return ((abs(a.S-a.F))<abs(b.S-b.F));
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
		ll n,x,y;
		cin>>n>>x>>y;
		rep(i,n)
		cin>>a[i];
		rep(i,n)
		cin>>b[i];
		cout<<solve(x,y,n)<<endl;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}