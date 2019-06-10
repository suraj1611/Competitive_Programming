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
#define pb insert
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
    cin >> n;
    set<ll> v[6];
    ll a[n];
   rep(i,n)
    {
        cin >> a[i];
        if (a[i] == 4)
            v[0].insert(i);
        else if (a[i] == 8)
            v[1].insert(i);
        else if (a[i] == 15)
            v[2].insert(i);
        else if (a[i] == 16)
            v[3].insert(i);
        else if (a[i] == 23)
            v[4].insert(i);
        else if (a[i] == 42)
            v[5].insert(i);
    }
    ll ans = 0;
    for (auto it = v[0].begin(); it != v[0].end(); it++)
    {
        ll k = *it;
        ll in = 1;
        while (in < 6)
        {
            auto k1 = v[in].lower_bound(k);
            if (k1 == v[in].end())
                break;
            k = *k1;
            v[in].erase(k1);
            in++;
        }
        if (in == 6)
            ans += 6;
        else
            break;
    }
    ans = n - ans;
    cout<<ans;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}