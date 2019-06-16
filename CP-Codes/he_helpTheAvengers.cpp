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
#define maxsize 1000010
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll prime[maxsize];
ll ar[35000];
ll bit[35000];
ll n;

void seive()
{
	prime[1]=0;
	prime[0]=0;
	for(int i=2;i*i<=maxsize;i++)
	{
		if(prime[i])
		{
			for(int j=2*i;j<=maxsize;j+=i)
			{
				prime[j]=0;
			}
		}
	}
}

ll query(ll x)
{
	ll sum=0;
	while(x>0)
	{
		sum +=bit[x];
		x-=x&(-x);
	}
	return sum;
}

void update(ll x,ll val)
{
	while(x <= n)
	{
		bit[x]+=val;
		x+=x&(-x);
	}

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
	fill(prime, prime+1000010, 1);
	seive();
	/*rep1(i,20)
	{
		cout<<i<<" "<<prime[i]<<endl;
	}*/
	while(t--)
	{
		cin>>n;
		memset(ar,0,sizeof(ar));
		memset(bit,0,sizeof(bit));
		rep1(i,n)
		{
			ll x;
			cin>>x;
			ar[i]=prime[x];
			update(i,ar[i]);
		}
		ll q;
		cin>>q;
		while(q--)
		{
			char c;
			ll x,y;
			cin>>c>>x>>y;
			if(c=='C')
			{
				update(x,-ar[x]);
				ar[x] = prime[y];
				update(x,ar[x]);
			}
			else
			{
				cout<<query(y)-query(x-1)<<endl;
			}
		}

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}