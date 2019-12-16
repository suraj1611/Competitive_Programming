/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
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
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;
	while(t--)
	{
		ll x1,y1,x2,y2,A,B;
		cin>>x1>>y1>>x2>>y2>>A>>B;
		ll p=max(abs(x1-x2),abs(y1-y2));
		std::vector<ll> v;
		ll s;
			ll a=abs(x1-x2)+abs(y1-y2);
			ll b=0;
			s=a+b;
			v.pb((a*A)+(b*B));
		while(s>=p)
		{
			a-=2;
			b+=1;
			s=a+b;
			v.pb((a*A)+(b*B));
		}
		if((abs(x1-x2)+abs(y1-y2))%2==0)
			v.pb(p*B);
		//sort(v.begin(), v.end());
		rep(i,v.size())
		cout<<v[i]<<endl;
		cout<<v[0]<<endl;
		lb lb

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

