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
    int a,b,c,d,ans;
    cin>>a>>b>>c>>d;
    int k;
    cin>>k;
    ans=(a-c+k)*60 + (b-d);
    cout<<ans<<endl;

}
return 0;
}
