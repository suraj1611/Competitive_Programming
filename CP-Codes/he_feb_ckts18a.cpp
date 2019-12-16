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
	long double a[n],cost[n];
	long double minm=mx,maxm=mn;
	rep(i,n)
	{
		cin>>a[i];
		minm=min(minm,a[i]);
		maxm=max(maxm,a[i]);
	}
	rep(i,n)
	cin>>cost[i];
	long double l=minm,h=maxm,mid,ans1=0,ans2=0;
	set <long double> s;
	while(l<=h)
	{
		ans1=0;ans2=0;
		mid=(l+h)/2;
		rep(i,n)
		{
			if(a[i]<mid)
				ans1+=cost[i]/log2(2+(mid-a[i]));
			else
				ans2+=cost[i]/log2(2+(a[i]-mid));
		}
		cout<<setprecision(12);//ans1<<" "<<ans2<<endl;
		if(abs(ans1-ans2)<0.00000001)
			{
				//cout<<mid<<" ";
				l=mid;h=maxm;
				s.insert((double)mid);
				continue;
			}
		//cout<<abs(ans1-ans2)<<endl;
		if(ans1>ans2)
			l=mid+0.00000000000001;
		else
			h=mid-0.00000000000001;
	}
	cout<<s.size()<<endl;
		for(auto i:s)
			cout<<i<<" ";


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}