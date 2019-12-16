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

ll N=maxsize+5;
unordered_set <ll> s;

void simpleSieve(int limit, vector<int> &prime) 
{ 
 
    bool mark[limit+1]; 
    memset(mark, true, sizeof(mark)); 
  
    for (int p=2; p*p<limit; p++) 
    { 
        if (mark[p] == true) 
        { 
            for (int i=p*2; i<limit; i+=p) 
                mark[i] = false; 
        } 
    } 
  
    for (int p=2; p<limit; p++) 
    { 
        if (mark[p] == true) 
        { 
            prime.push_back(p); 
            s.insert(p);
        } 
    } 
} 
  
void segmentedSieve(int n) 
{ 

    int limit = floor(sqrt(n))+1; 
    vector<int> prime;  
    simpleSieve(limit, prime);  
  

    int low = limit; 
    int high = 2*limit; 

    while (low < n) 
    { 
        if (high >= n)  
           high = n; 
          
 
        bool mark[limit+1]; 
        memset(mark, true, sizeof(mark)); 
  

        for (int i = 0; i < prime.size(); i++) 
        { 
 
            int loLim = floor(low/prime[i]) * prime[i]; 
            if (loLim < low) 
                loLim += prime[i]; 

            for (int j=loLim; j<high; j+=prime[i]) 
                mark[j-low] = false; 
        } 
  
        for (int i = low; i<high; i++) 
            if (mark[i - low] == true) 
                {
                	s.insert(i);
                } 
  
        low = low + limit; 
        high = high + limit; 
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

	ll t;
	cin>>t;
	segmentedSieve(100000002);
	for(auto i : s)
		cout<<i<<" ";
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n],c=0;
		rep(i,n)
		{
			cin>>a[i];
			if(s.count(a[i]))
				c++;
		}
		cout<<c<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}