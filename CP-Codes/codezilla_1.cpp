//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define md 1000000007
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
ll prime[1000003],a[1000003];
void sieve()
{
	ll i,j;
	for (i=0;i<1000003;i++)	
		prime[i]=1;

	for (i=2;i*i<1000003;i++)
	{
		if (prime[i])
		{
			for (j=2*i;j<1000003;j+=i)
				prime[j]=0;
		}
	}
	a[0]=a[1]=0;
	for (i=2;i<1000003;i++)	a[i]=a[i-1]+prime[i];

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
	#endif
	sieve();
    ll t;cin>>t;
    while (t--)
    {
    	ll n,k;cin>>n>>k;
    	ll ans=power(k%md,a[n])%md;
    	cout<<ans<<endl;
    }
}