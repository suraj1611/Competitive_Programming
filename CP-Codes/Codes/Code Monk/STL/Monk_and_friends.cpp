#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
cin>>t;
while(t--)
{
    ll int n,m,i;
    cin>>n>>m;
    ll int a,b;
    set <ll int> s;
    set <ll int> :: iterator it;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
    for(i=0;i<m;i++)
    {
        cin>>b;
        if(s.find(b)!=s.end())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        s.insert(b);
    }
}
}
