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

ll prime[maxsize];
ll N=maxsize;
ll cs[maxsize];

void seive()
{
	prime[0]=1;prime[1]=1;
	for(ll i=2;i*i<=maxsize;i++)
	{
		if(!prime[i])
		{
			for(ll j=2*i;j<=maxsize;j+=i)
				{
					prime[j]=1;
				}
		}
	}
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

	memset(prime,0,sizeof(prime));
	memset(cs,0,sizeof(cs));
	ll t;
	cin>>t;
	seive();
	cs[0]=0;
	for(ll i=1;i<maxsize;i++)
	{
		if(!prime[i])
			cs[i]+=cs[i-1]+i;
		else
			cs[i]+=cs[i-1];
	}
	// rep(i,20)
	// {
	// 	cout<<prime[i]<<" "<<cs[i]<<endl;
	// }
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		cout<<cs[y]-cs[x-1]<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}