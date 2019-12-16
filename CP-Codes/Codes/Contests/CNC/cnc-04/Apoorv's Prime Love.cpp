#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define sc scanf
#define pf printf
#define maxsize 5000100

bool prime[maxsize];
ll prevprime[maxsize]={0};
ll nextprime[maxsize]={0};

ll nsum[205]={0};

int main()
{
    ll i,j;
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for(i=2;i*i<maxsize;i++)
    {
        if(prime[i]==true)
        {
            for(j=2*i;j<maxsize;j+=i)
            {
                prime[j]=false;
            }
        }
    }

    prevprime[0]=1e9;
    prevprime[1]=1e9;
    for(i=2;i<maxsize;i++)
    {
        if(prime[i]==true)
            prevprime[i]=i;
        else
            prevprime[i]=prevprime[i-1];
    }

    nextprime[maxsize-1]=maxsize-1;
    for(i=maxsize-1;i>=0;i--)
    {
        if(prime[i]==true)
            nextprime[i]=i;
        else
            nextprime[i]=nextprime[i+1];
    }

    for(i=1;i<=180;i++)
        {
    nsum[i]=(i*(i+1))/2;
        }

    ll sum=0,pp=180;
	int t;
	sc("%d",&t);
	while(t--)
	{
	    ll n,a,b;
	    sc("%lld%lld%lld",&n,&a,&b);
	    ll c=0,s1=0,s2=0,c1=0,c2=0;
        c1=n-prevprime[n];
        c2=nextprime[n]-n;
        sum=(sum+min(a*nsum[c1],b*nsum[c2]))%md;
	}
	pf("%lld\n",sum);

}
