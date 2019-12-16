/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long double
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



int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--)
	{
		ll n,sd;
		cin>>n>>sd;
		if(n==1)
			{
				if(sd==0)
					cout<<10<<endl;
				else
					cout<<-1<<endl;
			}
		else
			{
				ll x=n*sd;
				x/=sqrt(n-1);
				rep(i,n-1)
				cout<<0<<" ";
				cout<<fixed<<setprecision(8)<<x<<endl;
			}

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}