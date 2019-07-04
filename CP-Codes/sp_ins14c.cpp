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

bool comp( pair <ll,ll> a, pair <ll,ll> b)
{
	return (a.S<b.S);
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
		ll n,k;
		string s;
		cin>>n>>k;
		cin>>s;
		std::vector< pair <ll,ll> > v0,v1,v3;
		rep(i,n)
		{
			if(s[i]=='0')
				v0.pb(mp(0,i));
			else
				v1.pb(mp(1,i));
		}
		sort(v0.begin(), v0.end(),comp);
		sort(v1.begin(), v1.end(),comp);
		/*rep(i,v1.size())
		{
			cout<<v1[i].F<<" "<<v1[i].S<<endl;
		}*/
		ll endv0=v0.size(),endv1=v1.size(),startv0=0,startv1=0;
		ll t=endv1;
		//cout<<startv0<<" "<<endv0<<" "<<"** "<<startv1<<" "<<endv1<<endl;
		rep(i,n-k)
		{
			if(i&1)
				{
					if(startv0<endv0)
					startv0++;
					else
					endv1--;
				}
			else
			{
					if(startv1<endv1)
					startv1++;
					else
					startv0++;
			}
			//cout<<startv0<<" "<<endv0<<" "<<"** "<<startv1<<" "<<endv1<<endl;
			//cout<<startv0<<" "<<endv0<<" "<<"** "<<endv0<<" "<<endv1<<endl;
		}
		for(int i=startv0;i<endv0;i++)
		{
			v3.pb(v0[i]);
		}
		for(int i=startv1;i<endv1;i++)
		{
			v3.pb(v1[i]);
		}
		sort(v3.begin(), v3.end(),comp);
		//cout<<v3.size();
		rep(i,v3.size())
		{
			cout<<v3[i].F;
		}
		lb;




	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}