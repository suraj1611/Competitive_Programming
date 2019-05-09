#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
int len(string s)
{
    return (s.length());
}
int main()
{
    int n,l,k=0;
    cin>>n;
    string s;
    vector < pair < int , string > > v;
    rep(i,n)
    {
        cin>>s;
        l=s.length();
        v.push_back(make_pair(l,s));
    }
    sort(v.begin(),v.end());
    rep(i,n-1)
    {
        int f=v[i+1].second.find(v[i].second);
        //cout<<f<<endl;
        if(f!=-1)
            k=1;
        else
            {k=0;break;}
    }
    if(k==1||n==1)
    {
        cout<<"YES"<<endl;
        rep(i,n)
        {
            cout<<v[i].second<<endl;
        }
    }
    else
        cout<<"NO"<<endl;
}
