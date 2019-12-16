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
		ll flag=0,z=0,o=0;
		rep(i,n)
		{
			cin>>a[i];
			if(a[i]==0)
				z++;
			if(a[i]==1)
				o++;
		}
		if((z+o)>=(n-1))
		{
			cout<<"yes"<<endl;
			continue;
		}
		else if((n==2 and (a[0]==1 or a[1]==0 or a[1]==1 or a[0]==0)))
		{
			cout<<"yes"<<endl;
			continue;
		}
		else if(n==3)
		{
			sort(a,a+n);
			if((a[0]==0 and a[1]==1) or (a[0]==0 and a[1]==0) or (a[0]==1 and a[1]==1))
			{
				cout<<"yes"<<endl;
				continue;
			}
			else
			{
				cout<<"no"<<endl;
				continue;
			}
		} 
		else
			cout<<"no"<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}