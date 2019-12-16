#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
int n,x,i;
cin>>n;
set <int> s;
for(i=0;i<n;i++)
{
    cin>>x;
    if(x!=0)
    s.insert(x);
}
int ans=s.size();
cout<<ans<<endl;
}
