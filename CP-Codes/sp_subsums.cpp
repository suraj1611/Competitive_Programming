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

void subSolve(ll a[],std::vector <ll> &v , ll n, ll start)
{
	ll sum=0;
	rep(i,pow(2,n))
	{
		sum=0;
		rep(j,n)
		{
			if(i&(1<<j))
			{
				sum+=a[j+start];
			}
		}
		v.pb(sum);
	}
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,a,b;
	cin>>n>>a>>b;
	ll ar[40];
	rep(i,n)
	{
		cin>>ar[i];
	}

	std::vector <ll> left,right;

	subSolve(ar,left,n/2,0);
	subSolve(ar,right,(n&1)? n/2+1:n/2,n/2);

	sort(right.begin(), right.end());
	ll sum=0;
	//cout<<left.size()<<" "<<right.size()<<endl;
	rep(i,left.size())
	{
		ll low = lower_bound(right.begin(), right.end(), a-left[i])-right.begin();
		ll high = upper_bound(right.begin(), right.end(), b-left[i])-right.begin();
		sum+=(high-low);
	//	cout<<high<<" "<<low<<endl;
	}
	cout<<sum<<endl;




	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}