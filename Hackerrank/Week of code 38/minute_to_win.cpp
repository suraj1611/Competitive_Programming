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


int main()
{
	IOS
	ll n,k,i;
	cin>>n>>k;
	ll a[n],b[n];
	rep(i,n)
	{
	    cin>>a[i];

	}
	b[0]=a[0];
	rep1(j,n)
	{
	     b[i]=b[i-1]+k;
	}
	ll c=0;ll d=0;
	for(i=0;i<n-1;i++)
    {
        if(!((a[i]+k)==b[i+1]))
            {
            c++;
            a[i+1]=b[i+1];
            }
    }



    b[n-1]=a[n-1];

    for(i=n-2;i>=0;i--)
    {
        b[i]=b[i+1]-k;
    }
    for(i=n-2;i>0;i--)
    {
        if(!(a[i]-k==b[i-1]))
        {
            d++;
            a[i-1]=b[i-1];
        }
    }

    cout<<min(c,d)<<endl;

}
