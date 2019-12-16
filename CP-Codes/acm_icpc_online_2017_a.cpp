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
		ll ar[3][3];
		ll flag=0;
		rep(i,3)
		{
			rep(j,3)
			cin>>ar[i][j];
		}
		ll a=0,b=1,c=2;
		if(ar[a][0]<=ar[b][0] and ar[a][1]<=ar[b][1] and ar[a][2]<=ar[b][2] and (ar[a][0]<ar[b][0] or ar[a][1]<ar[b][1] or ar[a][2]<ar[b][2]))
		{
			if(ar[b][0]<=ar[c][0] and ar[b][1]<=ar[c][1] and ar[b][2]<=ar[c][2] and (ar[b][0]<ar[c][0] or ar[b][1]<ar[c][1] or ar[b][2]<ar[c][2]))
			{
				cout<<"yes"<<endl;
				continue;
			}
		}

		a=0,b=2,c=1;
		if(ar[a][0]<=ar[b][0] and ar[a][1]<=ar[b][1] and ar[a][2]<=ar[b][2] and (ar[a][0]<ar[b][0] or ar[a][1]<ar[b][1] or ar[a][2]<ar[b][2]))
		{
			if(ar[b][0]<=ar[c][0] and ar[b][1]<=ar[c][1] and ar[b][2]<=ar[c][2] and (ar[b][0]<ar[c][0] or ar[b][1]<ar[c][1] or ar[b][2]<ar[c][2]))
			{
				cout<<"yes"<<endl;
				continue;
			}
		}

		a=1,b=0,c=2;
		if(ar[a][0]<=ar[b][0] and ar[a][1]<=ar[b][1] and ar[a][2]<=ar[b][2] and (ar[a][0]<ar[b][0] or ar[a][1]<ar[b][1] or ar[a][2]<ar[b][2]))
		{
			if(ar[b][0]<=ar[c][0] and ar[b][1]<=ar[c][1] and ar[b][2]<=ar[c][2] and (ar[b][0]<ar[c][0] or ar[b][1]<ar[c][1] or ar[b][2]<ar[c][2]))
			{
				cout<<"yes"<<endl;
				continue;
			}
		}

		a=1,b=2,c=0;
		if(ar[a][0]<=ar[b][0] and ar[a][1]<=ar[b][1] and ar[a][2]<=ar[b][2] and (ar[a][0]<ar[b][0] or ar[a][1]<ar[b][1] or ar[a][2]<ar[b][2]))
		{
			if(ar[b][0]<=ar[c][0] and ar[b][1]<=ar[c][1] and ar[b][2]<=ar[c][2] and (ar[b][0]<ar[c][0] or ar[b][1]<ar[c][1] or ar[b][2]<ar[c][2]))
			{
				cout<<"yes"<<endl;
				continue;
			}
		}

		a=2,b=0,c=1;
		if(ar[a][0]<=ar[b][0] and ar[a][1]<=ar[b][1] and ar[a][2]<=ar[b][2] and (ar[a][0]<ar[b][0] or ar[a][1]<ar[b][1] or ar[a][2]<ar[b][2]))
		{
			if(ar[b][0]<=ar[c][0] and ar[b][1]<=ar[c][1] and ar[b][2]<=ar[c][2] and (ar[b][0]<ar[c][0] or ar[b][1]<ar[c][1] or ar[b][2]<ar[c][2]))
			{
				cout<<"yes"<<endl;
				continue;
			}
		}

		a=2,b=1,c=0;
		if(ar[a][0]<=ar[b][0] and ar[a][1]<=ar[b][1] and ar[a][2]<=ar[b][2] and (ar[a][0]<ar[b][0] or ar[a][1]<ar[b][1] or ar[a][2]<ar[b][2]))
		{
			if(ar[b][0]<=ar[c][0] and ar[b][1]<=ar[c][1] and ar[b][2]<=ar[c][2] and (ar[b][0]<ar[c][0] or ar[b][1]<ar[c][1] or ar[b][2]<ar[c][2]))
			{
				cout<<"yes"<<endl;
				continue;
			}
		}

		cout<<"no"<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}