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

	ll n,m;
	cin>>n>>m;
	ll a[n],b[n];
	rep(i,n)
	sc("%lli",&a[i]);
	rep(i,n)
	sc("%lli",&b[i]);
	priority_queue < pair <ll,ll> > pq;
	rep(i,n)
	{
		pq.push(mp(a[i]*b[i],b[i]));
	}
	while(m>0)
	{
		long double p,q,x,y;
		p=pq.top().F;
		q=pq.top().S;
		pq.pop();
		//cout<<p<< " "<<q<<endl;
		x=pq.top().F;
		y=ceil(abs(p-x)/q);
		if(m-y<0)
			m=y;
		else
			m-=y;
		//cout<<p-x<<endl;
		//cout<<x<<" "<<y<<endl;
		p-=q*y;
		//cout<<p<< " "<<q<<endl;
		//cout<<"m="<<m<<endl;
		pq.push(mp(p,q));
		
	}
	cout<<pq.top().F<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

