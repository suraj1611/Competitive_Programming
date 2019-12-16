#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define sc scanf
#define pf printf

ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else
	return(gcd(b%a,a));
}

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	    map <string, ll> mp;
	    ll n,m;
	    cin>>n>>m;
	    rep(i,n)
	    {
	        string s;
	        cin>>s;
	        mp[s]++;
	    }
        rep(i,m)
        {
            char c;
            string x,y;
            cin>>c>>x>>y;
            if(c=='-'&&mp[x]>0&&mp[y]>0)
            mp[y]--;
            else if(c=='+'&&mp[x]>0)
            mp[y]++;
        }
        ll s=0;
        map <string,ll> :: iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        s+=it->second;
        cout<<s<<endl;
	}

}
