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
ll n;
cin>>n;
ll a[n];
rep(i,n)
cin>>a[i];
ll m;
cin>>m;
ll b[m];
rep(i,m)
cin>>b[i];
sort(a,a+n);
sort(b,b+m);
ll ans=mx;
int i=0;int j=0;
while(i<n&&j<m)
{
    if(abs(a[i]-b[j])<ans)
        ans=abs(a[i]-b[j]);
    if(a[i]<b[j])
        i++;
    else
        j++;
}
cout<<ans<<endl;
}
}
