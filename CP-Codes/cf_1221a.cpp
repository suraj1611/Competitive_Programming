/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long
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
		ll n;
		cin>>n;
		ll ar[n];
		priority_queue <ll, vector<ll>, greater<ll> > pq;
		ll flag=0;
		rep(i,n)
		{
			cin>>ar[i];
			if(ar[i]==2048)
				flag=1;
			pq.push(ar[i]);
			//m[a[i]]++;
		}
		while(pq.size()>=2)
		{
			ll a,b;
			a=pq.top();
			pq.pop();
			b=pq.top();
			pq.pop();
			//cout<<a<<" "<<b<<endl;
			if(a==2048 or b==2048)
			{
				flag=1;
				break;
			}
			if(a==b)
				pq.push(a+b);
			else
				pq.push(b);
		}
		ll a=pq.top();
		pq.pop();
		if(a==2048)
			flag=1;
		

		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;



	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}