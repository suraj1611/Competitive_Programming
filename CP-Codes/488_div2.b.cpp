#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define pf printf
#define sc scanf
#define maxsize 1100005


int compare(ll a,ll b)
{
    if(a>b)
        return a>b;
    else
        return a<b;
}

int main()
{

    ll n,k;
    cin>>n>>k;
    map <ll,ll, greater <ll> > mp;
    map < ll,ll > c;
    ll a[n],b[n];
    rep(i,n)
    cin>>a[i];
    rep(i,n)
    {
        cin>>b[i];
        mp[a[i]]=b[i];
    }
    ll t=0;

    map <ll, ll> :: iterator i;
    for(i=mp.begin();i!=mp.end();i++)
    {
    t=0;
    map <ll, ll> :: iterator it;
    for(it=i;it!=mp.end();it++)
    {
        c[i->first]=c[i->first] + it->second;
        t++;
        if(t>(k))
            break;
    }
    t=0;
    }
    rep(i,n)
    cout<<c[a[i]]<<" ";

}
