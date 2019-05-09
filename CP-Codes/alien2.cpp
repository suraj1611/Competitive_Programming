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

int main()
{
    ll n,k,p;
    cin>>n>>k;
    ll a[n+5],a1[n+5],b[n+5],b1[n+5];
    rep(i,n)
    {cin>>a[i];a1[i]=a[i];}
    rep(i,n)
    {cin>>b[i];b1[i]=b[i];}
    ll ans;
    for(ll i=1;i<n;i++)
    {
        a1[i]=min(a1[i-1]+a[i],b1[i-1]+b[i]+a[i]);
        b1[i]=min(b1[i-1]+b[i],a1[i-1]+a[i]+b[i]);
        if(a1[i]>k&&b[i]>k)
        {
            ans=min(a1[i-1],b1[i-1]);
            p=i-1;
            break;
        }
       ans=min(a1[i],b1[i]);
        p=i;
    }
    if(n==1)
    {
        p=0;
        ans=min(a[0],b[0]);
    }
    cout<<p+1<<" "<<ans<<endl;
}
