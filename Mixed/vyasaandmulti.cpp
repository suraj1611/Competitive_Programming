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
	ll a[n];
	map <ll,ll> m;
	set <ll> s;
	rep(i,n)
	{
		cin>>a[i];
		m[a[i]]++;
		s.insert(a[i]);
	}
	ll ch;
	set <ll> x;
	set <ll> y;
	set <ll> z;
	set <ll> :: iterator it;
	for(it=s.begin();it!=s.end();it++)
	{
		ll p=*it;
		if(m[p]==1)
			x.insert(p);
		else if(m[p]==2)
			y.insert(p);
		else
			{
				ch=p;
				z.insert(p);
			}
	}
	//cout<<x.size()<<endl;
	//cout<<y.size()<<endl;
	//cout<<z.size()<<endl;
	if((x.size()&1)&&(z.size()==0))
	{
		cout<<"NO"<<endl;
		return 0;
	}
	else if((x.size()&1)==0)
	{
		cout<<"YES"<<endl;
		ll c=0;
		rep(i,n)
		{
			if(x.count(a[i]))
			{
				if(c%2==0)
					cout<<"A";
				else
					cout<<"B";
				c++;
			}
			else
				cout<<"A";
		}
		lb;
	}
	else
	{
		ll c=0;
		cout<<"YES"<<endl;
		rep(i,n)
		{
			if(x.count(a[i]))
			{
				if(c%2==0)
					cout<<"A";
				else
					cout<<"B";
				c++;
			}
			else if(a[i]==ch)
				{cout<<"B";ch=-1;}
			else
				cout<<"A";

		}
		lb;
	}




	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

