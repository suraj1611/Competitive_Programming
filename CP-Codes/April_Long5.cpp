#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int main()
{
int t;
cin>>t;
while(t--)
{
    ll w,n,ans;
    cin>>n>>w;
    int x,y;
    if(n==2)
    ans=((9-w)%1000000007);
    else if(n==3)
    ans=(10+(9-w)) %1000000007;
    else
    ans=(9*(10^(n-3))+(9-w)) %1000000007;

    cout<<ans<<endl;

}
return 0;
}
