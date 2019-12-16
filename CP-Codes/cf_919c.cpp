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

	ll n,m,k;
	cin>>n>>m>>k;
	ll a[n][m];
	string s;
	rep(i,n)
	{
		cin>>s;
		rep(j,m)
		{
			if(s[j]=='.')
				a[i][j]=0;
			else
				a[i][j]=1;
		}
	}
	ll ans=0,temp=0;
	rep(i,n)
	{
		temp=0;
		rep(j,m)
		{
			if(a[i][j]==0)
			{
				temp++;
			}
			else
			{
				ans+=max(0ll,temp-k+1);
				temp=0;
			}
		}
		ans+=max(0ll,temp-k+1);
	}
	if(n==1 or k==1)
		{
			cout<<ans<<endl;
			return 0;
		}
	
	rep(i,m)
	{
		temp=0;
		rep(j,n)
		{
			if(a[j][i]==0)
			{
				temp++;
			}
			else
			{
				ans+=max(0ll,temp-k+1);
				temp=0;
			}
		}
		ans+=max(0ll,temp-k+1);
	}
	
	cout<<ans<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}