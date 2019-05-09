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
		string st;
		cin>>st;
		std::vector< pair < ll,char> > l;
		std::vector< pair <ll,char> > u;
		std::vector< pair <ll,char> > d;
		std::vector< pair <ll,char> > s;
		rep(i,st.length())
		{
			s.pb(mp(i,st[i]));
			if(st[i]>=65&&st[i]<=90)
				u.pb(mp(i,st[i]));
			else if(st[i]>=97&&st[i]<=122)
				l.pb(mp(i,st[i]));
			else if(st[i]>=48&&st[i]<=57)
				d.pb(mp(i,st[i]));
		}
		ll U=u.size(),L=l.size(),D=d.size();
		if(u.size()>0&&l.size()>0&&d.size()>0)
			{
				cout<<st<<endl;
				continue;
			}
		else if(U==0&&L==0&&D!=0)
		{
			s[0]=mp(0,'a');
			s[1]=mp(1,'A');
		}
		else if(U==0&&L!=0&&D==0)
		{
			s[0]=mp(0,'A');
			s[1]=mp(1,'1');
		}
		else if(U!=0&&L==0&&D==0)
		{
			s[0]=mp(0,'a');
			s[1]=mp(1,'1');
		}
		else if(U==0&&L!=0&&D!=0)
		{
			if(D>=L)
			{
				ll p=d[0].F;
				s[p]=mp(p,'A');
			}
			else
			{
				ll p=l[0].F;
				s[p]=mp(p,'A');
			}

		}
		else if(U!=0&&L==0&&D!=0)
		{
			if(U>=D)
			{
				ll p=u[0].F;
				s[p]=mp(p,'a');
			}
			else
			{
				ll p=d[0].F;
				s[p]=mp(p,'a');
			}

		}
		else if(U!=0&&L!=0&&D==0)
		{
			if(U>=L)
			{
				ll p=u[0].F;
				s[p]=mp(p,'1');
			}
			else
			{
				ll p=l[0].F;
				s[p]=mp(p,'1');
			}

		}
		//sort(s.begin(), s.end());
		rep(i,s.size())
		{
			cout<<s[i].S;
		}
		lb;
		



	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

