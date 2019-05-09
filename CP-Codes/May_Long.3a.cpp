#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
int main()
{
int t;
cin>>t;
while(t--)
{
    ll m,n,res=0,s=0,i,j,k;
    cin>>m>>n;
    int a[m],b[m];
    rep(i,m)
    cin>>a[i];
    rep(i,m)
    {
    cin>>b[i];
    }
    rep(i,m)
    {
        rep(j,m)
        {
            ll fib[n];
            fib[0]=a[i];
            fib[1]=b[j];
            for(k=2;k<n;k++)
               {
               fib[k]=fib[k-1]+fib[k-2];
               }
            res=(res+fib[n-1])%1000000007;
        }
    }
    cout<<res%md<<endl;

}
return 0;
}
