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

	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll x1,x2,x3,x4,y1,y2,y3,y4;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		ll p=n*m;
		ll initb=p/2;
		ll initw=p-p/2;

		ll a1=(abs(x2-x1)+1)*(abs(y2-y1)+1);
		ll a2=(abs(x3-x4)+1)*(abs(y3-y4)+1);

		ll w1,b1,w2,b2;
		if(x1%2==0 && y1%2==0)
		{
			b1=a1/2;
			w1=a1-a1/2;
		}
		else
		{
			w1=a1/2;
			b1=a1-a1/2;
		}

		if(x3%2==0 && y3%2==0)
		{
			b2=a2/2;
			w2=a2-a2/2;
		}
		else
		{
			w2=a2/2;
			b2=a2-a2/2;
		}

		cout<<initw<<" "<<initb<<endl;
		cout<<a1<<" "<<a2<<endl;
		cout<<w1<<" "<<b1<<endl;
		cout<<w2<<" "<<b2<<endl;

		lb;lb;

		//cout<<initw-w1-w2<<" "<<initb-b1-b2<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}