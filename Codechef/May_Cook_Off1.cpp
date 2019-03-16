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
    double x,y,z,a,b;
    cin>>x>>y>>z>>a>>b;
    double m,n;
    m=abs(x-z);
    n=abs(y-z);
    m=m/a;
    n=n/b;
    if(m<n)
        cout<<"Chef"<<endl;
    else if(n<m)
        cout<<"Kefa"<<endl;
    else
        cout<<"Draw"<<endl;

}
return 0;
}
