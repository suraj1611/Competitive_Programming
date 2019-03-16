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

ll nc2(ll n)
{
	return (((n%md)*((n-1)%md))/2)%md;
}

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
		ll n,i;
		cin>>n;
		ll a[n];
		map <ll,ll> m;
		set <ll> s;
		rep(i,n)
		{
			cin>>a[i];
			s.insert(a[i]);
			m[a[i]]++;
		}
		ll c=0;
		std::vector <ll> v;
		set <ll> :: iterator it;
		for(it=s.begin();it!=s.end();it++)
		{
			v.pb(*it);
		}

		ll ans=1;
		for(i=v.size()-1;i>0;i--)
		{
			if(m[v[i]]==0)
				continue;
			else if((m[v[i]]&1)==0)
			{
				ans=((ans%md)*(nc2(m[v[i]])%md))%md;
			}
			else
			{
				ans*=((m[v[i]]%md) * (m[v[i-1]]%md))%md;
				m[v[i]]-=1;
				m[v[i-1]]-=1;
				if(m[v[i]]>=2)
				ans=((ans%md)*(nc2(m[v[i]])%md))%md;
			}
		}
		if(m[v[0]]>=2)
		ans=((ans%md)*(nc2(m[v[0]])%md))%md;
		cout<<ans%md<<endl;
		
		}
		


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

