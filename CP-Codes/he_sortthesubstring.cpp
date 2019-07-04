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

vector <ll> cal_lps(string s)
{
	ll n=s.length();
	vector <ll> res(n);
	res[0]=0;
	ll i=1,j=0;
	for(i=1;i<n;)
	{
		if(s[i]==s[j])
		{
			res[i]=j+1;
			i++;j++;
		}
		else
		{
			if(j==0)
			{
				res[i]=0;
				i++;
			}
			else
			{
				j=res[j-1];
			}
		}
	}
	return res;
}

ll kmp(string s,string pat)
{
	string cur = pat + "#" + s;
	ll sz1=s.length(),sz2=pat.length();
	ll cnt=0;
	std::vector<ll> lps=cal_lps(cur);
	for(ll i=sz2+1;i<=sz1+sz2;i++)
	{
		if(lps[i]==sz2)
		{
			//v.pb(i-(2*sz2));
			cnt++;
		}
	}
	return cnt;
}



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

	string s,pat;
	cin>>pat>>s;
	cout<<kmp(s,pat)<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}