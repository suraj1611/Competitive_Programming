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

	ll n,x;
	cin>>n;
	ll p=1;
	unordered_set <ll> s;
	s.insert(p);

	std::vector <ll> v,v1;
	v.pb(p);
	v1.pb(p);
	ll flag=0;
	rep(i,n-1)
	{
		cin>>x;
		p=p+x;
		s.insert(p);
		v.pb(p);
		v1.pb(p);
	} 
	sort(v1.begin(), v1.end());
	p=v1[0]-1;
	//cout<<v1[0]<<endl;
	rep1(i,v1.size()-1)
	{
		ll q=v1[i]-i-1;
		if(p!=q)
		{
			flag=1;
			break;
		}

	}
	if(s.size()==n&&flag==0)
		{
			for(auto i: v)
				cout<<i-p<<" ";
		}
	else
	{
		cout<<-1<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}