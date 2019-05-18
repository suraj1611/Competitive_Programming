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

	ll n,m;
	cin>>n>>m;
	ll a[n][m];
	ll xsum=0,r=-1,c=-1,j=0;
	rep(i,n)
	{
		rep(j,m)
		{
			cin>>a[i][j];
			if(a[i][j]!=a[i][0])
			{
				r=i;c=j;
			}
		}
		xsum^=a[i][j];
	}
	if(r==-1)
	{
		if(xsum==0)
		{
			cout<<"NIE"<<endl;
			return 0;
		}
	}
	else
	{
		if(xsum!=0)
		c=0;
	}
	cout<<"TAK"<<endl;
	rep(i,n)
	{
		if(i==r)
			cout<<c+1<<" ";
		else
			cout<<1<<" ";
		
	}


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}