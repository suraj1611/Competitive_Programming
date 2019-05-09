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
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
/*#define miter map <ll,ll> :: iterator it; for(it=m.begin();it!=m.end();it++)
#define viter vector <ll> :: iterator it; for(it=v.begin();it!=v.end();it++)
#define siter set <ll> :: iterator it; for(it=s.begin();it!=s.end();it++)*/

ll prime[maxsize];

set <ll> s;

int cdiv(int n)
{
    ll c= 0;
    for (int i = 1; i <=n; i++) 
    {
        if (n % i == 0 && s.count(i)==1)
        {
        
                c++;
            
        }
    }
    //cout<<n<< " "<<c<<endl;
    return c;
}

int main()
{
	IOS

	ll n;
	cin>>n;
	ll a[n];
	rep(i,n)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	ll st[n+1]={0};
	st[0]=cdiv(a[0]);
	for (int i = 1; i <n; ++i)
	{
		st[i]=cdiv(a[i])+st[i-1];
	}
	ll q;
	cin>>q;
	rep(i,q)
	{
		ll x,y;
		cin>>x>>y;
		ll ans=0;
		if(x==0)
			ans=st[y];
		else
			ans=st[y]-st[x-1];
		cout<<ans<<endl;
	
	}

    return 0;
}

