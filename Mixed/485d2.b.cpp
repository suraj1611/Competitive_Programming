#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll unsigned long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define sc scanf
#define pf printf

ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else
	return(gcd(b%a,a));
}
int main()
{
    ll x,y;
    long  double a1,a2;
    cin>>x>>y;
    a1=y*(log(x));
    a2=x*(log(y));
    //cout<<a1<<" "<<a2<<endl;
    if(a1>a2)
        cout<<">"<<endl;
    else if(a2>a1)
        cout<<"<"<<endl;
    else
        cout<<"="<<endl;
}
