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

	ll n,a,b;
	cin>>n>>a>>b;
	ll c=a+b;
	if(n%a==0)
	{
		cout<<"YES"<<endl;
		cout<<n/a<< " "<<0<<endl;
		return 0;
	}
	else if(n%b==0)
	{
		cout<<"YES"<<endl;
		cout<<0<< " "<<n/b<<endl;
		return 0;
	}
	else
	{
		ll i=1;
		while((n-(i*a))>=0)
		{
			if((n-(i*a))%b==0)
			{
				cout<<"YES"<<endl;
				cout<<i<< " "<<(n-(i*a))/b<<endl;
				return 0;
			}
			i++;

		}
	}
	cout<<"NO"<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

