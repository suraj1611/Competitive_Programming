/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll int
#define rep(i,n) for(i=0; i<n; i++)
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
	cin>>t;
	while(t--)
	{
		ll n,i;
		sc("%d",&n);
		ll a[n];
		std::vector <ll> o;
		std::vector <ll> e;
		map <ll,ll> m;
		set <ll> s;
		ll oo=0,ee=0;
		rep(i,n)
		{
			sc("%d",&a[i]);
			m[a[i]]++;
			s.insert(a[i]);
			if(a[i]&1)
				oo++;
			else
				ee++;
				

		}
		ll ans=0;
		set <ll> :: iterator it;
		for(it=s.begin();it!=s.end();it++)
			{
				if((*it)&1)
					o.pb(*it);
				else
					e.pb(*it);
			}
		ll c=0,d=0;
		rep(i,o.size()-1)
		{
			{
					if((o[i+1]^o[i])==2)
					c+=m[o[i+1]]*m[o[i]] + (m[o[i]]*m[o[i]]-1)/2;
			}
		}
		c+=(m[o[i]]*m[o[i]]-1)/2;

		rep(i,e.size()-1)
		{
			{
					if((e[i+1]^e[i])==2)
					d+=m[e[i+1]]*m[e[i]] + (m[e[i]]*e[o[i]]-1)/2;
			}

		}
		d+=(m[e[i]]*m[e[i]]-1)/2;
		//cout<<oo<< " "<<ee<<" " <<c<< " "<<d<<endl;
		ans=(oo*(oo-1))/2+(ee*(ee-1))/2-c-d;
		cout<<ans<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

