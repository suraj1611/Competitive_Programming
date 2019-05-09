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

ll ugly[10005];

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

void getugly()
{
	
	ugly[0]=1;
	ll next2=2,next3=3,next5=5;
	ll nextugly=1;
	ll i2=0,i3=0,i5=0;
	rep1(i,10005)
	{
		
		nextugly=min({next2,next3,next5});
		ugly[i]=nextugly;
		if(nextugly==next2)
		{
			next2=ugly[++i2]*2;
		}
		if(nextugly==next3)
		{
			next3=ugly[++i3]*3;
		}
		if(nextugly==next5)
		{
			next5=ugly[++i5]*5;
		}

	}
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
	getugly();
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<ugly[n-1]<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}