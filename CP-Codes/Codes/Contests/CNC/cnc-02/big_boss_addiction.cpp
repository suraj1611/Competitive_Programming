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



int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	    ll n,m,c=0,i,p,k=0;
	    sc("%lld%lld",&n,&m);
	    if(n>100000000)
	     {p=n/100000;k=1;}
	    else
            p=n;
	    //cout<<p<<endl;
	    if(k==1)
	    {
	    for(i=1;i<p;i++)
        {
            if(n%i==0&&m%i==0)
                c=0;
            else
                c++;
        }
        i=0;
        for(i=p;i<=n;i++)
        {
            if(n%i==0&&m%i==0)
                c=0;
            else
                c++;
        }
	    }
	    else
        for(i=1;i<=n;i++)
        {
            if(n%i==0&&m%i==0)
                c=0;
            else
                c++;
        }
        pf("%lld\n",c+m);
	}
}
