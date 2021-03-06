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
#define maxsize 16000005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll v[maxsize],vis[maxsize],g,M=maxsize;

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	ll a[n];
	rep(i,n)
	{
		cin>>a[i];
		g=__gcd(g,a[i]);
	}
	memset(v,0,sizeof(v));
	memset(vis,0,sizeof(vis));
	rep(i,n)
	v[a[i]/g]++;
	ll ans=mx;
	for(ll i=2;i<M;i++)
	{
		if(!vis[i])
		{
			ll c=0;
			for(ll j=i;j<M;j+=i)
				{
					c+=v[j];
					vis[j]=1;
				}
			ans=min(ans,n-c);
		}
	}
	if(ans==n)
		cout<<-1<<endl;
	else
		cout<<ans<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}