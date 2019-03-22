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

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,c=0,maxm=0;
	cin>>n;
	ll a[n+2],b[n+2]={0},b1[n+1]={0};
	rep(i,n)
	{
		cin>>a[i];
	}
	//a[n]=a[0];
	rep(i,n)
	{
		if(a[i]==1)
		{
			b[i]=++c;
			maxm=max(c,maxm);
		}
		else
			c=0;

	}
	c=0;
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]==1)
		{
			b1[i]=++c;
			maxm=max(c,maxm);
		}
		else
			c=0;
		b[i]=max(b[i],b1[i]);
	}
	//cout<<b1[0]<<b1[n-1]<<endl;
	maxm=max(maxm,b[0]+b[n-1]);
	cout<<maxm<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}