/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
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

ll cbits(ll n) 
{ 
    ll c=0;
    while (n) 
    { 
      n &=(n-1); 
      c++; 
    } 
    return c; 
} 
int main()
{
	IOS
    
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
        ll ca=cbits(a);
        ll cb=cbits(b);
		ll cnt=0;
		for (ll i =(pow(2,ca)-1); i < c; ++i)
		{
			if((cbits(i)==ca)&&(cbits(c-i)==cb))
				cnt++;
		}
		cout<<cnt<<endl;
	}



    return 0;
}
