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

bool check(vector <string> &v,string &s)
{
	return find(v.begin(), v.end(),s)!=v.end();
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

	ll t;
	cin>>t;
	while(t--)
	{
		ll nd;
		cin>>nd;
		std::vector <string> v;
		rep(i,nd)
		{
			string x;
			cin>>x;
			v.pb(x);
		}
		string s;
		cin>>s;
		ll n=s.length();
		bool dp[n][n];
		memset(dp,false,sizeof(dp));
		rep(i,n)
		{
			string temp = s.substr(i,1);
			dp[i][i]=check(v,temp);
		}
		for(ll i=1;i<n;i++)
		{
			for(ll j=0;j<n-i;j++)
			{
				ll k=i+j;
				string str=s.substr(j,i+1);
				if(check(v,str))
					dp[j][k]=true;
				else
				{
					bool ans=false;
					for(ll k1=j;k1<k;k1++)
					{
						ans = ans or (dp[j][k1] and dp[k1+1][k]);
					}	
					dp[j][k]=ans;
				}

			}
		}
		
		  if(dp[0][n-1])
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}