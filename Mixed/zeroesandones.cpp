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

const ll N = maxsize;
ll a[N]={1};
ll tree[4*N];
ll n,q;

void build(ll x,ll l,ll h)
{
	if(l==h)
	{
		tree[x]=1;
	}
	else
	{
		ll mid=(l+h)/2;
		build(2*x,l,mid);
		build(2*x+1,mid+1,h);
		tree[x]=tree[2*x]+tree[2*x+1];
	}
}

ll query(ll node,ll l,ll h,ll k,ll n)
{
	if (l<1 || h >n || tree[node]<k)
		return -1;
	if(l==h&&k==1) 
	{
		return l;
	}
	ll left=tree[2*node];
	ll right=tree[2*node+1];
	ll mid=(l+h)/2;
	if(k>left)
	return query(2*node+1,mid+1,h,k-left,n);
	else
	return query(2*node,l,mid,k,n);

}

void update(ll node,ll l,ll h,ll x)
{
	if(l==h)
	{
		a[x]=0;
		tree[node]=0;
	}
	else
	{
		ll mid=(l+h)/2;
		if(x>=l&&x<=mid)
		{
			update(2*node,l,mid,x);
		}
		else
		{
			update(2*node+1,mid+1,h,x);
		}
		  tree[node] = tree[2*node]+tree[2*node+1];
	}
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

	cin>>n>>q;
	build(1,1,n);
	while(q--)
	{
		ll x,y;
		cin>>x>>y;
		if(x==0)
		{
			update(1,1,n,y);
		}
		else
		{
			cout<<query(1,1,n,y,n)<<endl;
		}
	}
	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

