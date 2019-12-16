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
    ll n,s=0;
    cin>>n;
    ll a[n];
    rep(i,n)
    {
        cin>>a[i];
        s+=a[i]%n;
    }
    if(s%n==0)
        cout<<"YES"<<endl;
    else
            cout<<"NO"<<endl;

}
return 0;
}
