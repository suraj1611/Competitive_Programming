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
		string s,t,p;
		cin>>s>>t>>p;
		ll sl=s.length(),tl=t.length(),pl=p.length();
		map <char,ll> m;
		rep(i,pl)
		{
			m[p[i]]++;
		}
		ll flag=0,j=0;
		rep(i,tl)
		{
			if(t[i]==s[j] && j<s.length())
			{
				j++;
			}
			else if(m[t[i]])
			{
				m[t[i]]--;
			}
			else
			{
				flag=1;
				break;
			}
		}
		
		if(flag==0 && j==s.length())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;



	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}