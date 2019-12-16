/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ld long double
#define ll long long
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

ll a[maxsize];

 

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,ans;
	cin>>n;
	ld p=0;
	rep(i,n)
	{
		cin>>a[i];
	}
	sort(a,a+n);

	rep(i,n)
	p+=(log(a[i]));

	ll l=a[0],h=a[n-1]+1,mid;
	while(l<=h)
	{
		mid = (l+h)/2;
		ld temp = n*(log((mid)));
		if(temp>p)
		{
			ans=mid;
			h=mid-1;
		}
		else
			l=mid+1;
	}
	cout<<ans<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}