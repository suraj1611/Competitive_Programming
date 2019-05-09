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
int t;
cin>>t;
while(t--)
{
    ll m,n,s1=0,s2=0,sum=0,k;
    cin>>m>>n;
    ll x[m+5],y[m+5];
    rep(i,m)
    {
    cin>>x[i];
    s1=(s1+x[i])%md;
    }
    rep(i,m)
    {
        cin>>y[i];
        s2=(s2+y[i])%md;
    }
    ll f[n+1];
    f[0]=s1;
    f[1]=s2;
    for(k=2;k<n;k++)
    {
        f[k]= ((f[k-1]%md)+(f[k-2]%md))%md;
    }
               sum=((sum%md)+(f[n-1]% md))%md;

        cout<<(sum*m)%md<<endl;
}
}
