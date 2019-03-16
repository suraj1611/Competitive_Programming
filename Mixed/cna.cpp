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
		pair <ll,ll> p[5];
		pair <ll,ll> q[5];
		set <ll> s;
		set <ll> s1;	
		rep(i,5)
		{
			ll x,y;
			cin>>x>>y;
			p[i]=mp(x,y);
			q[i]=mp(y,x);
			s.insert(x);
			s1.insert(y);
		}
		ll k=0;
		if(s.size()!=3||s1.size()!=3)
			k=0;
		else
		{
			sort(p,p+5);
			sort(q,q+5);
			ll a,b;
			a=p[0].F,b=p[0].S;
			if(s.count(a+1)&&s.count(a+2))
			{
				if(s1.count(b+1)&&s1.count(b-1));
				k=1;
				//cout<<k<<endl;
			}
			a=p[4].F,b=p[4].S;
			if(s.count(a-1)&&s.count(a-2))
			{
				if(s1.count(b+1)&&s1.count(b-1));
				k=2;
				//cout<<k<<endl;
			}
			a=q[4].F,b=q[4].S;
			if(s1.count(a-1)&&s1.count(a-2))
			{
				if(s.count(b+1)&&s.count(b-1));
				k=3;
				//cout<<k<<endl;
			}
			a=q[0].F,b=q[0].S;
			if(s1.count(a+1)&&s1.count(a+2))
			{
				if(s.count(b+1)&&s.count(b-1));
				k=4;
				//cout<<k<<endl;
			}
		}
			if(k!=0)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
	}


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

