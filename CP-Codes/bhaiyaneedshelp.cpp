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

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return (power(x, y/2)%md*power(x, y/2)%md)%md; 
    else
        return (x*power(x, y/2)%md * power(x, y/2)%md)%md; 
} 

ll sumPairs(ll arr[],ll n) 
{ 
    // final result 
   ll sum = 0; 
    for (ll i=n-1; i>=0; i--) 
        sum += i*arr[i] - (n-1-i)*arr[i]; 
    return sum; 
} 

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,a;
	cin>>n>>a;
	ll ar[n];
	rep(i,n)
	cin>>ar[i];
	sort(ar,ar+n);
    cout<<sumPairs(ar,n)<<endl;



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

