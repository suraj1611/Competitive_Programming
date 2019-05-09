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

ll n,m;
ll a[100][100],b[100][100];

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

	cin>>n>>m;
	rep(i,n)
	{
		rep(j,m)
		{
			cin>>a[i][j];
		}
	}
	rep(i,n)
	{
		rep(j,m)
		{
			cin>>b[i][j];
		}
	}

	rep(i,n)
	{
		rep(j,m)
		{
			ll x,y;
			x=min(a[i][j],b[i][j]);
			y=max(a[i][j],b[i][j]);
			a[i][j]=x;b[i][j]=y;
		}
	}

	ll flag=0;
	rep(i,n)
	{
		rep(j,m-1)
		{
			if(a[i][j]<a[i][j+1]&&b[i][j]<b[i][j+1])
				continue;
			else
				flag=1;
		}		
	}


	rep(i,m)
	{
		rep(j,n-1)
		{
			if(a[j][i]<a[j+1][i]&&b[j][i]<b[j+1][i])
				continue;
			else
				flag=1;
			
		}
	}

	if((flag))
		cout<<"Impossible"<<endl;
	else
		cout<<"Possible"<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}