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
#define maxsize 100005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll n,bit[maxsize];

void update1(ll x,ll y)
{
	for(;x<=n;x+=x&-x)
		bit[x]+=y;
}

void update2(ll x,ll y)
{
	for(;x<=n;x+=x&-x)
		{
			if(bit[x]!=0)
			bit[x]-=y;
		}
}

ll query(ll x)
{
	ll c=0;
	for(;x>0;x-=x&-x)
		c+=bit[x];
	return c;
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

	cin>>n;
	ll a[maxsize];
	rep1(i,n)
	{
		cin>>a[i];
		a[i]%=2;
		update1(i,a[i]);
	}
	ll q;
	cin>>q;
	while(q--)
	{
		ll c,x,y;
		cin>>c>>x>>y;
		if(c==0)
			{
				y%=2;
				if(a[x]==y)
					continue;
				else if(y==1)
					update1(x,y),a[x]=1;
				else
					update2(x,1),a[x]=0;
			}
		else if(c==1)
			cout<<y-x+1-(query(y)-query(x-1))<<endl;
		else
			cout<<query(y)-query(x-1)<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

