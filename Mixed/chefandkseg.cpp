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

string str;
std::vector<ll> v1[100005];
std::vector< pair <ll,ll> >  v;
ll j=0;

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

/*void decToBinary(ll num )
{
	str="";
   if( num == 0 )
   {
      return;
   }

   decToBinary( num/2 );
   if(num%2==0)
   	str+="0";
	else
	str+="1";
}

ll cbits(ll n)
{
	ll c=0;
	while(n)
	{
		c++;
		n&=n-1;
	}
	return c;
}

void pushinv()
{
	ll p=str.length();
	rep(i,str.length())
	{
		if(str[i]=="1")
			v.pb()
	}
}*/

void pc(ll n)
{
	ll i=1;
	while(n)
	{
		if(n&1)
			v1[j].pb(1);
		i++;
		n>>=1;
	}
	j++;
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
		ll n,k;
		cin>>n>>k;
		
		rep(i,n)
		{
			ll x,y;
			cin>>x>>y;
			v.pb(mp(x,y));
		}
		for(ll i=0;i<=32;i++)
		{
			if(cbits(i)==k)
			{
				pc(i);
			}	
		}
		 

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

