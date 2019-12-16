#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int main()
{
int t;
cin>>t;
while(t--)
{
    ll m,n,sum=0,s=0;
    cin>>m>>n;
    int a[m],b[m];
    rep(i,m)
    cin>>a[i];
    rep(i,m)
    {
    cin>>b[i];
    s+=b[i];
    }
    rep(i,m)
    sum+=((a[i]*m*(n-2))+(s*(n-2)))%1000000007;
    cout<<sum<<endl;

}
return 0;
}
