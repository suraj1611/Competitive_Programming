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
		ll n,m,x,y,k=0;
		cin>>n>>m>>x>>y;
		n--;m--;
		if((n==1&&m==1)||(n==0&&m==0))
		k=1;
		ll a=n,b=m;
		n%=x;
		m%=y;
		if((n==1&&m==1)||(n==0&&m==0))
		k=1;
		else if((n==0&&m==1)&&(x==1)&&(a!=0))
		k=1;
		else if((n==1&&m==0)&&(y==1)&&(b!=0))
		k=1;
		if(k==0)
			cout<<"Pofik"<<endl;
		else
		cout<<"Chefirnemo"<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

