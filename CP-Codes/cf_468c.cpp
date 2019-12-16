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

std::vector<ll> a,b;
ll k;

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

ll sol(vector<ll> v)
{
	if(!v.size())
		return 0;
	ll l=abs(v[0]-k)+abs(v[v.size()-1]-v[0]);
	ll r=abs(v[v.size()-1]-k)+abs(v[v.size()-1]-v[0]);
	return min(l,r);
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;
	cin>>n>>k;
	k--;
	string s;
	cin>>s;
	ll ans=0;
	for(ll i=0,j=n-1;i<j;i++,j--)
	{
		ans+=min(abs(s[i]-s[j]),26-(abs(s[i]-s[j])));
		if(s[i]!=s[j])
		{
			a.pb(i);
			b.pb(j);
		}
	}
	reverse(b.begin(), b.end());
	ans+=min(sol(a),sol(b));
	cout<<ans<<endl;



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}