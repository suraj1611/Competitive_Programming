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

ll n,r=0;
ll a[maxsize];


ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
}

ll cal(ll k,ll x)
{
	stack <ll> s;
	s.push(0);
	for(ll i=k;i<n;i++)
	{
		if(i==n-1&&x==3)
		{
			return 0;
		}
		if(a[i]==3)
		{
			return max(cal(i+1,2),cal(i+1,1));
		}
		else if(a[i]==0)
			{
				r++;
				s.push(0);
			}
		else if(a[i]==1)
		{
			if(s.top()!=1)
				s.push(a[i]);
			else
				r++;
		}
		else if(a[i]==2)
		{

			if(s.top()!=2)
				s.push(a[i]);
			else
				r++;
		} 
	}
	
	return r;

}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	cin>>n;
	rep(i,n)
	cin>>a[i];
	ll top=0;
	rep(i,n)
	{
		if(a[i]==0||a[i]==top)
			r++,top=0;
		else
		{
			if(a[i]==3)
				{
					if(top==2)
						top=1;
					else if(top==1)
						top=2;
				}
			else
			top=a[i];
		}		
	}
	cout<<r<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

