/* Code by : Suraj (@suraj1611) */
 
#include<bits/stdc++.h>
#include <string>
 
using namespace std;
 
#define ll int
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
	//IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
 
	ll t;
	sc("%d",&t);
	while(t--)
	{
		ll n;
		sc("%d",&n);
		ll a[n];
		rep(i,n)
		{
			sc("%d",&a[i]);
		}
		if(next_permutation(a,a+n))
			{
				rep(i,n)
				pf("%d",a[i]);
			}
		else
			pf("-1");

		lb
			
	}
 
	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
 
    return 0;
}