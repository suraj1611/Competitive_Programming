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
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll prime[maxsize];



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

void seive()
{
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=true;
	for(ll i=2;i*i<=maxsize;i++)
	{
		if(prime[i]==true)
		{
		     for(ll j=2*i;j<maxsize;j+=i)
			{
			prime[j]=false;
			}
		}
	}
}

int bs(ll a[],ll x,ll n)
{
    ll l=0,h=n-1,mid;
    while(l<=h)
    {
    mid=(l+h)/2;
    if(x<a[mid])
        h=mid-1;
    else if(x>a[mid])
        l=mid+1;
    else
        return 1;
    }
    return 0;
}

int main()
{
	IOS
	ll n;
    map <ll , ll > m;
    set <ll> s;
	cin>>n;
	ll a[n];
	rep(i,n)
	{
	cin>>a[i];
	s.insert(a[i]);
	m[a[i]]++;
	}

    map <ll,ll> :: iterator i;
	for(i = m.begin();i != m.end();++i)
    {
        cout<<(i)->first<<" "<<(i)->second<<endl;
    }

	ll ans=-1;
	ll c=0;
	set <ll> :: iterator it;
	for(it = s.begin();it != s.end();++it)
        {
            if(s.size()==1)
            {
                ans=n;break;
            }
            c++;
            if(abs((*it)-(*(++it)))<=1)
                {it--;ans=max(ans,(m[*it]+m[*(++it)]));}
            it--;
            if(m[*it]>ans)
                ans=m[*it];
            if(c==(s.size()-1))
                break;
        }
    cout<<ans<<endl;
}

