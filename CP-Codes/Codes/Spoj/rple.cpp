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
int p=t;
while(t--)
{
    ll n,r,c=0;
    cin>>n>>r;
    ll x[r],y[r];
    set <ll> s;
    set <ll> cv;
    rep(i,r)
    {
        cin>>x[i]>>y[i];
        s.insert(x[i]);
        cv.insert(y[i]);
    }
    rep(i,n)
    {
        if(s.count(i)&&cv.count(i))
        {c=1;break;}
    }
    if(c==1)
        cout<<"Scenario #"<<p-t<<":"<<" spied"<<endl;
    else
        cout<<"Scenario #"<<p-t<<":"<<" spying"<<endl;


}
return 0;
}
