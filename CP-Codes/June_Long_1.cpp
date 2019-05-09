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
while(t--)
{
    double n,a,b,ac=0,bc=0,x;
    cin>>n>>a>>b;
    rep(i,n)
    {
        cin>>x;
        if(x==a)
            ac++;
        else if(x==b)
            bc++;

    }
    //cout<<ac<<" "<<bc<<endl;
    if(a==b)
            bc=ac;
    cout<<fixed<<setprecision(10)<<(ac*bc)/(n*n)<<endl;
}
return 0;
}
