#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
    ll n,i;
    cin>>n;
    vector < pair <ll, string> > v;
    rep(i,n)
    {
        int x;string y;
        cin>>y>>x;
        v.push_back(make_pair(x*-1,y));
    }
    sort(v.begin(),v.end());
    rep(i,v.size())
        cout<<v[i].second<<" "<<(v[i].first)*-1<<endl;
}
