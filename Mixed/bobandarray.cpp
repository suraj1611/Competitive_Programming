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

const ll N = 500003;
ll a[N]={0};
ll tree[4*N]={0};
ll n,q;


ll query(ll x,ll l,ll h,ll lt,ll rt)
{
	if(rt<l||lt>h) //no overlap
	{
		return 0;
	}
	if(lt<=l&&rt>=h) //total overlap
	{
		return tree[x];
	}
	//partial overlap
	ll mid=(l+h)/2;
	ll p1=query(2*x,l,mid,lt,rt);
	ll p2=query(2*x+1,mid+1,h,lt,rt);
	
	return (p1+p2);
}

void update1(ll node,ll l,ll h,ll x)
{
	if(l==h)
	{
		a[x]++;
		tree[node]++;
	}
	else
	{
		ll mid=(l+h)/2;
		if(x>=l&&x<=mid)
		{
			update1(2*node,l,mid,x);
		}
		else
		{
			update1(2*node+1,mid+1,h,x);
		}
		  tree[node] = tree[2*node]+tree[2*node+1];
	}
}

void update2(ll node,ll l,ll h,ll x)
{
	if(l==h)
	{
		if(a[x]==0)
			return;
		a[x]--;
		tree[node]--;
	}
	else
	{
		ll mid=(l+h)/2;
		if(x>=l&&x<=mid)
		{
			update2(2*node,l,mid,x);
		}
		else
		{
			update2(2*node+1,mid+1,h,x);
		}
		  tree[node] = tree[2*node]+tree[2*node+1];
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
	//build(1,1,n);
	while(q--)
	{
		ll x,y,z;
		cin>>x;
		if(x==1)
		{
			cin>>y;
			update1(1,1,n,y);
		}
		else if(x==2)
		{
			cin>>y;
			update2(1,1,n,y);
		}
		else
		{
			cin>>y>>z;
			cout<<query(1,1,n,y,z)<<endl;
		}
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

