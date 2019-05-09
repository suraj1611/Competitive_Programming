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
#define pf printf
#define sc scanf
#define maxsize 1100005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll t[105][10001];

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll tt;
	cin>>tt;
	while(tt--)
	{
		ll n;
		cin>>n;
		ll k;
		cin>>k;
		ll w[n],v[n];
		rep1(i,n)
		cin>>v[i]>>w[i];
		t[105][10001]={0};
		rep1(i,n)
		{
			rep(j,k)
			{
				if(w[i]<=j)
					t[i][j]=max(t[i-1][j-w[i]]+v[i],t[i-1][j]);
				else
					t[i][j]=t[i-1][j];
			}
		}
		ll ms=0;
		rep(i,k)
		{
			if(t[n][ms]-ms<t[n][i]-i)
				ms=i;
		}
		
		cout<<ms<<" " <<t[n][ms]-ms+k<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}