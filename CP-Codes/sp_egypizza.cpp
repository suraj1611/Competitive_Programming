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

	ll n;
	cin>>n;
	string s;
	map <ll,ll> m;
	rep(i,n)
	{
		cin>>s;
		if(s=="1/4")
			{
					m[1]++;
			}
		else if(s=="1/2")
			m[2]++;
		else if(s=="3/4")
			m[3]++;

	}
	
	if(m[3]>=m[1])
	{
		m[1]=0;
	}
	else
	{
		m[1]-=m[3];
	}
	
	if(2*m[2]>=m[1])
	{
		m[1]=0;
	}
	else
	{
		m[1]-=2*m[2];
	}
	//cout<<m[1]<<" "<<m[2]<<" "<<m[3]<<endl;
	ll p=m[1]/4;
	ll q=m[1]%4;
	if(q!=0)
		q=1;
	cout<<m[3]+m[2]/2+m[2]%2+p+q+1<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}