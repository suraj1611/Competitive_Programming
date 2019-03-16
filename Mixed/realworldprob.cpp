/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long
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

int main()
{
	//IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,k;
	sc("%lld%lld",&n,&k);
	ll x,y,p;
	ll m[n+5]={0};
	rep1(i,k)
	{
		sc("%lld%lld%lld",&x,&y,&p);
		p=p/(y-x+1);
		m[x]+=p;
		
		{
			m[y+1]-=p;
		}
	}
	for (int i = 2; i <=n ; ++i)
	{
		m[i] += m[i-1];
	}

	ll c[n+5];
	rep1(i,n)
	{
		sc("%lld",&c[i]);
		//cout<<c[i]<<endl;
	}
	std::vector < pair <ll,ll> > v1;
	std::vector < pair <ll,ll> > v2;
	rep1(i,n)
	{
		ll q=c[i]-m[i];
		//cout<<c[i]<< " "<<m[i]<<endl;
		if(q<=0)
		{
			v1.pb(mp(-q,i));
		}
		else
		{
			v2.pb(mp(q,i));
		}
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());


	ll i=0,j=0,cnt=0;
	std::vector < pair < ll, pair <ll,ll> > > v;
	//std::vector< pair < ll, pair <ll,ll > > v;
	while(i<v1.size()&&j<v2.size())
	{
		//if(v1[i].F==0)
		//	i++;
		//else
		{
		
		if(v1[i].F<v2[j].F)
		{
			//cout<<v1[i].S<< " "<<v2[j].S<<" "<<min(v1[i].F,v2[j].F)<<endl;
			v.pb(mp(v1[i].S,mp(v2[j].S,min(v1[i].F,v2[j].F))));
			v1[i].F=0;
			v2[j].F-=v1[i].F;
			i++;

		}
		else if(v1[i].F>v2[j].F)
		{
			//cout<<v1[i].S<< " "<<v2[j].S<<" "<<min(v1[i].F,v2[j].F)<<endl;
			v.pb(mp(v1[i].S,mp(v2[j].S,min(v1[i].F,v2[j].F))));
			v1[i].F-=v2[j].F;
			v2[j].F=0;
			j++;
		}

		else
		{
			v.pb(mp(v1[i].S,mp(v2[j].S,min(v1[i].F,v2[j].F))));
			i++;j++;
		}
		}

	}

	cout<<v.size()<<endl;
	rep(i,v.size())
	{
		pf("%lld %lld %lld\n",v[i].F,v[i].S,v[i].S.S);
		//cout<<v[i].F<< " "<<v[i].S.F<< " "<<v[i].S.S<<endl;
	}
	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

