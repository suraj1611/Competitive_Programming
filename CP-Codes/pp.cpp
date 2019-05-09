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
#define maxsize 110005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll n,q;
ll a[maxsize];
ll tree[maxsize]={0};

void update(ll x,ll y)
{
	for(ll i=x;i<maxsize;i+=(i&(+i)))
		tree[i]+=y;
	return;
}

ll sum(ll x)
{
	ll ssum=0;
	for(ll i=x;i>0;i-=(i&(-i)))
		ssum+=tree[i];
	return ssum;
}


ll bs(ll x,ll y)
{
	ll l=x,h=y,mid,ans;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(sum(y)-sum(mid-1))
		{
			ans=mid;
			l=mid+1;
		}
		else
		{
			h=mid-1;
		}
	}
	return ans;
}

ll bss(ll x,ll y)
{
	ll l=x,h=y,mid,ans;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(sum(mid)-sum(x-1))
		{
			ans=mid;
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
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

	ll x;
	cin>>n>>q;
	rep1(i,n)
	{
		cin>>x;
		if(x)
			update(i,1),a[i]=x;
	}
	while(q--)
	{
		ll x,y;
		cin>>x>>y;
		y++;
		ll left,right;
		if(x==0)
		{

			if(sum(y-1)==0)
				left=-1;
			else
			left=bs(1,y-1)-1;
			

			if(sum(n)-sum(y)==0)
				right=-1;
			else
				right=bss(y+1,n)-1;

			cout<<left<<" "<<right<<endl;

		}
		else
		{
			if(a[y]!=0)
			update(y,1),a[y]=1;
		}
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

