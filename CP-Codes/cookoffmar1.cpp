#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
int t;
cin>>t;
while(t--)
{
    ll n,m,i,suma=0,sumb=0;
    cin>>n;
    ll a[n],b[n];
    rep(i,n)
        {
            cin>>a[i];
            suma+=a[i];
        }
    rep(i,n)
        {
            cin>>b[i];
            sumb+=b[i];
        }
    sort(a,a+n);
    sort(b,b+n);
    suma-=a[n-1];
    sumb-=b[n-1];
    if(suma<sumb)
        cout<<"Alice"<<endl;
    else if(suma>sumb)
        cout<<"Bob"<<endl;
    else
        cout<<"Draw"<<endl;
}
}
