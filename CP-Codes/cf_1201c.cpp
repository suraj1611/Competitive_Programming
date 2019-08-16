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

	ll n,k;
	cin>>n>>k;
	ll a[n];
	rep(i,n)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll sum=0;
	for(int i=n/2;i<n;i++)
	{
		sum+=a[n-1]-a[i];
	}
	if(k-sum<0)
	{
		cout<<a[n/2]<<endl;
	}
	else
	{
		k-=sum;
		for(int i=n/2;i<n;i++)
		{
			a[i]=a[n-1];

		}
		/*rep(i,n)
		cout<<a[i]<<" ";
		lb;*/
		
		for(int i=n-1;i>=n/2;i--)
		{
			a[i]+=k/(n/2+1);
		}
	
		ll p=k%(n/2+1);
		for(int i=n-1;i>=n/2;i--)
		{
			if(p==0)
				break;
			a[i]++;
			p--;
		}
		cout<<a[n/2]<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}