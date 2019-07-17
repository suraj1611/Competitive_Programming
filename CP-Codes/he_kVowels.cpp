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

bool vowel(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		return 1;
	}
	return 0;
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
	char v[5]={'a','e','i','o','u'};
	while(t--)
	{
		ll n,k,start=0,pos=-1,ans=0,flag=0;
		cin>>n>>k;
		string s;
		cin>>s;
		transform(s.begin(), s.end(),s.begin(),::tolower);
		ll c[5]={0};
		rep(i,n)
		{
			if(s[i]=='a')
				c[0]++;
			else if(s[i]=='e')
				c[1]++;
			else if(s[i]=='i')
				c[2]++;
			else if(s[i]=='o')
				c[3]++;
			else if(s[i]=='u')
				c[4]++;
			ll total=0;
			rep(j,5)
			{
				if(c[j])
					total++;
			}
			if(total==k)
				flag=1;
			if(total<=k)
				ans = max(ans,i-pos);
			else
			{
				start = pos+1;
				while(total>k)
				{
					if(s[start]=='a')
						c[0]--;
					else if(s[start]=='e')
						c[1]--;
					else if(s[start]=='i')
						c[2]--;
					else if(s[start]=='o')
						c[3]--;
					else if(s[start]=='u')
						c[4]--;
					start++;
					total=0;
					rep(j,5)
					{
						if(c[j])
							total++;
					}
				}
				pos=start-1;
			}

		}
		if(flag==0)
			cout<<-1<<endl;
		else
			cout<<ans<<endl;


	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}