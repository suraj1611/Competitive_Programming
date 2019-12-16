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
	ll y,i;
	cin>>y;
	ll l=0,d=0,m=0,s=0;
	ll j1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	ll j2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	ll g1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	ll g2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if(y==1918)
    {
        j1[1]=15;j2[1]=16;
    }
	if(y<=1918)
    {
        if(y%4==0)
            l=1;
        if(l==1)
        {
            rep(i,12)
            {
                s+=j2[i];
                if(s>256)
                {
                    d=256-s+j2[i];m=i;
                    break;
                }
            }
        }
        else
        {
            rep(i,12)
            {
                s+=j1[i];
                if(s>256)
                {
                    d=256-s+j1[i];m=i;
                    break;
                }
            }
        }

    }
    else
    {
        if((y%400==0)||(y%4==0&&y%100!=0))
            l=1;
        if(l==1)
        {
            rep(i,12)
            {
                s+=g2[i];
                if(s>256)
                {
                    d=256-s+g2[i];m=i;
                    break;
                }
            }
        }
        else
        {
            rep(i,12)
            {
                s+=g1[i];
                if(s>256)
                {
                    d=256-s+g1[i];m=i;
                    break;
                }
            }
        }
    }
    if(d<10)
        cout<<0<<d<<".";
    else
        cout<<d<<".";
    if(m<10)
        cout<<0<<m+1<<".";
    else
        cout<<m+1<<".";
    cout<<y<<endl;
}
