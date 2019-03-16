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
	ll a[n+5];
	ll red[n+5]={0},green[n+5]={0},blue[n+5]={0};
	rep1(i,n)
	{
		cin>>a[i];
		if(a[i]==0)
		{
			red[i]=red[i-1]+1;blue[i]=blue[i-1];green[i]=green[i-1];		
		}
		else if(a[i]==1)
		{
			red[i]=red[i-1];blue[i]=blue[i-1];green[i]=green[i-1]+1;		
		}
		else if(a[i]==2)
		{
			red[i]=red[i-1];blue[i]=blue[i-1]+1;green[i]=green[i-1];		
		}
	}
	ll q;
	cin>>q;
	ll l,r,c,x,col;

	rep(i,q)
	{
		cin>>x;
		if(x==0)
		{
			cin>>l>>r>>c;
			if(c==0)
				cout<<red[r]-red[l-1]<<endl;
			else if(c==1)
				cout<<green[r]-green[l-1]<<endl;
			else
				cout<<blue[r]-blue[l-1]<<endl;
			
		}
		else
		{
			cin>>l>>r;
			for (int i = l; i <= r; ++i)
			{
				if(a[i]==0)
				{
					red[i]=green[i-1];
				}
					
				else if(a[i]==1)
				{
					green[i]=blue[i-1];
				}
				else
				{
					blue[i]=red[i-1];
				}
			}
			
		}
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

