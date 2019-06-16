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

bool check(ll n)
{
	while(n>0)
	{
		ll p=n%10;
		if(p&1)
			return 0;
		n/=10;
	}
	return 1;
}

ll toNum(string s)
{
	ll num=0;
	rep(i,s.length())
	{
		num=num*10 + (s[i]-'0');
	}
	return num;
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
	ll p=t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll flag=0;
		string s=to_string(n);
		string str=s;
		
		ll f1=0,f2=0;

		rep(i,s.length())
		{
			if((s[i]-'0')&1)
			{
				s[i]--;
				f1=1;
				for(ll j=i+1;j<s.length();j++)
				{
					s[j]='8';
				}
			}
			if(f1)
			 break;
		}


		string s1=s;
		s=str;
		//cout<<s<<endl;

		rep(i,s.length())
		{
			if((s[i]-'0')&1)
			{
				if(s[i]=='9')
					{
						s[i]='0';
						ll j=i-1;
						while(j>0 && s[j]=='8')
						{
							s[j]='0';
							j--;
						}
						//cout<<s<<endl;
						if(j==0 && s[j]=='8')
							s="2"+s;
						else if(j>0)
							s[j]=s[j]+2;
						
						

					}
					else
							s[i]=(s[i]+1);
						//cout<<s<<endl;

				for(ll j=i+1;j<s.length();j++)
				{
					s[j]='0';
				}
				//cout<<s<<endl;
				f2=1;
			}
			if(f2)
			 break;
		}

		string s2=s;


		ll n1= toNum(s1);
		ll n2= toNum(s2);
		//cout<<n1<<" "<<n2<<endl;

		cout<<"Case #"<<p-t<<": "<<min(abs(n-n1),abs(n-n2))<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}