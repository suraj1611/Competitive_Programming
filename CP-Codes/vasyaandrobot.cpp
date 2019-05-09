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

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	string s;
	cin>>s;
	string str=s;
	ll x,y;
	cin>>x>>y;
	ll x1=x;ll y1=y;
	rep(i,s.length())
	{
		if(s[i]=='U')
		{
			y+=1;
		}
		if(s[i]=='U')
		{
			y-=1;
		}
		if(s[i]=='L')
		{
			x-=1;
		}
		if(s[i]=='R')
		{
			x+=1;
		}
	}
	ll i=0;
	while(y>y1)
	{
		if(s[i]=='U')
			s[i]='D';
		y--;i++;
	}
	i=0;
	while(y<y1)
	{
		if(s[i]=='D')
			s[i]='U';
		y++;i++;
	}
	i=0;
	while(x<x1)
	{
		if(s[i]=='R')
			s[i]='L';
		x++;i++;
	}
	i=0;
	while(x>x1)
	{
		if(s[i]=='L')
			s[i]='R';
		x--;i++;
	}
	cout<<s<<endl;
	ll maxm=mn,minm=mx;
	rep(i,s.length())
	{
		if(s[i]!=str[i])
		{
			if(i<minm)
				minm=i;
			else if(i>maxm)
				maxm=i;
		}
	}
	cout<<abs(maxm-minm)<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

