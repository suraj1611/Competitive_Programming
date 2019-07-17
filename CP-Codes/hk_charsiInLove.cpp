/* Code by : Suraj (@suraj1611) */
 
#include<bits/stdc++.h>
#include <string>
 
using namespace std;
 
#define ll long long
#define rep(i,n) for(ll i=0; i<n; i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
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
 
	ll n;
	cin>>n;
	std::vector <ll> v;
	rep1(i,100000)
	{
		v.pb((i*(i+1)/2));
	}
	rep1(i,100000)
	{
		if(binary_search(v.begin(), v.end(),n-i*(i+1)/2))
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
 
	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
 
    return 0;
}