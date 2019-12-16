#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back

vector <ll> v;

ll ans(ll n)
{
    v.pb(1);
    v.pb(2);
    v.pb(2);
    for(ll i=3;i<=n;i++)
        v.pb((v[i-1]%md+v[i-2]%md)%md);

    return v[n];
}
int main()
{
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll an=ans(n);
    cout<<an<<endl;
}
return 0;
}
