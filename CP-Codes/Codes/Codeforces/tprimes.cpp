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

bool prime[maxsize];

void seive()
{
	memset(prime,true,sizeof(prime));
	for (int i = 2; i*i <= maxsize ; ++i)
	{
		if(prime[i]==true)
		{
			for (int j = i*2; j <= maxsize ; j+=i)
			{
				prime[j]=false;
			}
		}
	}
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	seive();
	set <double> s;
	for (ll i = 2; i < maxsize ; ++i)
	{
		if(prime[i])
			s.insert(i);
	}
	double a[n];
	rep(i,n)
	{
		cin>>a[i];
		double p=sqrt(a[i]);
		//cout<<p<<endl;
		if(s.count(p))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	}


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

