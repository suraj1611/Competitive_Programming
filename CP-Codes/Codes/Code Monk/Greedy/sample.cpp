
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
    ll n,x,s=0;
    cin>>n>>x;
    ll a[n];
    rep(i,n)
    cin>>a[i];
    sort(a,a+n);
    stack <ll> st;
    ll i=0;
    rep(i,n)
    {
        s+=a[i];
        if(s<=x)
        st.push(a[i]);
        else
        break;
    }
    cout<<st.size()<<endl;
}
}
