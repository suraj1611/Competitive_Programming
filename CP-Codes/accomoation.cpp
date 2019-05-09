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
#define maxsize 1000005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll n,m,a[maxsize];


ll cal()
{
	ll t[m+1][n];
	rep(i,n)
	t[0][i]=1;
	ll x,y;
	for (ll i = 1; i <= m; ++i)
	{
		for (ll j = 0; j < n; ++j)
		{
			x=(i-a[j])>=0? t[i-a[j]][j]:0;
			y=(j>=1)? t[i][j-1]:0;
			t[i][j]=x+y;
		}
	}
	return t[m][n-1];
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif


		cin>>n>>m;
		rep(i,n)
		cin>>a[i];
		cout<<cal()<<endl;

	

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

