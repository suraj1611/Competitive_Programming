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
		ll m;
		cin>>m;
		ll a[m];
		rep(i,m)
		cin>>a[i];
		sort(a,a+m);
		ll n;
		cin>>n;
		ll t[m][n+1];
		rep(i,m)
		{
			rep(j,n+1)
			t[i][j]=5;
		}
		//cout<<t[0][0]<<endl;
		rep(i,m)
		{
			t[i][0]=1;
		}
		//cout<<t[0][0]<<endl;
		rep(i,n+1)
		{
			t[0][i]=1;
		}
		//cout<<t[0][0]<<endl;
		for (int i = 1; i < m; ++i)
		{
			for (int j = 1; j < n+1; ++j)
			{
				if(a[i]>=j)
				{
					t[i][j]=t[i-1][j]+t[i][j-a[i]];
				}
				else
					t[i][j]=t[i-1][j];

				cout<<t[i][j];

			}
			lb
		}
		cout<<t[m-1][n]<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

