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
#define maxsize 2000005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll n,m,ar[maxsize],bsz[maxsize],asz[maxsize];
ll vis[maxsize]={0};

void init()
{
	rep1(i,m+n)
	{
		ar[i]=i;
		if(i>=n+1)
		{
			asz[i]=0;
			bsz[i]=1;
		}
		else
		{
			asz[i]=1;
			bsz[i]=0;
		}
	}
}

ll root(ll i)
{

	while(ar[i]!=i)
		{
			ar[i]=ar[ar[i]];
			i=ar[i];
		}

	return i;
}



void sunion(ll a,ll b)
{
	ll ra,rb;
	ra=root(a);rb=root(b);
	if(ra==rb)
		return;
	if(asz[ra]+bsz[ra]>asz[rb]+bsz[rb])
	{
		//ar[rb]=ar[ra];
		asz[ra]+=asz[rb];
		bsz[ra]+=bsz[rb];
		ar[rb]=ra;
	}
	else
	{
		//ar[rb]=ar[ra];
		
		asz[rb]+=asz[ra];
		bsz[rb]+=bsz[ra];
		ar[ra]=rb;
	}
}


int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,m;
	cin>>n>>m;
	init();
	ll q1,q2,q3;
	cin>>q1;
	while(q1--)
	{
		ll x,y;
		cin>>x>>y;
		sunion(x,y);
	}
	cin>>q2;
	while(q2--)
	{
		ll x,y;
		cin>>x>>y;
		x+=n;y+=n;
		sunion(x,y);	
	}
	cin>>q3;
		ll ans=0;
	while(q3--)
	{
		ll x,y;
		cin>>x>>y;
		y+=n;
		sunion(x,y);
	}

	// cout<<ans<<endl;

	rep1(i,m+n)
	{
		ll p=root(i);
		cout<<p<<endl;
		if(vis[p]==0)
		{
			//label;
			cout<<asz[p]<<" "<<bsz[p]<<endl;
			vis[p]=1;
			ans+=asz[p]*(m-(bsz[p]));
		}
	}
	
	cout<<ans<<endl;



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

