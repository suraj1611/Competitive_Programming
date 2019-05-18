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

std::vector <ll> v;

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

void fact(ll n)
{
	for(ll i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				v.pb(i);
			}
			else
			{
				v.pb(i);
				v.pb(n/i);
			}
		}
	}
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
	fact(n);
	ll i=0,a=0,b=0;
	while(a<5 || b<5)
	{
		//cout<<a<<" "<<b<<endl;
		a=n/v[i];
		b=v[i];
		//cout<<a<<" "<<b<<endl;
		i++;
		if(i>=v.size())
			break;
	}
	char vowel[5] = {'a','e','i','o','u'};
	if(a<5 || b<5)
		cout<<-1<<endl;
	else
	{
		for(i=0;i<a;++i)
		{
			ll k=i;
			for(ll j=0;j<b;j++)
			{
				cout<<vowel[(k++)%5];
			}
			//lb;
		}
	}
	cout<<endl;



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}