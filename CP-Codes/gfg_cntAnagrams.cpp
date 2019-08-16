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
#define endl "\n"
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll power(ll x, ll  y) 
{ 
	ll m=1;
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

int findhash(string s)
{
	ll n= s.length();
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=(sum%md+(s[i]*s[i])%md)%md;
	}
	return sum;
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
		string s,p;
		cin>>s>>p;
		s=s+"$";
		int n=p.length();
		string str = s.substr(0,n);
		int hash1=findhash(str);
		int hash=findhash(p);
		int k=0,c=0;
		for(int i=n,k=0;i<s.length();i++,k++)
		{
			//cout<<hash<<" "<<hash1<<endl;
			if(hash==hash1)
				c++;
			
			hash1-=s[k]*s[k];
			hash1+=s[i]*s[i];
			
		}
		cout<<c<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}