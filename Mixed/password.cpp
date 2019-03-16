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

	string s,ans;
	cin>>s;
	ll l=s.length();
	ll i=1,j=0;
	ll lps[l+5]={0};
	while(i<l)
	{
		if(s[i]==s[j])
		{
			lps[i]=++j;
			i++;
		}
		else
		{
			if(j!=00)
				j=lps[j-1];
			else
				lps[i]=0,i++;
		}
	}
	if(lps[l-1]==0)
	{
		cout<<"Just a legend"<<endl;
		return 0;
	}
	else
	{
		rep(i,l-1)
		{
			if(lps[i]==lps[l-1])
			{
				cout<<s.substr(0,lps[l-1]);
				return 0;
			}
		}
	}
	ll p=lps[l-1]-1;
	if(lps[p]==0)
	{
		cout<<"Just a legend"<<endl;
		return 0;
	}
	else
	{
		rep(i,l-1)
		{
			if(lps[i]==lps[p])
			{
				cout<<s.substr(0,lps[i]);
				return 0;
			}
		}
	}
	
	// if(flag)
	// 	cout<<ans<<endl;
	// else
	// cout<<"Just a legend"<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}