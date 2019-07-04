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
#define maxsize 3005
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll prime[maxsize+5];
ll N=maxsize;
std::vector <ll> v;

void seive()
{
	for(ll i=2;i<N;i++)
	{
		if(!prime[i])
		{
			for(ll j=2;j*i<N;j++)
			{
				prime[i*j]++;
			}
		}
	}

	for(ll i=0,j=0;j<=1001 && i<=3000 ;i++)
	{
		if(prime[i]>=3)
			v.pb(i);
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
	seive();
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<v[n-1]<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}