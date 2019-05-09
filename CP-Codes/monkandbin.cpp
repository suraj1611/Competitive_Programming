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

	int n;
	cin>>n;
	int a[n];
	rep(i,n)
	cin>>a[i];
	int c=0,ka=0;
	int i,j,k,l,maxm=-1;
	for (l = 0; l < n; ++l)
	{
		if(a[l]==0)
			a[l]=1,ka=1;
		c=0;
		for (i = 1; i <= n; ++i)
		{
			for (j = 0; j <= n-i; ++j)
			{
				ll x=0;
				for (k = j; k < min(j+i,n) ; ++k)
				{ 
					x^=a[k];
					//cout<<k<<" ";
				}
				
				if(x==1)
					c++;
			}
		}
		maxm=max(c,maxm);
	if(ka==1)
		a[l]=0,ka=0;
	}
	cout<<c<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

