/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define pf printf
#define sc scanf
#define maxsize 1100005
#define lb cout<<endl;
#define F first
#define S second
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

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
		rep(i,n)
		cin>>a[i];
		ll k=0;
		if((n%2==0)||(a[0]!=1))
			{
				k=0;
			}
		else
		{
			rep(i,n/2)
			{
			if(a[i+1]-a[i]==1)
			{
				k=1;
			}
			else
				{
					k=0;
					break;
				}
			}
			if(k!=0)
			{
			for (int i = n/2; i < n-1 ; ++i)
			{
			if(a[i]-a[i+1]==1)
			{
				k=1;
			}
			else
				{
					k=0;
					break;
				}
			}
			}

		}
		if(k==0)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

