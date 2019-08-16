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

bool isvowel(char c)
{
	if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
		return 1;
	else
		return 0;
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

	string a,b;
	cin>>a>>b;
	ll n=a.length(),m=b.length();
	ll lcs[n+1][m+1]={0};
	for(ll i=0;i<=n;i++)
	{
		for(ll j=0;j<=m;j++)
		{
			if(i==0 or j==0)
				lcs[i][j]=0;
			else if(a[i-1]==b[j-1] and isvowel(a[i-1])==0)
				lcs[i][j]=lcs[i-1][j-1]+1;
			else
				lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
		}
	}
	cout<<lcs[n][m];


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}