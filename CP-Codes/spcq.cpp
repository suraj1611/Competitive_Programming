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
ll sod(ll n)
{
    ll sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    while(true)
    {
        if(n%sod(n)==0)
            {cout<<n<<endl;break;}
        else
            n++;
    }


}
return 0;
}
