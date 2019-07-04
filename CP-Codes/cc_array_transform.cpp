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
		ll n,k;
		cin>>n>>k;
		ll a[n],b[n];
		//unordered_set <ll> s;
		ll rem1=-1,rem2=-1,flag=0,c1=0,c2=0;
		k++;
		rep(i,n)
		{
			cin>>a[i];
		}
		ll x;
		rep(i,n)
		{
			x=a[i]%k;
			if(rem1==-1)
			{
				rem1=x;
				c1++;
			}
			else if(rem1==x)
			{
				if(c2>1)
				{
					flag=1;
					break;
				}
				c1++;
			}
			else if(rem2==-1)
			{
				rem2=x;
				c2++;
			}
			else if(rem2==x)
			{
				if(c1>1)
				{
					flag=1;
					break;
				}
				c2++;
			}
			else
			{
				flag=1;
				break;
			}
		}

		if(flag)
			cout<<"NO"<<endl;

		/*else if(flag==0 and (rem1==1 or rem1==n-1))
			cout<<"YES"<<endl;*/
		else
			cout<<"YES"<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}