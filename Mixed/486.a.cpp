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
ll n,k,c=0,m,flag=0;
cin>>n>>k;
set <ll> s;
vector <ll> v;
ll a[n];
rep(i,n)
{
    cin>>a[i];
    m=s.size();
    s.insert(a[i]);
    if(s.size()-m==1)
        v.push_back(i+1);
    if(s.size()==k)
        {
        flag=1;break;
        }
}
vector <ll> :: iterator it;
if(flag==1)
    {
        cout<<"YES"<<endl;
        for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    }
else
    cout<<"NO"<<endl;
return 0;
}
