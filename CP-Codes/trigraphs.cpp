/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll  int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define mx 100001
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define pf printf
#define sc scanf
#define maxsize 100001
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll a[maxsize][3];

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
	//IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;
	ll c=0;
	ll w,x,y,z;
	while(sc("%d",&n)==1&&n)
	{
		rep(i,n)
		{
			rep(j,3)
			{
				sc("%d",&a[i][j]);
			}
		}

		a[0][0]=mx;a[0][2]+=a[0][1];

		rep1(i,n-1)
		{
			rep(j,3)
			{
				w=a[i-1][j];
				x=(j==0)? mx : a[i-1][j-1];
				y=(j==0)? mx : a[i][j-1];
				z=(j==2)? mx : a[i-1][j+1];

				a[i][j]+=min(min(w,x),min(y,z));
			}
		}

		pf("%d. %d\n",++c,a[n-1][1]);
		//cout<<++c<<". "<<a[n-1][1]<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

