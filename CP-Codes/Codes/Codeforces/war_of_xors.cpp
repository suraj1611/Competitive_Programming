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

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		set <ll> s;
		unordered_map <ll,ll> m;
		ll o=0,e=0;
		rep(i,n)
		{
			cin>>a[i];
			s.insert(a[i]);
			m[a[i]]++;
			if(a[i]&1)
				{o++;}
			else
				{e++;}
		}
		ll sum1=0,sum2=0;
		set <ll> :: iterator it;
		for(it=s.begin();it!=s.end();++it)
			{
				ll p=*it;
				ll s=p^2;
				sum1+=m[p]*m[s];
				sum2+=(m[p]*(m[p]-1))/2;

			}
		cout<<(n*(n-1))/2 - o*e -sum1/2 - sum2<<endl;
		

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

