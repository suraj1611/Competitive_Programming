
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

ll prime[maxsize];

vector <ll> v[1000000005];

ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else
	return(gcd(b%a,a));
}

ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}



void fact()
{
    for(ll i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                v.pb(i);
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

	ll l,r,x,y;
	cin>>l>>r>>x>>y;
	ll p=x*y;
	fact(p);
    ll c=0;
    vector <ll> :: iterator i;
    for(i=v.begin();i!=v.end();i++)
        {
           ll q=p/(*i);
            if(lcm(*i,q)==y&&gcd(*i,q)==x&&*i>=l&&*i<=r)
            {
                c++;
            }
            if(*i>r)
                break;
        }
    cout<<c<<endl;
}
