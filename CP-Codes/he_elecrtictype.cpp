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
	ll a[n];
	map <ll,ll> m1,m2;
	set <ll> s;
	rep(i,n)
	{
		cin>>a[i];
		s.insert(a[i]);
		if(m1[a[i]]==0)
			m1[a[i]]=i+1;
		//m1[a[i]]=min(m1[a[i]],(ll)(i+1));
		m2[a[i]]=max(m2[a[i]],(ll)i+1);
		//cout<<a[i]<<" "<<m1[a[i]]<<" "<<m2[a[i]]<<endl;
	}

	std::vector <ll> v;

	for(auto i :s)
	{
		v.pb(m2[i]);
	}

	sort(v.begin(), v.end());

	/*for(auto i:v)
		cout<<i<<" ";
	cout<<endl;*/

	ll ans=0;
	n=s.size();
	for(auto i :s)
	{
		//cout<<m1[i]<<endl;
		ll p=upper_bound(v.begin(), v.end(),m1[i]) - v.begin();
		//cout<<n-p<<endl;
		ans+=n-p;
	}

	cout<<ans<<endl;




	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}