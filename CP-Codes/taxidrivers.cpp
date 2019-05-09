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

	ll n,m;
	cin>>n>>m;
	ll x[n+m+5],t[n+m+5];
	rep(i,n+m)
	{
		cin>>x[i];
	}
	std::vector <ll> v;
	std::vector<ll> w;
	rep(i,n+m)
	{
		cin>>t[i];
		if(t[i])
			v.pb(x[i]);
		else
			w.pb(x[i]);
	}
	ll pass[m+1]={0};
	rep(i,n)
	{
		int p=(int)(lower_bound(v.begin(), v.end(),w[i]) - v.begin());
		if(p==m)
			pass[m-1]++;
		else if(p==0)
			pass[0]++;
		else
		{
			if(v[p]-w[i]< w[i]-v[p-1])
				pass[p]++;
			else
				pass[p-1]++;

		}

	}
	rep(i,m)
	cout<<pass[i]<< " ";
	lb;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

