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

ll n,m;

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

bool check(ll x,ll y)
{
	if(x>0 && y>0 && x<=n && y<=m)
		return 1;
	else
		return 0;
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif


	cin>>n>>m;
	ll x,y,k;
	cin>>x>>y>>k;
	ll ans=0;
	rep(i,k)
	{
		ll dx,dy;
		cin>>dx>>dy;
		ll l=0,h=5000000000,mid,cur=0;
		while(l<=h)
		{
			mid=(l+h)/2;
			if(check(x+mid*dx,y+mid*dy))
			{
				l=mid+1;
				cur=mid;
			}
			else
				h=mid-1;
		}
		ans+=cur;
		x+=cur*dx;
		y+=cur*dy;
	}
	cout<<ans<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}