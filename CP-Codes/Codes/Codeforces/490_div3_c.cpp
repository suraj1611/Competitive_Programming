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

ll bs(ll a[],ll x,ll n)
{
    ll l=1,h=n-1,mid;
    while(l<=h)
    {
    mid=(l+h)/2;
    if(x<a[mid])
        h=mid-1;
    else if(x>a[mid])
        l=mid+1;
    else
        return mid;
    }
    return mid;
}

int main()
{
	IOS
	ll n,k,i,j,pos;
	cin>>n>>k;
	string s,str;
	cin>>s;
	map < char , ll > m;
	rep(i,n)
	{
	    m[s[i]]++;
	}
	char c='b';
	ll cs[26]={0};
	cs[0]=m['a'];
	for(i=1;i<26;i++)
    {
        cs[i]=cs[i-1]+m[c];
        c=(char)(c+1);
    }

    if(k<=cs[0])
    {pos=0;}
    else
    {pos=bs(cs,k,26);}

    //cout<<pos<<"pos"<<endl;

    if(pos==0)
    {
        rep(i,n)
        {
            if(s[i]!='a')
                str+=s[i];
            else
                k--;
            if(k==0)
            {
                str+=s.substr(i+1,n);
                break;
            }
        }
    }
    else
    {
        ll w=pos-1;
        ll e=k-cs[w];
        rep(i,n)
        {
            if(!(s[i]>=97&&s[i]<=97+w))
            {
                if(s[i]==(97+pos)&&e>0)
                    e--;
                else
                    str+=s[i];
            }
            else
            k--;
            if(k==0)
            {
                str+=s.substr(i+1,n-i);
                break;
            }
        }
    }
    cout<<str<<endl;
}

