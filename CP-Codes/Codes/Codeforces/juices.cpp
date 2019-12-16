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

	ll n;
	cin>>n;
	map <string,ll> m;
	//m["a"]=mx;m["b"]=mx;m["c"]=mx;
	//m["ab"]=mx;
	
	rep(i,n)
	{
		string s;
		ll q;
		cin>>q>>s;
		if(s.compare("A")==0)
			{
				if((m["a"]>q)||(m["a"]==0))
					m["a"]=q;
			}
		else if(s.compare("B")==0)
			{
				if(m["b"]>q||m["b"]==0)
					m["b"]=q;
			}
		else if(s.compare("C")==0)
			{
				if(m["c"]>q||m["c"]==0)
					m["c"]=q;
			}
		else if(s.compare("AB")==0||s.compare("BA")==0)
			{
				if(m["ab"]>q||m["ab"]==0)
					m["ab"]=q;
			}
		else if(s.compare("AC")==0||s.compare("CA")==0)
			{
				if(m["ac"]>q||m["ac"]==0)
					m["ac"]=q;
			}
		else if(s.compare("CB")==0||s.compare("BC")==0)
			{
				if(m["bc"]>q||m["bc"]==0)
					m["bc"]=q;
			}
		else if(s.length()==3)
			{
				if(m["abc"]>q||m["abc"]==0)
					m["abc"]=q;
			}
	}
	std::vector<ll> v;
	if(m["a"]==0)
		m["a"]=mx;
	if(m["b"]==0)
		m["b"]=mx;
	if(m["c"]==0)
		m["c"]=mx;
	if(m["ab"]==0)
		m["ab"]=mx;
	if(m["bc"]==0)
		m["bc"]=mx;
	if(m["ac"]==0)
		m["ac"]=mx;
	if(m["abc"]==0)
		m["abc"]=mx;
	v.pb(m["a"]+m["b"]+m["c"]);
	v.pb(m["ab"]+m["c"]);
	v.pb(m["bc"]+m["a"]);
	v.pb(m["ac"]+m["b"]);
	v.pb(m["ab"]+m["bc"]);
	v.pb(m["bc"]+m["ac"]);
	v.pb(m["ac"]+m["ab"]);
	v.pb(m["abc"]);
	sort(v.begin(), v.end());
	if(v[0]>100005)
		cout<<-1<<endl;
	else
	cout<<v[0]<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

