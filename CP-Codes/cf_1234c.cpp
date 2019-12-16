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
#define maxsize 1100005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll power(ll x, ll  y) 
{ 
	ll m=md;
   	ll ans=1;
    while (y > 0) 
    {
        if (y & 1)
            ans = (ans * x) % m;
        x = (x * x) % m;
        y >>= 1;
    }
    return ans;
} 

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
		string s,t;
		cin>>s>>t;
		ll flag=0;
		rep(i,n)
		{
			if(s[i]=='1')
				s[i]='2';
			if(t[i]=='1')
				t[i]='2';
		}
		rep(i,n)
		{
			if(s[i]=='2' or t[i]=='2')
				flag=1;
		}
		if(flag==0 and n!=2)
			{
				cout<<"YES"<<endl;
				continue;
			}
		if(n==2)
			{
				if(s[0]=='2' and s[1]!='2' and t[1]!='2')
				cout<<"YES"<<endl;
				else
				cout<<"NO"<<endl;
				continue;
			}
		if(s[0]!='2')
		{
			cout<<"NO"<<endl;
			continue;
		}

		flag=0;
		if(t[n-1]=='2')// or s[n-1]=='2' or t[n-1]=='1' or t[n-2]=='2' or s[n-2]=='1' or s[n-2]=='2' or t[n-2]=='1' or t[n-2]=='2')
			{
				if(t[n-2]!='2' and s[n-1]!=2)
					cout<<"YES"<<endl;
					else
					cout<<"NO"<<endl;
					continue;
			}
		else
		{
			if(t[n-1]!='2')// or s[n-1]=='2' or t[n-1]=='1' or t[n-2]=='2' or s[n-2]=='1' or s[n-2]=='2' or t[n-2]=='1' or t[n-2]=='2')
			{
				if(t[n-2]!='2' and s[n-1]!=2)
					cout<<"YES"<<endl;
					else
					cout<<"NO"<<endl;
					continue;
			}
		}
		
		if(!flag)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}