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

	ll n;
	cin>>n;
	ll s[n+5],c[n+5],t[n+5];
	rep(i,n)
	cin>>s[i];
	rep(i,n)
	cin>>c[i];
	ll sum=0,cnt=0,minm=mx;
	for (int i = 1; i < n ; ++i)
	{
		minm=mx;
		for (int j = 0; j< i; ++j)
		{
			if(s[i]>s[j])
				minm=min(minm,c[i]+c[j]);
		}
		t[i]=minm;
	}
	minm=mx;
	for (int i = 2; i < n ; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			if(s[i]>s[j])
				minm=min(minm,c[i]+t[j]);
		}
	}
	if(minm==mx)
		cout<<-1<<endl;
	else
	cout<<minm<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

