#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
    ll sq[100000];
    rep(i,100000)
    {
        sq[i]=i*i;
    }
int t;
cin>>t;
while(t--)
{
    ll x,y;
    vector <ll> v;
    cin>>x>>y;
    for(i=x;i<=y;i++)
        {
            v.push_back(sq[i]);
        }

}
}
