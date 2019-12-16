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
#define maxsize 1000005

bool prime[maxsize];

int divisor[maxsize]={0};

int num[maxsize]={0};

int cum[maxsize];

vector <ll> p;

int c=0;


void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[1]=false;
    for(int i=2;i<maxsize;i++)
    {
        {
            for(int j=2*i;j<maxsize;j+=i)
            {
                prime[j]=false;
                divisor[j]++;
            }
        }
    }

    for(int i=2;i<=100;i++)
    {

        if(prime[i]==true)
            p.pb(i);

    }

    for(int i=1;i<maxsize;i++)
        {
            if(prime[i]==true)
            {
                if(prime[i+2]==true)
                    num[i]=1;
                else if(divisor[i+2]<=2)
                    num[i]=1;
            }
        }

    for(int i=0;i<p.size();i++)
    {
        int j=p[i];
        num[j*j*j-2]=0;
    }
    cum[0]=num[0];
    for(int i=1;i<maxsize;i++)
    {
        cum[i]=cum[i-1]+num[i];
    }
}

int main()
{

    sieve();
	int t;
	cin>>t;
	while(t--)
	{
	    ll l,r;
	    cin>>l>>r;
	    int ans=cum[r]-cum[l-1];
    cout<<ans<<endl;

	}

}
