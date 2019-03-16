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
std::vector < pair <ll,ll> > v;
 
 
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
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("in.txt", "r", stdin);
    // for writing output to output.txt
    freopen("out.txt", "w", stdout);
#endif
   
	
 
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		 for(ll i=1;i<20;i++)
		{
		v.pb(mp(((1<<i)*i)+v[i-1].first,i));
		}
		ll sum=0,a=0,b=0;
		for(ll i=1;i<20;i++)
		{
			if(sum+v[i].first>=n)
			{
				a=i-1;
				b=i;
				break;
			}
			else
			sum+=v[i].first;
			//cout<<sum<<endl;
		}
		//cout<<"a="<<a<<" "<<"b="<<b<<endl;
		ll p=v[b].second+(v[b].second-1);
		//cout<<"p="<<p<<endl;
		int i,flag=0;
		for ( i = 0; i < p; ++i)
		{
 
			if((v[a].first+1)>n)
				{
					cout<<i<<endl;
					flag=1;
					break;
				}
			else if((v[a].first+1)>=n)
				{
					
					cout<<i+1<<endl;
					flag=1;
					break;
				}
			else
			v[a].first++;
 
			//cout<<v[a].first<<endl;
		}
		if(flag!=1)
		cout<<i<<endl;
		v.clear();
 
 
 
	}
 
	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
    return 0;
}