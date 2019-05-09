#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007

ll max(ll a,ll b)
{
    if(a>b)
        return a;
    else

        return b;
}



int main()
{
int t;
cin>>t;
int p=t;
while(t--)
{
    ll n;
    cin>>n;
    ll a[10001],dp[10001];
    rep(i,n)
    cin>>a[i];
    dp[0]=a[0];
    dp[1]=max(dp[0],a[1]);
    for(ll i=2;i<n;i++)
    {
        dp[i]=max(dp[i-1],a[i]+dp[i-2]);
    }
    printf("Case %d: %lld\n", p-t, dp[n-1]);
}
}
