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
#define endl "\n"
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

	ll n,k;
	cin>>n>>k;
	ll minm=__builtin_popcount(n);
	if(k<minm)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	priority_queue <ll> pq;
	rep(i,32)
	{
		if((n>>i)&1)
		pq.push(i);
	}
	while(pq.size()<k)
	{
		if(pq.top()==0)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		ll p=pq.top();
		pq.pop();
		pq.push(p-1);
		pq.push(p-1);
	}
	cout<<"YES"<<endl;
	while(!pq.empty())
	{
		cout<<((1<<pq.top()))<<" ";
		pq.pop();
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}