#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
int t;
cin>>t;
while(t--)
{
    ll n,i;
    set<string> s;
    set<string> :: iterator it;
    cin>>n;
    rep(i,n)
    {
        string x;
        cin>>x;
        s.insert(x);
    }
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;

}
}
