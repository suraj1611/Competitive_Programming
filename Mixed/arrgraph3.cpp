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
		ll n;
		cin>>n;
		ll a[n];
		rep(i,n)
		cin>>a[i];
		ll flag=0,i,j,k=0;
		for (i = 0; i < n-1 ; ++i)
		{
			for (j = i+1; j < n; ++j)
			{
				if(__gcd(a[i],a[j])!=1&&a[i]!=47)
					flag=1;			
			}
			if(flag==1)
				break;
		}
		rep(i,n)
		if(a[i]==47)
			k++;
		//cout<<"k="<<k<<endl;
		if(k==n)
		{
			a[0]=29;
			cout<<1<<endl;
			rep(i,n)
			cout<<a[i]<<" ";
		}
		else if(flag==0)
		{
			cout<<0<<endl;
			rep(i,n)
			cout<<a[i]<<" ";
		}
		else
		{
			a[i]=47;
			cout<<1<<endl;
			rep(i,n)
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
