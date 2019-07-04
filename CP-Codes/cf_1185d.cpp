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
	ll a[n],sum=0;
	std::vector< pair <ll,ll> > v;
	rep(i,n)
	{
		cin>>a[i];
		sum+=a[i];
		v.pb(mp(a[i],i+1));
	}
	sort(v.begin(), v.end());
	rep(i,v.size())
	cout<<v[i].F<<" ";
	lb;
	ll s=v.size();
	ll flag=0;
	for(int i=0;i<=s-4;i++)
	{
		if((v[i+1].F-v[i].F) != (v[i+2].F-v[i+1].F))
			{
				flag=1;
				break;
			}
	}
	if(flag==0)
	{
		cout<<v[s-1].S<<endl;
		return 0;
	}
	//label;
	flag=0;
	for(int i=1;i<=s-3;i++)
	{
		if((v[i+1].F-v[i].F) != (v[i+2].F-v[i+1].F))
			{
				flag=1;
				break;
			}
	}
	if(flag==0)
	{
		cout<<v[0].S<<endl;
		return 0;
	}
	//label;
	//cout<<sum<<endl;
	ll ssum=(ceil(s-1)/2)*(v[0].F+v[s-1].F);
	rep(i,v.size())
	{
		/*if(v.size()%2==0 && (i==s/2 or i==s/2-1 ))
		{
			if(i==s/2-1 && ssum==(sum-v[i].F+v[i+1].F))
			{
				cout<<v[i].S<<endl;
				return 0;
			}
			else if(i==s/2 && ssum==(sum-v[i].F+v[i-1].F))
			{
				cout<<v[i].S<<endl;
				return 0;
			}
		}
		else*/ if(ssum==(sum-v[i].F))
		{
			cout<<v[i].S<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}