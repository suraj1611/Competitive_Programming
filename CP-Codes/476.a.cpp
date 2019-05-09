#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int main()
{
int k,n,p,s;
cin>>k>>n>>s>>p;
int t,q,w;
t=k*n;
if(t%s==0)
    cout<<(ceil)(t/(s*p));
else
{
    t=((ceil)(t/s))*s;
    cout<<"Hello";
    cout<<"\n"<<t;
    cout<<(ceil)(t/(s*p));
}
return 0;
}
