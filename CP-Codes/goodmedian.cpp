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

/*This Function to compute ncr has been taken from geeksforgeeks*/

const int N = 2006; 
  

ll factorialNumInverse[N + 1]; 
  

ll naturalNumInverse[N + 1]; 
  

ll fact[N + 1]; 
  
void InverseofNumber(ll p) 
{ 
    naturalNumInverse[0] = naturalNumInverse[1] = 1; 
    for (int i = 2; i <= N; i++) 
        naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p; 
} 
void InverseofFactorial(ll p) 
{ 
    factorialNumInverse[0] = factorialNumInverse[1] = 1; 
  
    for (int i = 2; i <= N; i++) 
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p; 
} 
  
void factorial(ll p) 
{ 
    fact[0] = 1; 
  
    for (int i = 1; i <= N; i++) { 
        fact[i] = (fact[i - 1] * i) % p; 
    }  
} 
  
ll Binomial(ll N, ll R) 
{ 
	ll p=md;
    ll ans = ((fact[N] * factorialNumInverse[R]) 
              % p * factorialNumInverse[N - R]) 
             % p; 
    return ans; 
} 


int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	    
	ll p = 1000000007; 
    InverseofNumber(p); 
    InverseofFactorial(p); 
    factorial(p); 

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		rep(i,n)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		std::vector < pair <ll,ll > > v;
		rep(i,n)
		{
			v.pb(mp(i,n-i-1));
		}
		ll ans=0;

		

		rep(i,n)
		{
			ll p=v[i].F;
			ll q=v[i].S;
			//cout<<p<<" "<<q<<endl;
			//rep(j,min(v[i].F,v[i].S))
			for (int j = 0; j <= min(v[i].F,v[i].S) ; ++j)
			{
				ans+=(Binomial(p,j)%md*Binomial(q,j)%md)%md;		
			}
			
		}
		//cout<<ans<<endl;

		rep(i,n-1)
		{
			for (int j = i+1; j < n  ; ++j)
			{
				if(a[i]==a[j])
					{
						ll p=v[i].F;
						ll q=v[j].S;
						ans+=Binomial(p+q,min(p,q));
					}
			}
		}

		cout<<ans%md<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

