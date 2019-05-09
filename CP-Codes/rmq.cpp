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

ll n,q;
ll a[maxsize];
ll tree[maxsize];

void build(ll x,ll l,ll h)
{
	if(l==h)
	{
		tree[x]=a[l];
	}
	else
	{
		ll mid=(l+h)/2;
		build(2*x,l,mid);
		build(2*x+1,mid+1,h);
		tree[x]=min(tree[2*x],tree[2*x+1]);
	}
}

ll query(ll x,ll l,ll h,ll lt,ll rt)
{
	if(rt<l||lt>h) //no overlap
	{
		return mx;
	}
	if(lt<=l&&rt>=h) //total overlap
	{
		return tree[x];
	}
	//partial overlap
	ll mid=(l+h)/2;
	ll p1=query(2*x,l,mid,lt,rt);
	ll p2=query(2*x+1,mid+1,h,lt,rt);
	return min(p1,p2);
}


void update(ll node,ll l,ll h,ll x,ll y)
{
	if(l==h)
	{
		a[x]=y;
		tree[node]=y;
	}
	else
	{
		ll mid=(l+h)/2;
		if(x>=l&&x<=mid)
		{
			update(2*node,l,mid,x,y);
		}
		else
		{
			update(2*node+1,mid+1,h,x,y);
		}
		  tree[node] = min(tree[2*node],tree[2*node+1]);
	}
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	cin>>n>>q;
	rep1(i,n)
	cin>>a[i];
	build(1,1,n);
	while(q--)
	{
		char c;
		ll x,y;
		cin>>c>>x>>y;
		if(c=='q')
		{
			cout<<query(1,1,n,x,y)<<endl;
		}
		else
			update(1,1,n,x,y);
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

