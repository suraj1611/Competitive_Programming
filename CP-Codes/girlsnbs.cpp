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
    double a,b,p,q;
    cin>>a>>b;
    while(a!=-1&&b!=-1)
    {
        p=max(a,b);
        q=min(a,b);
        if(p==0||q==0)
            cout<<p<<endl;
        else if(p==1||q==1)
            cout<<(int)ceil(p/2)<<endl;
        else
            cout<<(int)(ceil(p/q))<<endl;
        cin>>a>>b;
    }
}
