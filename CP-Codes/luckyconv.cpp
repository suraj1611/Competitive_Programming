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

	string a,b;
	cin>>a>>b;
	ll n=a.length();
	ll a7=0,a4=0,b7=0,b4=0,c=0,ans=0,gen=0;
	rep(i,n)
	{
		if(a[i]=='4')
			a4++;
		else if(a[i]=='7')
			a7++;
		if(b[i]=='4')
			b4++;
		else if(b[i]=='7')
			b7++;
		if(a[i]==b[i])
			c++;
	}
	if(a4==b4&&a7==b7&&(n-c)%2==0)
		ans=(n-c)/2;
	else if(a4==b4&&a7==b7&&(n-c)%2==1)
		ans=(n-c)/2+1;
	else if(a4!=b4&&a7!=b7)
	{
		//cout<<a4<<" " <<a7<<" "<<b4<<" " <<b7<<endl;
		if(b4>a4)
			gen=b4-a4;
		else if(b7>a7)
			gen=b7-a7;
		c+=gen;
		ans+=gen;
		if((n-c)%2==0)
			ans+=(n-c)/2;
		else
			ans+=(n-c)/2+1;
	}
	cout<<ans<<endl;



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

