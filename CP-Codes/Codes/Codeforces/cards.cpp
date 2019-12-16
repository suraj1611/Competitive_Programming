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
	
	
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);

	ll n;
	cin>>n;
	ll a[2*n];
	set <ll> s;
	map <ll,ll> m;
	pair <ll,ll> p[2*n];
	rep(i,2*n)
	{
		cin>>a[i];
		s.insert(a[i]);
		m[a[i]]++;
		p[i]=mp(a[i],i+1);
	}
	ll k=0;
	set <ll> :: iterator it;
	for(it=s.begin();it!=s.end();++it)
	{
		ll p=*it;
		if(m[p]&1)
			{
				k=1;break;
			}

	}
	sort(p,p+2*n);
	if(k==0)
	for (int i = 0; i < 2*n; i+=2)
	{
		cout<<p[i].S<< " "<<p[i+1].S<<endl;
	}
	else
	cout<<-1<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

