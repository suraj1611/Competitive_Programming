#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
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
    ll n,i;
    sc("%lld",&n);
    ll a[n+5];
    sc("%lld",&a[0]);
    ll cs[n+5];
    cs[0]=a[0];
    int c=1;
    for(i=1;i<n;i++)
    {
    sc("%lld",&a[i]);
    if (c%2==0)
        cs[i]=cs[i-1]+a[i];
    else
        cs[i]=cs[i-1]-a[i];
    c++;
    }

    ll q;
    sc("%lld",&q);
    while(q--)
    {
        ll l,r,ans=0;
        sc("%lld%lld",&l,&r);
        ans=cs[r-1]-cs[l-2];
        if(l%2==0)
        pf("%lld\n",(ans*-1));
        else if(l==1)
        pf("%lld\n",cs[r-1]);
        else
        pf("%lld\n",ans);
    }
}
}
