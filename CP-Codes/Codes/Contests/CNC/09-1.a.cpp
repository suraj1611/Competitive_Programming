#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007

int main()
{
    ll n,s=0,c=0;
    cin>>n;
    ll a[n];
    rep(i,n)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    ll l=a[n-1];
    for(int i=n-2;i>=0;i++)
    {
        if(a[i]==l)
            c++;
        else
            break;
    }
    ll ans=(n-c)*l-(s-(c*l));
    cout<<ans<<endl;
}
