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

	ll r,c;
	cin>>r>>c;
	ll a[r+5][c+5];
	rep(i,r)
	{
		rep(j,c)
		cin>>a[i][j];
	}
	rep(i,r)
	{
		//ca[i][0]=a[i][0];
		rep1(j,c-1)
		{
			a[i][j]+=a[i][j-1];
			//cout<<a[i][j]<<" ";
		}
		//lb;
	}
	ll q;
	cin>>q;
	while(q--)
	{
		ll x1,x2,y1,y2;
		ll ans=0;
		cin>>x1>>y1>>x2>>y2;
		x1--;x2--;y1--;y2--;
		for (int i = x1; i <=x2 ; ++i)
		{
			if(y1!=0)
			ans=ans+a[i][y2]-a[i][y1-1];
			else
			ans=ans+a[i][y2];
		}
		cout<<ans<<endl;
	}


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

