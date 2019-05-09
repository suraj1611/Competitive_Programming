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

	string s;
	cin>>s;
	if(s.length()&1)
	{
		cout<<-1<<endl;
		return 0;	
	}
	ll u=0,d=0,r=0,l=0;
	rep(i,s.length())
	{
		if(s[i]=='R')
			r++;
		else if(s[i]=='U')
			u++;
		else if(s[i]=='L')
			l++;
		else
			d++;
	}
	ll a=0,b=0;
	//cout<<u<<d<<l<<r;
	a=abs(u-d);
	b=abs(l-r);
	
	cout<<(a+b)/2<<endl;
	

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

