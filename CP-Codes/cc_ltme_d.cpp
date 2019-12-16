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
		string r,s;
		cin>>r>>s;
		sort(s.begin(), s.end());
		ll m=s.length(),n=r.length();
		char c=r[0];
		map <char,ll> m1,m2;
		rep(i,m)
		{
			m1[s[i]]++;
		}
		ll flag=0;
		rep(i,n)
		{
			if(m1[r[i]]>0)
				m1[r[i]]--;
			else
			{
				flag=1;
				break;
			}
		}
		if(flag)
		{
			cout<<"Impossible"<<endl;
			continue;
		}
		ll i=0;
		for(i=0;i<m;i++)
		{
			//cout<<s[i]<<" "<<c<<" "<<m1[s[i]]<<endl;
			if(s[i]<=c and m1[s[i]]>0)
				cout<<s[i],m1[s[i]]--;
			else
			{
				cout<<r;
				break;
			}
		}
		//cout<<i<<endl;
		for(ll k=0;k<m;k++)
		{
			//cout<<i<<" ";
			if(m1[s[k]]>0)
				cout<<s[k],m1[s[k]]--;
		}
		lb;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}