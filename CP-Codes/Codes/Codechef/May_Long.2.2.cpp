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
    ll n,sum=0,j;
    cin>>n;
    ll a[n];
    rep(i,n)
    cin>>a[i];
    ll b[n];
    rep(i,n)
    {
        b[i]=2*a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum^=b[i];
    }
  cout<<sum<<endl;

}
return 0;
}
