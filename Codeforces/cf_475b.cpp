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

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,m;
	cin>>n>>m;
	string a,b;
	cin>>a>>b;
	ll flag=1;
	/*rep(i,n-1)
	{
		if((a[i]=='>' and a[i+1]=='<') or (a[i]=='<' and a[i+1]=='>'))
		{
			continue;
		}
		else
			flag=0;
	}
	
	rep(i,m-1)
	{
		if((b[i]=='^' and b[i+1]=='v') or (b[i]=='v' and b[i+1]=='^'))
		{
			continue;
		}
		else
			flag=0;
	}*/

	if(((a[0]=='<' and b[0]=='^') or (a[0]=='>' and b[m-1]=='^') or (a[n-1]=='<' and b[0]=='v') or (a[n-1]=='>' and b[m-1]=='v') ))
		flag=0;
	if(!flag)
		cout<<"NO"<<endl;
	else
	{
		cout<<"YES"<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}