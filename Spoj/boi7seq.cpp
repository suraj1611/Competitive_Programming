#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define sc scanf
#define pf printf

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    stack <ll> s;
    rep(i,n)
    {
        cin>>a[i];
    }
    for(ll i=n-1;i>=0;i--)
    {
        s.push(a[i]);
    }
    ll x,y,cost=0,z;
    while(true)
    {
        if(s.size()<=1)
            break;
        x=s.top();
        s.pop();
        y=s.top();
        s.pop();
        z=max(x,y);
        cost+=z;
        s.push(z);
    }
    cout<<cost<<endl;
}
