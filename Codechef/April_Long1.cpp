#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
int main()
{
    ll n,i,j;
    cin>>n;
    ll a[n],b[n];
    rep(i,n)
    cin>>a[i];
    rep(i,n)
    cin>>b[i];
    ll x=mx,y=mx,z=mx;
    rep(i,n)
    {
        if(b[i]==1)
            x=min(a[i],x);
        if(b[i]==2)
            y=min(a[i],y);
        if(b[i]==3)
            z=min(a[i],z);
    }
    if(x+y>z)
        cout<<z<<endl;
    else
        cout<<(x+y)<<endl;
}
