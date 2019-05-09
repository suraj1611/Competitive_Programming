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
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

ll t[7000][7000];

ll lcs(string a,string b)
{
	ll l=a.length();
	rep(i,l+1)
	{
		rep(j,l+1)
		{
			if(i==0||j==0)
			{
				t[i][j]=0;
			}
			else if(a[i-1]==b[j-1])
			{
				t[i][j]=t[i-1][j-1]+1;
			}
			else
				t[i][j]=max(t[i-1][j],t[i][j-1]);
		}
	}

	return l-t[l][l];
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
		//memset(t,0,sizeof(t));
		string s,rev;
		cin>>s;
		rev=s;
		reverse(rev.begin(), rev.end());
		cout<<lcs(s,rev)<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}