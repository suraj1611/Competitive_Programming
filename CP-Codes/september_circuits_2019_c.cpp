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

	ll a,b,c,k=0;
	cin>>a>>b>>c;
	string s1,s2,s3,s4="";
	cin>>s1>>s2>>s3;
	char ch1=s1[a-1],ch2=s3[0];
	rep(i,c-1)
	{
		if(s3[i]!=s3[i+1])
			{
				k=s3[i]<s3[i+1];
				break;
			}
	}
	ll j=0,mid,lo='a',hi=s3[0]-1;
	if(k)
		hi++;
	while(lo<=hi)
	{
		mid = hi+1;
		for(ll i=j;i<b;i++)
		{
			ll x=s2[i];
			if(x<=hi and x>=lo)
			{
				mid = min(mid,x);
			}
		}
		if(mid==hi+1)
			break;
		for(ll i=j;i<b;i++)
		{
			if(s2[i]==mid)
				s4+=s2[i],j=i+1;
		}
		lo=mid+1;
	}
	cout<<s1+s4+s3<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}