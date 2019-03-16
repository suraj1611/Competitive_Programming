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
	string s;
	cin>>s;
	ll c=0;
	if(n==1)
	{
		cout<<0<<endl<<s<<endl;
		return 0;
	}
	rep1(i,n-2)
	{
		//cout<<s[i]<<" "<<s[i-1]<<" ";
		if(s[i]==s[i-1])
		{
			
			if(s[i+1]=='R'&&s[i-1]=='B'||s[i+1]=='B'&&s[i-1]=='R')
				s[i]='G';
			else if(s[i+1]=='B'&&s[i-1]=='G'||s[i+1]=='G'&&s[i-1]=='B')
				s[i]='R';
			else if(s[i+1]=='R'&&s[i-1]=='G'||s[i+1]=='G'&&s[i-1]=='R')
				s[i]='B';
			else if(s[i+1]=='B'&&s[i-1]=='B')
				s[i]='R';
			else if(s[i+1]=='R'&&s[i-1]=='R')
				s[i]='G';
			else if(s[i+1]=='G'&&s[i-1]=='G')
				s[i]='B';
			c++;
			
		}
		//cout<<s<<endl;
		//cout<<s[i]<<" "<<s[i-1]<<endl;
	}
	if(s[n-1]==s[n-2])
	{
		if(s[n-2]=='R')
			s[n-1]='G';
		else if(s[n-2]=='B')
			s[n-1]='R';
		else if(s[n-2]=='G')
			s[n-1]='B';
		c++;
	}

	cout<<c<<endl;
	cout<<s<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

