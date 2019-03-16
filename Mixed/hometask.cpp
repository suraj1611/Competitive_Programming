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
	ll a[n],s=0,z=0;
	std::vector <ll> v;
	rep(i,n)
	{
		cin>>a[i];
		s+=a[i];
		cout<<s<<endl;
		if(a[i]!=0)
			v.pb(a[i]);
		else
			z++;
	}
	//cout<<z<<" "<<s<<endl;
	if(z<=0||s%3!=0)
	{
		cout<<-1<<endl;
		return 0;
	}
	else
	{
		sort(v.begin(), v.end() , greater <ll> ());
		for(ll i=v.size()-1;i>=0;i--)
			cout<<v[i];
		rep(i,z)
			cout<<0;
		cout<<endl;

	}



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

