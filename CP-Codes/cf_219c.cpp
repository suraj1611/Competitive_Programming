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

	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	if(k == 2)
	{
		string s1, s2;
		for(ll i=0; i<n/2; i++)
		{
			s1 += 'A';	s1 += 'B';
			s2 += 'B'; 	s2 += 'A';
		}
		if(n%2 != 0)
		{
			s1 += 'A';	s2 += 'B';
		}
		ll d1 = 0, d2 = 0;
		for(ll i=0; i<n; i++)
		{
			if(s[i] != s1[i])
				d1++;
			if(s[i] != s2[i])
				d2++;
		}
		cout << min(d1, d2) << "\n";
		if(min(d1, d2) == d1)
			cout << s1;
		else
			cout << s2;
		return 0;
	}
	ll ans = 0;
	string s1 = s;
	for(ll i=1; i<n; i++)
	{
		if(s1[i] == s1[i-1])
		{
			s1[i] = 'A';
			ans++;
			while(s1[i] == s1[i-1] or s1[i] == s1[i+1])
			{
				s1[i]++;
			}
		}
	}
	cout << ans << "\n" << s1;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}