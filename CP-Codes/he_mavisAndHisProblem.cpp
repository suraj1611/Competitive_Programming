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
#define maxsize 100005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll ans[maxsize]={0};
ll a[maxsize]={0};
ll bit[maxsize]={0};

ll query(ll x)
{
	ll sum=0;
	for(;x>0;x-=x&(-x))
		sum+=bit[x];
	return sum;
}

void update(ll x)
{
	for(;x<maxsize;x+=x&-x)
		bit[x]++;
}

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

	ll n;
	cin>>n;
	rep(i,n)
	cin>>a[i];

	for(ll i=n-1;i>=0;i--)
	{
		ans[i]=query(a[i]-1);
		update(a[i]);
	}

	rep(i,n)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}