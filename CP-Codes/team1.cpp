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

	ll n,m,c=0;
	cin>>n>>m;
	ll a[n+m+5],t,k;
	if(n-m>1||m>2*(n+1))
	{
		cout<<-1<<endl;
		return 0;
	}
	else
	{
		if(m==n-1)
		{
			a[0]=-1;
			a[m+1]=-1;
			t=n-1;
		}
		else if(m==n)
		{
			a[m+1]=-1;
			t=n;
		}
		else 
			t=n+1;
		k=m%t;
		if(k==0&&m!=t)
			k=n+1;
		if(a[0]==-1)
			cout<<0;
		rep1(i,n)
		{
			if(a[i]!=-1)
			{
				if(k>0)
					cout<<110;
				else
					cout<<10;
				k--;
			}
		}
		 if (a[m + 1] != -1) 
		 {
            if (k > 0) cout<<11<<endl;
            else cout<<1<<endl;
         }

	}

	

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
