#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
ll gcd(ll a,ll b)
{
    if(a==0)
        return b;
    else
        return(gcd(b%a,a));
}
int main()
{
int t;
cin>>t;
int n=t;
while(t--)
{
    ll a,b,c,k,l=0;
    cin>>a>>b>>c;
    while(l!=1)
    {
    k=gcd(a,b);
    l=gcd(k,c);
    a/=l;b/=l;c/=l;
    }
    k=gcd(a,b);
    if(k==1)
    cout<<"Case "<<n-t<<":"<<" Yes"<<endl;
        else
    cout<<"Case "<<n-t<<":"<<" No"<<endl;


}
return 0;
}
