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

#define sc scanf
#define maxsize 1005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
 
int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,inf,pf,s=0,ind,ans=mx,temp;
	cin>>n;
	ll a[n];
	rep(i,n)
	cin>>a[i],s+=a[i];
	sort(a,a+n,greater <ll> ());
	rep(i,n)
	{
		for(ll j=1;j<=a[i];j++)
		{
			if(a[i]%j!=0)
				continue;
			//cout<<a[i]<< " "<<j<<endl;
			temp=s-a[i]-a[n-1]+a[i]/j+a[n-1]*j;
			ans=min(temp,ans);

		}
			
	}

	cout<<ans<<endl;



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

