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
/*#define miter map <ll,ll> :: iterator it; for(it=m.begin();it!=m.end();it++)
#define viter vector <ll> :: iterator it; for(it=v.begin();it!=v.end();it++)
#define siter set <ll> :: iterator it; for(it=s.begin();it!=s.end();it++)*/

ll prime[maxsize];

std::vector < ll > v[1000005];

void fact(ll n)
{
	for(int i=1;i*i<n;i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
				v[n].pb(i);
			else
			{
				v[n].pb(i);v[n].pb(n/i);
			}
		}
	}
}

void factorize()
{
	for(int i=1;i<1000005;i++)
		{
			for(int j=i+1)
		}
}



int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("in.txt", "r", stdin);
    // for writing output to output.txt
    freopen("out.txt", "w", stdout);
#endif
    factorize();
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,c=0;
		cin>>n;
		
		for(int i=0;i<v[n].size()-1;i++)
		{
			for(int j=i+1;j<v[n].size();j++)
				{
					
					if( __gcd(v[n][i],v[n][j])==1)
					c++;
					

				}

		}
		cout<<c<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
    return 0;
}

