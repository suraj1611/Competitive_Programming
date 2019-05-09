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

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	string s;
	cin>>s;
	ll n;
	cin>>n;
	map <char,ll> mpp;
	std::vector< pair <ll,ll > > v;
	rep(i,26)
	{
		ll x;
		cin>>x;
		mpp['a'+i]=x;
		v.pb(mp(x,i));
	}
	sort(v.begin(), v.end());
	ll p=v[v.size()-1].S;
	char c=char(p+'a');
	// rep(i,n)
	// {
	// 	s=s+c;
	// }
	//cout<<s<<endl;
	ll sum=0;
	std::vector <ll> v1;
	rep(i,s.length())
	{
		// v1.pb(mpp[s[i]]);
		sum+=mpp[s[i]]*(i+1);
	}
	// cout<<sum<<endl;	
	for (int i = s.length(); i < s.length()+n; ++i)
	{
		sum+=mpp[c]*(i+1);
	}
	cout<<sum<<endl;





	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

