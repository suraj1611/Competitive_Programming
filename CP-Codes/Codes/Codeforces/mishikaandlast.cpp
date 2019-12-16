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
	ll z=0;
	ll a[n+5];
	rep1(i,n/2)
	cin>>a[i];
	ll b[2*n + 5];
	ll minm=mx,maxm=mn;
	ll p=n/2,q=n/2+1,curmin=mx,curmax=mn;
	for (ll i = n/2; i >= n/2; --i)
	{
		if(p<1||q>n)
			break;
		ll t=a[i]/2;
		//cout<<t<<endl;
		if((a[i]&1)==0)
		{
			curmin=max(z,t);
			curmax=t;
			b[p]=curmin;
			b[q]=curmax;
			
		}
		else
		{
			curmin=max(z,t);
			curmax=t+1;
			b[p]=curmin;
			b[q]=curmax;
		}
		p--;q++;
		//cout<<curmin<<" "<<curmax<<endl;

	}
	for (ll i = n/2-1; i >= 1; --i)
	{
		if(p<1||q>n)
			break;
		curmin=min(curmin,a[i]-curmin);
		curmax=a[i]-curmin;
		b[p]=curmin;
		b[q]=curmax;
		p--;q++;
		//cout<<curmin<<" "<<curmax<<endl;

	}
		rep1(i,n)
		cout<<b[i]<<" ";


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

