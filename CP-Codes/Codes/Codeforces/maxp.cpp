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



ll sumToN(ll n)
{
	return ((n%md * ((n+1)%md))/2)%md;
}

ll findprod(vector<ll> v)
{
	ll prod=1;
	rep(i,v.size())
	{
		//cout<<(v[i]* (v[i]-1))<<endl;
		prod=((prod%md) * (v[i]%md * (v[i]-1)%md))%md;
		//cout<<prod<<endl;
	}
	return prod;
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
		ll n,k,c=0;
		cin>>n>>k;
		std::vector <ll> v;
		if(n<sumToN(k))
		{
			//cout<<1<<endl;
			cout<<-1<<endl;
			continue;
		}
		if(n<(sumToN(k+1)-1))
		{
			//cout<<2<<endl;
			cout<<-1<<endl;
			continue;		
		}
		else
		{
			//cout<<33<<endl;
			ll p=n/k;
			ll q=n%k;
			//cout<<n<< " "<<k<<endl;
			//cout<<p<<" " <<q<<endl;
			if(k&1)
			 v.pb(p);
			ll c=k/2;
			for (int i = 1; i <= k/2; ++i)
			{
				//ll pq=abs(p-c);
				if(p-c!=1)
				{
				//cout<<"p-c "<<p-c<<endl;
				v.pb(p-c);
				v.pb(p+c);
				c--;
				}
				else
				{
					//cout<<"p-c "<<p-c<<endl;
					v.pb(p);
					v.pb(p);
				}
				
			}
			sort(v.begin(), v.end());
			for (int i = v.size()-1; i >=v.size()-q; i--)
			{
				v[i]++;
			}
		

			//v[max_element(v.begin(), v.end())-v.begin()]+=q;
		}
		rep(i,v.size())
		cout<<v[i]<<endl;

	cout<<findprod(v)<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

