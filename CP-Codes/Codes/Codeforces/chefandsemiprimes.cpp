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

std::vector <ll> v;

void factorize(ll n)
{
	for (int i = 1; i*i <=n; ++i)
	{
		if(n%i==0)
			{v.pb(i);v.pb(n/i);}
	}
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	bool prime[205];	

	std::vector <ll> sp;

	memset(prime,true,sizeof(prime));

	prime[1]=false;

	for (int i = 2; i*i <=205 ; ++i)
	{
		if(prime[i]==true)
		{
			for (int j = i*2; j <= 205 ; j+=i)
			{
				prime[j]=false;
			}
		}
	}

	for (int i = 1 ; i < 205; ++i)
	{
		v.clear();
		factorize(i);
		for (int i = 0; i < v.size(); i+=2)
		{
			if((prime[v[i]]&&prime[v[i+1]])&&(v[i]!=v[i+1]))
				{
					sp.pb(v[i]*v[i+1]);
					break;
				}
		}
	}
	//rep(i,sp.size())
	//cout<<sp[i]<<endl;
	set <ll> s;
	rep(i,sp.size()-1)
	{
		for (int j = i; j < sp.size(); ++j)
		{
			s.insert(sp[i]+sp[j]);
		}
	}

	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k=0;
		cin>>n;
		if(s.count(n))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

