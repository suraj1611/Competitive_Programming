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

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		unordered_map <ll,ll> m;
		std::vector <ll> v;
		rep(i,n)
		{
			cin>>a[i];
			m[a[i]]++;
			v.push_back(a[i]);
		}
		ll max1=0,max2=0;

		//for(auto i: v)
		//cout<<m[i]<<" ";

		for(auto i : v)
		{
			if(i>=max1 && m[i]>=2)
			{
				//max1=i;
				max2=max1;
				max1=i;
				m[i]-=2;
			}
			else if(i>=max2 && i<max1 && m[i]>=2)
			{
				max2=i;
				m[i]-=2;
			}
			//cout<<max1<<" "<<max2<<endl;
		}
		ll ans=max1*max2;
		if(ans)
			cout<<ans<<endl;
		else
			cout<<-1<<endl;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}