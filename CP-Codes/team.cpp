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

	ll n,m;
	cin>>n>>m;
	std::vector <ll> v((n+m),2);
	double c=n+m;
	ll p=(ll)(floor(m/n));
	//cout<<p<<endl;
	v[0]=1;
	ll zero=0,one=1;
	for (int i = 1; i < c ; i++)
	{
		if((i%3)==1||(i%3)==0)
			{
				v[i]=1;
				one++;
			}
		else
			{
				v[i]=0;
				zero++;
			}
	}
	ll cz=0,co=0;
	if(p>2)
	{
		cout<<-1<<endl;
		return 0;
	}
	if(one!=m)
	{
		v[0]=0;
	}
	
	rep(i,c)
	{
		cout<<v[i];
	}
	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

